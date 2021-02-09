#include <fstream>
#include "llf_dcons_2048.h"

int main() {
  srand(234);
  ofstream fout("regression_result_llf_dcons_2048.txt");
  HWStream<hw_uint<96 > > color_in_oc;
  HWStream<hw_uint<96 > > color_out;


  // Loading input data
  srand(1);
  // cmap    : { oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01, oc_load_color_in_oc02] -> color_in_oc[2, oc_load_color_in_oc02, oc_load_color_in_oc01] : 0 <= oc_load_color_in_oc01 <= 2054 and 0 <= oc_load_color_in_oc02 <= 2054; oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01, oc_load_color_in_oc02] -> color_in_oc[1, oc_load_color_in_oc02, oc_load_color_in_oc01] : 0 <= oc_load_color_in_oc01 <= 2054 and 0 <= oc_load_color_in_oc02 <= 2054; oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01, oc_load_color_in_oc02] -> color_in_oc[0, oc_load_color_in_oc02, oc_load_color_in_oc01] : 0 <= oc_load_color_in_oc01 <= 2054 and 0 <= oc_load_color_in_oc02 <= 2054 }
  // read map: { color_in_oc[2, i1, i2] -> oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01 = i2, oc_load_color_in_oc02 = i1] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054; color_in_oc[1, i1, i2] -> oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01 = i2, oc_load_color_in_oc02 = i1] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054; color_in_oc[0, i1, i2] -> oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01 = i2, oc_load_color_in_oc02 = i1] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054 }
  // rng     : { oc_load_color_in_oc02_merged2591[root = 0, oc_load_color_in_oc01, oc_load_color_in_oc02] : 0 <= oc_load_color_in_oc01 <= 2054 and 0 <= oc_load_color_in_oc02 <= 2054 }
  // rng card: { 4223025 }
  for (int i = 0; i < 4223025; i++) {
    hw_uint<96 > value;
    set_at<0, 96, 32>(value, rand() % 256);
    set_at<32, 96, 32>(value, rand() % 256);
    set_at<64, 96, 32>(value, rand() % 256);
    color_in_oc.write(value);
  }

  llf_dcons_2048(color_in_oc, color_out);
  for (int i = 0; i < 4194304; i++) {
    auto actual = color_out.read();
    hw_uint<32> actual_lane_0 = actual.extract<0, 31>();
    hw_uint<32> actual_lane_1 = actual.extract<32, 63>();
    hw_uint<32> actual_lane_2 = actual.extract<64, 95>();
    fout << actual_lane_0 << endl;
    fout << actual_lane_1 << endl;
    fout << actual_lane_2 << endl;
  }

  return 0;
}