#include "ap_int.h"

extern "C" {

void bxy_mc_32_opt_kernel(ap_uint<512>* bxy_mc_32, ap_uint<512>* input_arg, uint64_t coalesced_data_num);
}
