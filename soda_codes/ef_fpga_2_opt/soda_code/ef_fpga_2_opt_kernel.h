#include "ap_int.h"

extern "C" {

void ef_fpga_2_opt_kernel(ap_uint<32>* ef_fpga_2, ap_uint<32>* in_off_chip, uint64_t coalesced_data_num);
}
