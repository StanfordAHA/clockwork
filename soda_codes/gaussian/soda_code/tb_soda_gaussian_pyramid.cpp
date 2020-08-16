// AUTO GEN SODA TB
#include "gaussian_pyramid_kernel.h"
#include <iostream>
#include <fstream>

#define PIXEL_WIDTH 32
#define BURST_WIDTH 32

#include "runtime/test_utils.h"

using namespace std;

int main() {
  srand(234);
  const int nrows = 32;
  const int ncols = 32;
  uint64_t img_pixels = nrows*ncols;
  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits = bits_per_pixel*img_pixels;
  const uint64_t num_transfers = img_bits / BURST_WIDTH;
  const uint64_t pixels_per_burst = BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols = ncols / pixels_per_burst;
  ap_uint<BURST_WIDTH>* I_blr_ds_blr_ds_out = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  ap_uint<BURST_WIDTH>* in = (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>)*num_transfers);
  fill_array_decimal<bits_per_pixel>("in_input_pixel.csv", in, nrows, ncols, transfer_cols);
  gaussian_pyramid_kernel(I_blr_ds_blr_ds_out, in, num_transfers);
  write_results_decimal<bits_per_pixel>("soda_gaussian_pyramid_regression_result.csv", I_blr_ds_blr_ds_out, nrows, ncols, transfer_cols);
  free(in);
  free(I_blr_ds_blr_ds_out);
}
