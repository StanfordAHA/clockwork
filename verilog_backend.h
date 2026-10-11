#pragma once

#include "prog.h"
#include "codegen.h"

// CGRA data word width: the lake collateral's data_width (options.cpp), default 16
int cgra_data_width();
static int DATAPATH_WIDTH = cgra_data_width();
static int CONTROLPATH_WIDTH = 16;

void generate_fsm(
        ostream& out,
    CodegenOptions& options,
    const std::string& module_name,
    const std::string& ctrl_vars,
    const std::string& enable,
    isl_aff* aff,
    isl_set* dom);

void generate_platonic_ubuffer(
    std::ostream& out,
    CodegenOptions& options,
    prog& prg,
    UBuffer& buf,
    schedule_info& hwinfo);

std::string codegen_verilog(const std::string& ctrl_vars, isl_aff* const aff);
