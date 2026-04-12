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

void compile_app_for_garnet_single_port_mem(prog& prg, string dir, bool gen_config_only, bool multi_level_memory, bool use_metamapper) {
    cout << "Running CGRA flow on " << prg.name << endl;

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
