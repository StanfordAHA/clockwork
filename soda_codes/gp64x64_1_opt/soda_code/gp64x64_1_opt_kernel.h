#include "ap_int.h"

extern "C" {

void gp64x64_1_opt_kernel(ap_uint<16>* gp64x64_1, ap_uint<16>* in_off_chip, uint64_t coalesced_data_num);
}
