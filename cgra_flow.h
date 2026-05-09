#include "build_set_test.h"
#include "coreir_backend.h"
#ifdef COREIR
#include "cwlib.h"
#include "cgralib.h"
#endif
#include "app.h"
#include "prog_splitting_test.h"
#include "codegen.h"
#include "lake_target.h"
#include "simple_example_progs.h"
// #include "../prog.h"
#include "ubuffer.h"
#include <chrono>
#include <iostream>
#include <fstream>
#include "coreir/ir/json.h"
using std::cout;
using std::endl;


void preprocess_prog(prog& prg) {
    prg.sanity_check();

    break_up_multi_channel_inputs(prg);
    break_up_multi_channel_outputs(prg);
    dsa_writers_new(prg);
}

vector<string> cgra_flow_result(prog& prg, string dir, bool use_pond=false);
vector<string> aha_flow_result(prog& prg, string dir);

// Forward declaration for collateral-aware dispatch
void compile_app_for_garnet_dual_port_mem(prog& prg, string dir, bool gen_config_only, bool multi_level_memory, bool use_metamapper);

void sanity_check(prog& prg, vector<string>& cpu, vector<string> & verilator_res) {
    compare("cgra_" + prg.name + "_cpu_vs_verilog_comparison", verilator_res, cpu);
    string app_type = "single_port_buffer";
    cout << "*********************************************************" << endl;
    cout << "*** Interconnect Agnostic Test on < " << prg.name << " > PASS ***"<< endl;
    cout << "*********************************************************" << endl;
    cpy_app_to_folder(app_type, prg.name);
}

// Dispatch to the right compile_app_for_garnet_*_mem variant based on the
// LAKE_COLLATERAL_JSON_MEM env var. The legacy entry point
// (compile_app_for_garnet_single_port_mem) hardcodes the single-port path even
// when the user supplies a dual-port or fetch=2 collateral, which causes the
// scheduler to fail late (e.g. sanity_check_hw_schedule:no_violated_cycle_accurate_dependencies).
// This wrapper reads the same LAKE_COLLATERAL_JSON_MEM that load_memory_hierarchy
// would consume and forwards to the matching compile path.
void compile_app_for_garnet_auto(prog& prg, string dir, bool gen_config_only, bool multi_level_memory, bool use_metamapper) {
    const char* coll_path = std::getenv("LAKE_COLLATERAL_JSON_MEM");
    bool dispatch_dp = false;
    bool dispatch_fw2 = false;
    if (coll_path != nullptr && coll_path[0] != '\0') {
        try {
            LakeCollateral lc = load_lake_collateral_from_json(coll_path);
            // Wide-fetch (fetch2) is the right path whenever fetch_width==2,
            // even if dual_port_sram=true — the fetch2 path internally calls
            // set_config_fetch2() which sets dual_port_sram=true, and lake's
            // hardware for fw=2 always uses the wide-fetch agg/sram/tb
            // hierarchy (per Spec.gen_hardware). The dual_port_mem path is a
            // fw=1 regfile shape; only use it when there is no wide-fetch.
            dispatch_fw2 = (lc.fetch_width == 2);
            // dual_port_mem path is a fw=1 regfile shape (set_config_dp() in
            // options.h hardcodes fetch_width=1 and controller_name={"regfile"}),
            // so only use it for fw==1. For fw>=4 with dual_port_sram=true,
            // fall through to single_port_mem which loads the wide-fetch
            // collateral and honors dual_port_sram from the JSON.
            dispatch_dp  = (lc.fetch_width == 1) && lc.dual_port_sram;
            cout << "[compile_app_for_garnet_auto] collateral=" << coll_path
                 << " fw=" << lc.fetch_width
                 << " dual_port=" << (lc.dual_port_sram ? "true" : "false")
                 << " -> "
                 << (dispatch_dp ? "dual_port" : (dispatch_fw2 ? "fetch2" : "single_port"))
                 << endl;
        } catch (...) {
            cout << "[compile_app_for_garnet_auto] failed to read collateral; defaulting to single_port" << endl;
        }
    }
    bool gen_smt = false;
    if (dispatch_dp) {
        compile_for_garnet_dual_port_mem(prg, dir,
                gen_smt, gen_config_only, multi_level_memory, use_metamapper, prg.name + "_compute_mapped.json", false);
    } else if (dispatch_fw2) {
        compile_for_garnet_fetch2_mem(prg, dir,
                gen_smt, gen_config_only, multi_level_memory, use_metamapper, prg.name + "_compute_mapped.json", false);
    } else {
        compile_for_garnet_single_port_mem(prg, dir,
                gen_smt, gen_config_only, multi_level_memory, use_metamapper, prg.name + "_compute_mapped.json", false);
    }
}

void compile_app_for_garnet_single_port_mem(prog& prg, string dir, bool gen_config_only, bool multi_level_memory, bool use_metamapper) {
    cout << "Running CGRA flow on " << prg.name << endl;
    // Honor the collateral if one is present so existing callers
    // (e.g. clockwork_codegen.cpp emitted by Halide) get correct dispatch
    // without needing a codegen-template change.
    const char* coll_path = std::getenv("LAKE_COLLATERAL_JSON_MEM");
    if (coll_path != nullptr && coll_path[0] != '\0') {
        compile_app_for_garnet_auto(prg, dir, gen_config_only, multi_level_memory, use_metamapper);
        return;
    }

    // When lake collateral is provided, check fetch_width to dispatch
    // to the appropriate compile path.  fw==1 has no agg/tb sub-buffers
    // and must use the dual-port (single-fetch) compile path.
    const char* json_path = std::getenv("LAKE_COLLATERAL_JSON_MEM");
    if (json_path && std::string(json_path).size() > 0) {
        std::ifstream fin(json_path);
        if (fin.is_open()) {
            nlohmann::json j;
            fin >> j;
            fin.close();
            int fw = j.value("fetch_width", 1);
            if (fw == 1) {
                cout << "Collateral fetch_width==1; routing to dual-port compile path" << endl;
                compile_app_for_garnet_dual_port_mem(prg, dir, gen_config_only, multi_level_memory, use_metamapper);
                return;
            }
        }
    }

    //TODO: make this argument explicit to user
    bool gen_smt = false;

    compile_for_garnet_single_port_mem(prg, dir,
            gen_smt, gen_config_only, multi_level_memory, use_metamapper, prg.name + "_compute_mapped.json", false);

}

void compile_app_for_garnet_dual_port_mem(prog& prg, string dir, bool gen_config_only, bool multi_level_memory, bool use_metamapper) {
    cout << "Running CGRA flow on " << prg.name << endl;

    //TODO: make this argument explicit to user
    bool gen_smt = false;

    compile_for_garnet_dual_port_mem(prg, dir,
            gen_smt, gen_config_only, multi_level_memory, use_metamapper, prg.name + "_compute_mapped.json", false);

}

void compile_app_for_garnet_fetch2_mem(prog& prg, string dir, bool gen_config_only, bool multi_level_memory, bool use_metamapper) {
    cout << "Running CGRA flow on " << prg.name << endl;

    //TODO: make this argument explicit to user
    bool gen_smt = false;

    compile_for_garnet_fetch2_mem(prg, dir,
            gen_smt, gen_config_only, multi_level_memory, use_metamapper, prg.name + "_compute_mapped.json", false);

}
