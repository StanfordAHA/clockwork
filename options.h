#pragma once

#include <string>
#include <vector>
#include <set>

using namespace std;

struct DebugOptions {
  bool expect_all_linebuffers;

  DebugOptions() : expect_all_linebuffers(false) {}
};

enum ScheduleAlgorithm {
  SCHEDULE_ALGORITHM_NAIVE,
  SCHEDULE_ALGORITHM_ISL,
  SCHEDULE_ALGORITHM_CW
};

enum InnerBankOffsetMode {
  INNER_BANK_OFFSET_STACK,
  INNER_BANK_OFFSET_LINEAR
};

struct banking_strategy {
  string bank_partition;
  vector<int> cycle_factors;
};

struct CodegenOptions {
  bool internal;
  bool all_rams;
  bool add_dependence_pragmas;
  bool use_custom_code_string;
  string code_string;
  bool simplify_address_expressions;
  bool unroll_factors_as_pad;

  //TODO:for merge banks, we should separate codegen from rewrite
  bool conditional_merge;
  size_t merge_threshold;

  bool use_epochs;
  int num_input_epochs;
  bool push_garbage_outputs;
  bool use_soda_casting;
  InnerBankOffsetMode inner_bank_offset_mode;
  ScheduleAlgorithm scheduling_algorithm;
  bool ignore_top_level_inter_deps;

  std::map<string, banking_strategy> banking_strategies;

  DebugOptions debug_options;

  CodegenOptions() : internal(true), all_rams(false), add_dependence_pragmas(true),
  use_custom_code_string(false), code_string(""), simplify_address_expressions(false),
  unroll_factors_as_pad(false), conditional_merge(false), merge_threshold(0),
  use_epochs(true),
  num_input_epochs(-1),
  push_garbage_outputs(false),
  use_soda_casting(false),
  inner_bank_offset_mode(INNER_BANK_OFFSET_STACK),
  scheduling_algorithm(SCHEDULE_ALGORITHM_NAIVE),
  ignore_top_level_inter_deps(false)
  {}

};

