#include "options.h"
#include "isl_utils.h"
#include "algorithm.h"
#include "coreir/ir/json.h"
#include <fstream>
#include <cstdlib>

using namespace dbhc;

banking_strategy CodegenOptions::get_banking_strategy(const std::string& buffer) {
  if (!contains_key(buffer, banking_strategies)) {
    return default_banking_strategy;
  }
  return map_find(buffer, banking_strategies);
}

void CodegenOptions::add_memory_hierarchy(const std::string& level) {
    // Check for external collateral JSON via environment variable:
    //   LAKE_COLLATERAL_JSON_<LEVEL> (e.g., LAKE_COLLATERAL_JSON_MEM)
    // Falls back to hardcoded presets if not set.
    std::string env_key = "LAKE_COLLATERAL_JSON_" + level;
    // Uppercase the level portion for the env var
    for (auto& c : env_key) c = toupper(c);
    const char* json_path = std::getenv(env_key.c_str());
    if (json_path && std::string(json_path).size() > 0) {
        cout << "\tLoading " << level << " collateral from: " << json_path << endl;
        LakeCollateral mem = load_lake_collateral_from_json(json_path);
        mem_hierarchy.insert({level, mem});
    } else {
        LakeCollateral mem(level);
        mem_hierarchy.insert({level, mem});
    }
}

string CodegenOptions::get_hierarchy_level(int capacity) {
    map<int, string> capacity2level;
    for (auto it: mem_hierarchy) {
        string level = it.first;
        capacity2level[it.second.get_single_tile_capacity()] = level;
    }
    return capacity2level.lower_bound(capacity)->second;

}


bool ConstantOffset::is_satisfied(isl_map* m, isl_map* s) {
    auto range2range = dot(inv(m), s);
    auto diff = isl_map_deltas(range2range);
    isl_val* max_val= lexmaxval(diff);
    isl_val* min_val  = lexminval(diff);
    int max = to_int(max_val);
    int min = to_int(min_val);
    if (max != min) {
        cout << "master controller sched: " << str(m) << endl;
        cout << "slave controller sched: " << str(s) << endl;
        cout << "shared controller does not have constant offset" << endl;
        return false;
    } else if (max > ub || min < lb) {
        cout << "master controller sched: " << str(m) << endl;
        cout << "slave controller sched: " << str(s) << endl;
        cout << "constant offset out of bound" << endl;
        return false;
    } else {
        return true;
    }
}

int LakeCollateral::get_ctrl_iter_level(string ctrl_name) {
        if (iter_level_map.count(ctrl_name)) {
            return iter_level_map.at(ctrl_name);
        } else {
            return iteration_level;
        }
    }

LakeCollateral create_single_port_wide_fetch_memory(int fetch_width, int capacity, int SIPO_num) {
    LakeCollateral mem;

    //Misc information
    mem.set_fetch_width(fetch_width);
    mem.set_max_chaining(4);
    mem.set_iteration_level(6);
    mem.set_counter_ub(65535);
    mem.set_multi_sram_accessor(true);
    mem.set_dual_port_sram(false);
    mem.set_wire_chain_en(true);

    mem.add_memory_component("agg", false);
    mem.add_read_port("agg", fetch_width);
    mem.add_write_port("agg", 1);
    mem.set_capacity("agg", 16);
    mem.make_duplication("agg", SIPO_num);

    mem.add_memory_component("tb", false);
    mem.add_read_port("tb", 1);
    mem.add_write_port("tb", fetch_width);
    mem.set_capacity("tb", 16);
    mem.make_duplication("tb", fetch_width - SIPO_num);

    mem.add_memory_component("sram", true);
    mem.add_read_port("sram", fetch_width);
    mem.add_write_port("sram", fetch_width);
    mem.set_capacity("sram", capacity);

    mem.wire_together("agg", "sram");
    mem.wire_together("sram", "tb");

    mem.infer_word_width();

    return mem;
}

LakeCollateral create_dual_port_memory(int capacity) {
    LakeCollateral mem;

    //Misc information
    mem.set_fetch_width(1);
    mem.set_max_chaining(4);
    mem.set_iteration_level(6);
    mem.set_counter_ub(65535);
    mem.set_multi_sram_accessor(true);
    mem.set_dual_port_sram(false);
    mem.set_wire_chain_en(true);

    mem.add_memory_component("mem", false);
    mem.add_read_port("mem", 1);
    mem.add_write_port("mem", 1);
    mem.set_capacity("mem", capacity);

    mem.infer_word_width();

    return mem;
}

void CodegenOptions::load_memory_hierarchy_from_file(const std::string& level, const std::string& filepath) {
    LakeCollateral lc = load_lake_collateral_from_json(filepath);
    mem_hierarchy[level] = lc;
}

LakeCollateral load_lake_collateral_from_json(const std::string& filepath) {
    std::ifstream fin(filepath);
    assert(fin.is_open() && ("Failed to open lake collateral JSON: " + filepath).c_str());
    nlohmann::json j;
    fin >> j;
    fin.close();

    LakeCollateral lc;

    // Scalar fields
    lc.fetch_width = j.value("fetch_width", 1);
    lc.max_chaining = j.value("max_chaining", 4);
    lc.iteration_level = j.value("iteration_level", 6);
    lc.counter_ub = j.value("counter_ub", 65535);
    lc.load_latency = j.value("load_latency", 0);
    lc.store_latency = j.value("store_latency", 0);
    lc.multi_sram_accessor = j.value("multi_sram_accessor", true);
    lc.dual_port_sram = j.value("dual_port_sram", false);
    lc.wire_chain_en = j.value("wire_chain_en", false);
    lc.interconnect_in_num = j.value("interconnect_in_num", 1);
    lc.interconnect_out_num = j.value("interconnect_out_num", 1);

    // Map<string, int> fields
    auto load_str_int_map = [](const nlohmann::json& j, const std::string& key) {
        std::unordered_map<string, int> m;
        if (j.contains(key) && j[key].is_object()) {
            for (auto& [k, v] : j[key].items()) {
                m[k] = v.get<int>();
            }
        }
        return m;
    };

    lc.word_width = load_str_int_map(j, "word_width");
    lc.bank_num = load_str_int_map(j, "bank_num");
    lc.capacity = load_str_int_map(j, "capacity");
    lc.in_port_width = load_str_int_map(j, "in_port_width");
    lc.out_port_width = load_str_int_map(j, "out_port_width");

    // Map<string, string> fields
    auto load_str_str_map = [](const nlohmann::json& j, const std::string& key) {
        std::unordered_map<string, string> m;
        if (j.contains(key) && j[key].is_object()) {
            for (auto& [k, v] : j[key].items()) {
                m[k] = v.get<string>();
            }
        }
        return m;
    };

    lc.read_port = load_str_str_map(j, "read_port");
    lc.write_port = load_str_str_map(j, "write_port");

    // Map<string, bool> field
    if (j.contains("single_port") && j["single_port"].is_object()) {
        for (auto& [k, v] : j["single_port"].items()) {
            lc.single_port[k] = v.get<bool>();
        }
    }

    // controller_name (set<string>) — stored as JSON array
    if (j.contains("controller_name") && j["controller_name"].is_array()) {
        for (auto& v : j["controller_name"]) {
            lc.controller_name.insert(v.get<string>());
        }
    }

    // iter_level_map (map<string, int>) — ordered map
    if (j.contains("iter_level_map") && j["iter_level_map"].is_object()) {
        for (auto& [k, v] : j["iter_level_map"].items()) {
            lc.iter_level_map[k] = v.get<int>();
        }
    }

    return lc;
}
