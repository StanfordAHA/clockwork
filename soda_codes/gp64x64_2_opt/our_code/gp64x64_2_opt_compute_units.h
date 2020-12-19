#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in_update_0 unroll factor: 2
hw_uint<32>  id_unrolled_2(hw_uint<32>& in_off_chip) {
  hw_uint<32> whole_result;

  hw_uint<16> lane_0_in_off_chip;
  set_at<0, 16, 16>(lane_0_in_off_chip, in_off_chip.extract<0, 15>());
  auto result_0 = id(lane_0_in_off_chip);
  set_at<0, 32, 16>(whole_result, result_0);

  hw_uint<16> lane_1_in_off_chip;
  set_at<0, 16, 16>(lane_1_in_off_chip, in_off_chip.extract<16, 31>());
  auto result_1 = id(lane_1_in_off_chip);
  set_at<16, 32, 16>(whole_result, result_1);
  return whole_result;
}

  // level_0_update_0 unroll factor: 1
hw_uint<16>  reduce_gauss_unrolled_1(hw_uint<144>& in) {
  hw_uint<16> whole_result;

  hw_uint<144> lane_0_in;
  set_at<0, 144, 144>(lane_0_in, in.extract<0, 143>());
  auto result_0 = reduce_gauss(lane_0_in);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

  // gp64x64_2_update_0 unroll factor: 1
hw_uint<16>  id_unrolled_1(hw_uint<16>& level_3) {
  hw_uint<16> whole_result;

  hw_uint<16> lane_0_level_3;
  set_at<0, 16, 16>(lane_0_level_3, level_3.extract<0, 15>());
  auto result_0 = id(lane_0_level_3);
  set_at<0, 16, 16>(whole_result, result_0);
  return whole_result;
}

