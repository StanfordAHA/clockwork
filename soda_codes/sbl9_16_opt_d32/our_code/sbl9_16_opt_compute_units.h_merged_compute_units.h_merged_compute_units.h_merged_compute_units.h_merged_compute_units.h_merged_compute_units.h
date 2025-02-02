#include "sbl9_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> mag_y_to_gp_324_ld29_cu428(hw_uint<16*16>& mag_y_to_gp_324) {
  return mag_y_to_gp_324;
}

hw_uint<256> mag_x_ld17_cu430(hw_uint<16*16>& mag_x) {
  return mag_x;
}

hw_uint<256> img_ld9_cu432(hw_uint<16*16>& img) {
  return img;
}

hw_uint<256> sbl9_16_1_cu434(hw_uint<16*16>& mag_x_FIFO_buf20, hw_uint<16*16>& mag_y_FIFO_buf28) {
  hw_uint<16> mag_x_FIFO_buf20_lane_0 = mag_x_FIFO_buf20.extract<0, 15>();
  hw_uint<16> mag_x_FIFO_buf20_lane_1 = mag_x_FIFO_buf20.extract<16, 31>();
  hw_uint<16> mag_x_FIFO_buf20_lane_2 = mag_x_FIFO_buf20.extract<32, 47>();
  hw_uint<16> mag_x_FIFO_buf20_lane_3 = mag_x_FIFO_buf20.extract<48, 63>();
  hw_uint<16> mag_x_FIFO_buf20_lane_4 = mag_x_FIFO_buf20.extract<64, 79>();
  hw_uint<16> mag_x_FIFO_buf20_lane_5 = mag_x_FIFO_buf20.extract<80, 95>();
  hw_uint<16> mag_x_FIFO_buf20_lane_6 = mag_x_FIFO_buf20.extract<96, 111>();
  hw_uint<16> mag_x_FIFO_buf20_lane_7 = mag_x_FIFO_buf20.extract<112, 127>();
  hw_uint<16> mag_x_FIFO_buf20_lane_8 = mag_x_FIFO_buf20.extract<128, 143>();
  hw_uint<16> mag_x_FIFO_buf20_lane_9 = mag_x_FIFO_buf20.extract<144, 159>();
  hw_uint<16> mag_x_FIFO_buf20_lane_10 = mag_x_FIFO_buf20.extract<160, 175>();
  hw_uint<16> mag_x_FIFO_buf20_lane_11 = mag_x_FIFO_buf20.extract<176, 191>();
  hw_uint<16> mag_x_FIFO_buf20_lane_12 = mag_x_FIFO_buf20.extract<192, 207>();
  hw_uint<16> mag_x_FIFO_buf20_lane_13 = mag_x_FIFO_buf20.extract<208, 223>();
  hw_uint<16> mag_x_FIFO_buf20_lane_14 = mag_x_FIFO_buf20.extract<224, 239>();
  hw_uint<16> mag_x_FIFO_buf20_lane_15 = mag_x_FIFO_buf20.extract<240, 255>();
  hw_uint<16> mag_y_FIFO_buf28_lane_0 = mag_y_FIFO_buf28.extract<0, 15>();
  hw_uint<16> mag_y_FIFO_buf28_lane_1 = mag_y_FIFO_buf28.extract<16, 31>();
  hw_uint<16> mag_y_FIFO_buf28_lane_2 = mag_y_FIFO_buf28.extract<32, 47>();
  hw_uint<16> mag_y_FIFO_buf28_lane_3 = mag_y_FIFO_buf28.extract<48, 63>();
  hw_uint<16> mag_y_FIFO_buf28_lane_4 = mag_y_FIFO_buf28.extract<64, 79>();
  hw_uint<16> mag_y_FIFO_buf28_lane_5 = mag_y_FIFO_buf28.extract<80, 95>();
  hw_uint<16> mag_y_FIFO_buf28_lane_6 = mag_y_FIFO_buf28.extract<96, 111>();
  hw_uint<16> mag_y_FIFO_buf28_lane_7 = mag_y_FIFO_buf28.extract<112, 127>();
  hw_uint<16> mag_y_FIFO_buf28_lane_8 = mag_y_FIFO_buf28.extract<128, 143>();
  hw_uint<16> mag_y_FIFO_buf28_lane_9 = mag_y_FIFO_buf28.extract<144, 159>();
  hw_uint<16> mag_y_FIFO_buf28_lane_10 = mag_y_FIFO_buf28.extract<160, 175>();
  hw_uint<16> mag_y_FIFO_buf28_lane_11 = mag_y_FIFO_buf28.extract<176, 191>();
  hw_uint<16> mag_y_FIFO_buf28_lane_12 = mag_y_FIFO_buf28.extract<192, 207>();
  hw_uint<16> mag_y_FIFO_buf28_lane_13 = mag_y_FIFO_buf28.extract<208, 223>();
  hw_uint<16> mag_y_FIFO_buf28_lane_14 = mag_y_FIFO_buf28.extract<224, 239>();
  hw_uint<16> mag_y_FIFO_buf28_lane_15 = mag_y_FIFO_buf28.extract<240, 255>();

	
  hw_uint<16 > mag_x_FIFO_buf20_lane_0_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_0_pack, mag_x_FIFO_buf20_lane_0);
  hw_uint<16 > mag_y_FIFO_buf28_lane_0_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_0_pack, mag_y_FIFO_buf28_lane_0);
  auto res_sbl9_16_update_0_sm35_0140 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_0_pack, mag_y_FIFO_buf28_lane_0_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_1_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_1_pack, mag_x_FIFO_buf20_lane_1);
  hw_uint<16 > mag_y_FIFO_buf28_lane_1_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_1_pack, mag_y_FIFO_buf28_lane_1);
  auto res_sbl9_16_update_0_sm35_1142 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_1_pack, mag_y_FIFO_buf28_lane_1_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_2_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_2_pack, mag_x_FIFO_buf20_lane_2);
  hw_uint<16 > mag_y_FIFO_buf28_lane_2_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_2_pack, mag_y_FIFO_buf28_lane_2);
  auto res_sbl9_16_update_0_sm35_2144 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_2_pack, mag_y_FIFO_buf28_lane_2_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_3_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_3_pack, mag_x_FIFO_buf20_lane_3);
  hw_uint<16 > mag_y_FIFO_buf28_lane_3_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_3_pack, mag_y_FIFO_buf28_lane_3);
  auto res_sbl9_16_update_0_sm35_3146 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_3_pack, mag_y_FIFO_buf28_lane_3_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_4_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_4_pack, mag_x_FIFO_buf20_lane_4);
  hw_uint<16 > mag_y_FIFO_buf28_lane_4_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_4_pack, mag_y_FIFO_buf28_lane_4);
  auto res_sbl9_16_update_0_sm35_4148 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_4_pack, mag_y_FIFO_buf28_lane_4_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_5_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_5_pack, mag_x_FIFO_buf20_lane_5);
  hw_uint<16 > mag_y_FIFO_buf28_lane_5_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_5_pack, mag_y_FIFO_buf28_lane_5);
  auto res_sbl9_16_update_0_sm35_5150 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_5_pack, mag_y_FIFO_buf28_lane_5_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_6_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_6_pack, mag_x_FIFO_buf20_lane_6);
  hw_uint<16 > mag_y_FIFO_buf28_lane_6_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_6_pack, mag_y_FIFO_buf28_lane_6);
  auto res_sbl9_16_update_0_sm35_6152 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_6_pack, mag_y_FIFO_buf28_lane_6_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_7_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_7_pack, mag_x_FIFO_buf20_lane_7);
  hw_uint<16 > mag_y_FIFO_buf28_lane_7_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_7_pack, mag_y_FIFO_buf28_lane_7);
  auto res_sbl9_16_update_0_sm35_7154 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_7_pack, mag_y_FIFO_buf28_lane_7_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_8_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_8_pack, mag_x_FIFO_buf20_lane_8);
  hw_uint<16 > mag_y_FIFO_buf28_lane_8_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_8_pack, mag_y_FIFO_buf28_lane_8);
  auto res_sbl9_16_update_0_sm35_8156 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_8_pack, mag_y_FIFO_buf28_lane_8_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_9_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_9_pack, mag_x_FIFO_buf20_lane_9);
  hw_uint<16 > mag_y_FIFO_buf28_lane_9_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_9_pack, mag_y_FIFO_buf28_lane_9);
  auto res_sbl9_16_update_0_sm35_9158 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_9_pack, mag_y_FIFO_buf28_lane_9_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_10_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_10_pack, mag_x_FIFO_buf20_lane_10);
  hw_uint<16 > mag_y_FIFO_buf28_lane_10_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_10_pack, mag_y_FIFO_buf28_lane_10);
  auto res_sbl9_16_update_0_sm35_10160 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_10_pack, mag_y_FIFO_buf28_lane_10_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_11_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_11_pack, mag_x_FIFO_buf20_lane_11);
  hw_uint<16 > mag_y_FIFO_buf28_lane_11_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_11_pack, mag_y_FIFO_buf28_lane_11);
  auto res_sbl9_16_update_0_sm35_11162 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_11_pack, mag_y_FIFO_buf28_lane_11_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_12_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_12_pack, mag_x_FIFO_buf20_lane_12);
  hw_uint<16 > mag_y_FIFO_buf28_lane_12_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_12_pack, mag_y_FIFO_buf28_lane_12);
  auto res_sbl9_16_update_0_sm35_12164 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_12_pack, mag_y_FIFO_buf28_lane_12_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_13_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_13_pack, mag_x_FIFO_buf20_lane_13);
  hw_uint<16 > mag_y_FIFO_buf28_lane_13_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_13_pack, mag_y_FIFO_buf28_lane_13);
  auto res_sbl9_16_update_0_sm35_13166 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_13_pack, mag_y_FIFO_buf28_lane_13_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_14_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_14_pack, mag_x_FIFO_buf20_lane_14);
  hw_uint<16 > mag_y_FIFO_buf28_lane_14_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_14_pack, mag_y_FIFO_buf28_lane_14);
  auto res_sbl9_16_update_0_sm35_14168 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_14_pack, mag_y_FIFO_buf28_lane_14_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_15_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_15_pack, mag_x_FIFO_buf20_lane_15);
  hw_uint<16 > mag_y_FIFO_buf28_lane_15_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_15_pack, mag_y_FIFO_buf28_lane_15);
  auto res_sbl9_16_update_0_sm35_15170 = sbl9_16_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_15_pack, mag_y_FIFO_buf28_lane_15_pack);
  hw_uint<256 > return_value435;
  set_at<0, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_0140);
  set_at<16, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_1142);
  set_at<32, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_2144);
  set_at<48, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_3146);
  set_at<64, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_4148);
  set_at<80, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_5150);
  set_at<96, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_6152);
  set_at<112, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_7154);
  set_at<128, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_8156);
  set_at<144, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_9158);
  set_at<160, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_10160);
  set_at<176, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_11162);
  set_at<192, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_12164);
  set_at<208, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_13166);
  set_at<224, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_14168);
  set_at<240, 256, 16>(return_value435, res_sbl9_16_update_0_sm35_15170);
  return return_value435;

}

hw_uint<256> img_1_cu437(hw_uint<16*16>& off_chip_img) {
  hw_uint<16> off_chip_img_lane_0 = off_chip_img.extract<0, 15>();
  hw_uint<16> off_chip_img_lane_1 = off_chip_img.extract<16, 31>();
  hw_uint<16> off_chip_img_lane_2 = off_chip_img.extract<32, 47>();
  hw_uint<16> off_chip_img_lane_3 = off_chip_img.extract<48, 63>();
  hw_uint<16> off_chip_img_lane_4 = off_chip_img.extract<64, 79>();
  hw_uint<16> off_chip_img_lane_5 = off_chip_img.extract<80, 95>();
  hw_uint<16> off_chip_img_lane_6 = off_chip_img.extract<96, 111>();
  hw_uint<16> off_chip_img_lane_7 = off_chip_img.extract<112, 127>();
  hw_uint<16> off_chip_img_lane_8 = off_chip_img.extract<128, 143>();
  hw_uint<16> off_chip_img_lane_9 = off_chip_img.extract<144, 159>();
  hw_uint<16> off_chip_img_lane_10 = off_chip_img.extract<160, 175>();
  hw_uint<16> off_chip_img_lane_11 = off_chip_img.extract<176, 191>();
  hw_uint<16> off_chip_img_lane_12 = off_chip_img.extract<192, 207>();
  hw_uint<16> off_chip_img_lane_13 = off_chip_img.extract<208, 223>();
  hw_uint<16> off_chip_img_lane_14 = off_chip_img.extract<224, 239>();
  hw_uint<16> off_chip_img_lane_15 = off_chip_img.extract<240, 255>();

	
  hw_uint<16 > off_chip_img_lane_0_pack;
  set_at<0, 16, 16>(off_chip_img_lane_0_pack, off_chip_img_lane_0);
  auto res_img_update_0_sm36_0172 = img_generated_compute_unrolled_1(off_chip_img_lane_0_pack);

  hw_uint<16 > off_chip_img_lane_1_pack;
  set_at<0, 16, 16>(off_chip_img_lane_1_pack, off_chip_img_lane_1);
  auto res_img_update_0_sm36_1174 = img_generated_compute_unrolled_1(off_chip_img_lane_1_pack);

  hw_uint<16 > off_chip_img_lane_2_pack;
  set_at<0, 16, 16>(off_chip_img_lane_2_pack, off_chip_img_lane_2);
  auto res_img_update_0_sm36_2176 = img_generated_compute_unrolled_1(off_chip_img_lane_2_pack);

  hw_uint<16 > off_chip_img_lane_3_pack;
  set_at<0, 16, 16>(off_chip_img_lane_3_pack, off_chip_img_lane_3);
  auto res_img_update_0_sm36_3178 = img_generated_compute_unrolled_1(off_chip_img_lane_3_pack);

  hw_uint<16 > off_chip_img_lane_4_pack;
  set_at<0, 16, 16>(off_chip_img_lane_4_pack, off_chip_img_lane_4);
  auto res_img_update_0_sm36_4180 = img_generated_compute_unrolled_1(off_chip_img_lane_4_pack);

  hw_uint<16 > off_chip_img_lane_5_pack;
  set_at<0, 16, 16>(off_chip_img_lane_5_pack, off_chip_img_lane_5);
  auto res_img_update_0_sm36_5182 = img_generated_compute_unrolled_1(off_chip_img_lane_5_pack);

  hw_uint<16 > off_chip_img_lane_6_pack;
  set_at<0, 16, 16>(off_chip_img_lane_6_pack, off_chip_img_lane_6);
  auto res_img_update_0_sm36_6184 = img_generated_compute_unrolled_1(off_chip_img_lane_6_pack);

  hw_uint<16 > off_chip_img_lane_7_pack;
  set_at<0, 16, 16>(off_chip_img_lane_7_pack, off_chip_img_lane_7);
  auto res_img_update_0_sm36_7186 = img_generated_compute_unrolled_1(off_chip_img_lane_7_pack);

  hw_uint<16 > off_chip_img_lane_8_pack;
  set_at<0, 16, 16>(off_chip_img_lane_8_pack, off_chip_img_lane_8);
  auto res_img_update_0_sm36_8188 = img_generated_compute_unrolled_1(off_chip_img_lane_8_pack);

  hw_uint<16 > off_chip_img_lane_9_pack;
  set_at<0, 16, 16>(off_chip_img_lane_9_pack, off_chip_img_lane_9);
  auto res_img_update_0_sm36_9190 = img_generated_compute_unrolled_1(off_chip_img_lane_9_pack);

  hw_uint<16 > off_chip_img_lane_10_pack;
  set_at<0, 16, 16>(off_chip_img_lane_10_pack, off_chip_img_lane_10);
  auto res_img_update_0_sm36_10192 = img_generated_compute_unrolled_1(off_chip_img_lane_10_pack);

  hw_uint<16 > off_chip_img_lane_11_pack;
  set_at<0, 16, 16>(off_chip_img_lane_11_pack, off_chip_img_lane_11);
  auto res_img_update_0_sm36_11194 = img_generated_compute_unrolled_1(off_chip_img_lane_11_pack);

  hw_uint<16 > off_chip_img_lane_12_pack;
  set_at<0, 16, 16>(off_chip_img_lane_12_pack, off_chip_img_lane_12);
  auto res_img_update_0_sm36_12196 = img_generated_compute_unrolled_1(off_chip_img_lane_12_pack);

  hw_uint<16 > off_chip_img_lane_13_pack;
  set_at<0, 16, 16>(off_chip_img_lane_13_pack, off_chip_img_lane_13);
  auto res_img_update_0_sm36_13198 = img_generated_compute_unrolled_1(off_chip_img_lane_13_pack);

  hw_uint<16 > off_chip_img_lane_14_pack;
  set_at<0, 16, 16>(off_chip_img_lane_14_pack, off_chip_img_lane_14);
  auto res_img_update_0_sm36_14200 = img_generated_compute_unrolled_1(off_chip_img_lane_14_pack);

  hw_uint<16 > off_chip_img_lane_15_pack;
  set_at<0, 16, 16>(off_chip_img_lane_15_pack, off_chip_img_lane_15);
  auto res_img_update_0_sm36_15202 = img_generated_compute_unrolled_1(off_chip_img_lane_15_pack);
  hw_uint<256 > return_value438;
  set_at<0, 256, 16>(return_value438, res_img_update_0_sm36_0172);
  set_at<16, 256, 16>(return_value438, res_img_update_0_sm36_1174);
  set_at<32, 256, 16>(return_value438, res_img_update_0_sm36_2176);
  set_at<48, 256, 16>(return_value438, res_img_update_0_sm36_3178);
  set_at<64, 256, 16>(return_value438, res_img_update_0_sm36_4180);
  set_at<80, 256, 16>(return_value438, res_img_update_0_sm36_5182);
  set_at<96, 256, 16>(return_value438, res_img_update_0_sm36_6184);
  set_at<112, 256, 16>(return_value438, res_img_update_0_sm36_7186);
  set_at<128, 256, 16>(return_value438, res_img_update_0_sm36_8188);
  set_at<144, 256, 16>(return_value438, res_img_update_0_sm36_9190);
  set_at<160, 256, 16>(return_value438, res_img_update_0_sm36_10192);
  set_at<176, 256, 16>(return_value438, res_img_update_0_sm36_11194);
  set_at<192, 256, 16>(return_value438, res_img_update_0_sm36_12196);
  set_at<208, 256, 16>(return_value438, res_img_update_0_sm36_13198);
  set_at<224, 256, 16>(return_value438, res_img_update_0_sm36_14200);
  set_at<240, 256, 16>(return_value438, res_img_update_0_sm36_15202);
  return return_value438;

}

hw_uint<256> mag_x_1_cu440(hw_uint<16*96>& img_FIFO_buf4) {
  hw_uint<16> img_FIFO_buf4_lane_0 = img_FIFO_buf4.extract<0, 15>();
  hw_uint<16> img_FIFO_buf4_lane_1 = img_FIFO_buf4.extract<16, 31>();
  hw_uint<16> img_FIFO_buf4_lane_2 = img_FIFO_buf4.extract<32, 47>();
  hw_uint<16> img_FIFO_buf4_lane_3 = img_FIFO_buf4.extract<48, 63>();
  hw_uint<16> img_FIFO_buf4_lane_4 = img_FIFO_buf4.extract<64, 79>();
  hw_uint<16> img_FIFO_buf4_lane_5 = img_FIFO_buf4.extract<80, 95>();
  hw_uint<16> img_FIFO_buf4_lane_6 = img_FIFO_buf4.extract<96, 111>();
  hw_uint<16> img_FIFO_buf4_lane_7 = img_FIFO_buf4.extract<112, 127>();
  hw_uint<16> img_FIFO_buf4_lane_8 = img_FIFO_buf4.extract<128, 143>();
  hw_uint<16> img_FIFO_buf4_lane_9 = img_FIFO_buf4.extract<144, 159>();
  hw_uint<16> img_FIFO_buf4_lane_10 = img_FIFO_buf4.extract<160, 175>();
  hw_uint<16> img_FIFO_buf4_lane_11 = img_FIFO_buf4.extract<176, 191>();
  hw_uint<16> img_FIFO_buf4_lane_12 = img_FIFO_buf4.extract<192, 207>();
  hw_uint<16> img_FIFO_buf4_lane_13 = img_FIFO_buf4.extract<208, 223>();
  hw_uint<16> img_FIFO_buf4_lane_14 = img_FIFO_buf4.extract<224, 239>();
  hw_uint<16> img_FIFO_buf4_lane_15 = img_FIFO_buf4.extract<240, 255>();
  hw_uint<16> img_FIFO_buf4_lane_16 = img_FIFO_buf4.extract<256, 271>();
  hw_uint<16> img_FIFO_buf4_lane_17 = img_FIFO_buf4.extract<272, 287>();
  hw_uint<16> img_FIFO_buf4_lane_18 = img_FIFO_buf4.extract<288, 303>();
  hw_uint<16> img_FIFO_buf4_lane_19 = img_FIFO_buf4.extract<304, 319>();
  hw_uint<16> img_FIFO_buf4_lane_20 = img_FIFO_buf4.extract<320, 335>();
  hw_uint<16> img_FIFO_buf4_lane_21 = img_FIFO_buf4.extract<336, 351>();
  hw_uint<16> img_FIFO_buf4_lane_22 = img_FIFO_buf4.extract<352, 367>();
  hw_uint<16> img_FIFO_buf4_lane_23 = img_FIFO_buf4.extract<368, 383>();
  hw_uint<16> img_FIFO_buf4_lane_24 = img_FIFO_buf4.extract<384, 399>();
  hw_uint<16> img_FIFO_buf4_lane_25 = img_FIFO_buf4.extract<400, 415>();
  hw_uint<16> img_FIFO_buf4_lane_26 = img_FIFO_buf4.extract<416, 431>();
  hw_uint<16> img_FIFO_buf4_lane_27 = img_FIFO_buf4.extract<432, 447>();
  hw_uint<16> img_FIFO_buf4_lane_28 = img_FIFO_buf4.extract<448, 463>();
  hw_uint<16> img_FIFO_buf4_lane_29 = img_FIFO_buf4.extract<464, 479>();
  hw_uint<16> img_FIFO_buf4_lane_30 = img_FIFO_buf4.extract<480, 495>();
  hw_uint<16> img_FIFO_buf4_lane_31 = img_FIFO_buf4.extract<496, 511>();
  hw_uint<16> img_FIFO_buf4_lane_32 = img_FIFO_buf4.extract<512, 527>();
  hw_uint<16> img_FIFO_buf4_lane_33 = img_FIFO_buf4.extract<528, 543>();
  hw_uint<16> img_FIFO_buf4_lane_34 = img_FIFO_buf4.extract<544, 559>();
  hw_uint<16> img_FIFO_buf4_lane_35 = img_FIFO_buf4.extract<560, 575>();
  hw_uint<16> img_FIFO_buf4_lane_36 = img_FIFO_buf4.extract<576, 591>();
  hw_uint<16> img_FIFO_buf4_lane_37 = img_FIFO_buf4.extract<592, 607>();
  hw_uint<16> img_FIFO_buf4_lane_38 = img_FIFO_buf4.extract<608, 623>();
  hw_uint<16> img_FIFO_buf4_lane_39 = img_FIFO_buf4.extract<624, 639>();
  hw_uint<16> img_FIFO_buf4_lane_40 = img_FIFO_buf4.extract<640, 655>();
  hw_uint<16> img_FIFO_buf4_lane_41 = img_FIFO_buf4.extract<656, 671>();
  hw_uint<16> img_FIFO_buf4_lane_42 = img_FIFO_buf4.extract<672, 687>();
  hw_uint<16> img_FIFO_buf4_lane_43 = img_FIFO_buf4.extract<688, 703>();
  hw_uint<16> img_FIFO_buf4_lane_44 = img_FIFO_buf4.extract<704, 719>();
  hw_uint<16> img_FIFO_buf4_lane_45 = img_FIFO_buf4.extract<720, 735>();
  hw_uint<16> img_FIFO_buf4_lane_46 = img_FIFO_buf4.extract<736, 751>();
  hw_uint<16> img_FIFO_buf4_lane_47 = img_FIFO_buf4.extract<752, 767>();
  hw_uint<16> img_FIFO_buf4_lane_48 = img_FIFO_buf4.extract<768, 783>();
  hw_uint<16> img_FIFO_buf4_lane_49 = img_FIFO_buf4.extract<784, 799>();
  hw_uint<16> img_FIFO_buf4_lane_50 = img_FIFO_buf4.extract<800, 815>();
  hw_uint<16> img_FIFO_buf4_lane_51 = img_FIFO_buf4.extract<816, 831>();
  hw_uint<16> img_FIFO_buf4_lane_52 = img_FIFO_buf4.extract<832, 847>();
  hw_uint<16> img_FIFO_buf4_lane_53 = img_FIFO_buf4.extract<848, 863>();
  hw_uint<16> img_FIFO_buf4_lane_54 = img_FIFO_buf4.extract<864, 879>();
  hw_uint<16> img_FIFO_buf4_lane_55 = img_FIFO_buf4.extract<880, 895>();
  hw_uint<16> img_FIFO_buf4_lane_56 = img_FIFO_buf4.extract<896, 911>();
  hw_uint<16> img_FIFO_buf4_lane_57 = img_FIFO_buf4.extract<912, 927>();
  hw_uint<16> img_FIFO_buf4_lane_58 = img_FIFO_buf4.extract<928, 943>();
  hw_uint<16> img_FIFO_buf4_lane_59 = img_FIFO_buf4.extract<944, 959>();
  hw_uint<16> img_FIFO_buf4_lane_60 = img_FIFO_buf4.extract<960, 975>();
  hw_uint<16> img_FIFO_buf4_lane_61 = img_FIFO_buf4.extract<976, 991>();
  hw_uint<16> img_FIFO_buf4_lane_62 = img_FIFO_buf4.extract<992, 1007>();
  hw_uint<16> img_FIFO_buf4_lane_63 = img_FIFO_buf4.extract<1008, 1023>();
  hw_uint<16> img_FIFO_buf4_lane_64 = img_FIFO_buf4.extract<1024, 1039>();
  hw_uint<16> img_FIFO_buf4_lane_65 = img_FIFO_buf4.extract<1040, 1055>();
  hw_uint<16> img_FIFO_buf4_lane_66 = img_FIFO_buf4.extract<1056, 1071>();
  hw_uint<16> img_FIFO_buf4_lane_67 = img_FIFO_buf4.extract<1072, 1087>();
  hw_uint<16> img_FIFO_buf4_lane_68 = img_FIFO_buf4.extract<1088, 1103>();
  hw_uint<16> img_FIFO_buf4_lane_69 = img_FIFO_buf4.extract<1104, 1119>();
  hw_uint<16> img_FIFO_buf4_lane_70 = img_FIFO_buf4.extract<1120, 1135>();
  hw_uint<16> img_FIFO_buf4_lane_71 = img_FIFO_buf4.extract<1136, 1151>();
  hw_uint<16> img_FIFO_buf4_lane_72 = img_FIFO_buf4.extract<1152, 1167>();
  hw_uint<16> img_FIFO_buf4_lane_73 = img_FIFO_buf4.extract<1168, 1183>();
  hw_uint<16> img_FIFO_buf4_lane_74 = img_FIFO_buf4.extract<1184, 1199>();
  hw_uint<16> img_FIFO_buf4_lane_75 = img_FIFO_buf4.extract<1200, 1215>();
  hw_uint<16> img_FIFO_buf4_lane_76 = img_FIFO_buf4.extract<1216, 1231>();
  hw_uint<16> img_FIFO_buf4_lane_77 = img_FIFO_buf4.extract<1232, 1247>();
  hw_uint<16> img_FIFO_buf4_lane_78 = img_FIFO_buf4.extract<1248, 1263>();
  hw_uint<16> img_FIFO_buf4_lane_79 = img_FIFO_buf4.extract<1264, 1279>();
  hw_uint<16> img_FIFO_buf4_lane_80 = img_FIFO_buf4.extract<1280, 1295>();
  hw_uint<16> img_FIFO_buf4_lane_81 = img_FIFO_buf4.extract<1296, 1311>();
  hw_uint<16> img_FIFO_buf4_lane_82 = img_FIFO_buf4.extract<1312, 1327>();
  hw_uint<16> img_FIFO_buf4_lane_83 = img_FIFO_buf4.extract<1328, 1343>();
  hw_uint<16> img_FIFO_buf4_lane_84 = img_FIFO_buf4.extract<1344, 1359>();
  hw_uint<16> img_FIFO_buf4_lane_85 = img_FIFO_buf4.extract<1360, 1375>();
  hw_uint<16> img_FIFO_buf4_lane_86 = img_FIFO_buf4.extract<1376, 1391>();
  hw_uint<16> img_FIFO_buf4_lane_87 = img_FIFO_buf4.extract<1392, 1407>();
  hw_uint<16> img_FIFO_buf4_lane_88 = img_FIFO_buf4.extract<1408, 1423>();
  hw_uint<16> img_FIFO_buf4_lane_89 = img_FIFO_buf4.extract<1424, 1439>();
  hw_uint<16> img_FIFO_buf4_lane_90 = img_FIFO_buf4.extract<1440, 1455>();
  hw_uint<16> img_FIFO_buf4_lane_91 = img_FIFO_buf4.extract<1456, 1471>();
  hw_uint<16> img_FIFO_buf4_lane_92 = img_FIFO_buf4.extract<1472, 1487>();
  hw_uint<16> img_FIFO_buf4_lane_93 = img_FIFO_buf4.extract<1488, 1503>();
  hw_uint<16> img_FIFO_buf4_lane_94 = img_FIFO_buf4.extract<1504, 1519>();
  hw_uint<16> img_FIFO_buf4_lane_95 = img_FIFO_buf4.extract<1520, 1535>();

	
  hw_uint<96 > img_FIFO_buf4_lane_5_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_0);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_1);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_2);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_3);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_4);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_5);
  auto res_mag_x_update_0_sm37_0204 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_5_pack);

  hw_uint<96 > img_FIFO_buf4_lane_11_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_6);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_7);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_8);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_9);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_10);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_11);
  auto res_mag_x_update_0_sm37_1206 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_11_pack);

  hw_uint<96 > img_FIFO_buf4_lane_17_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_12);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_13);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_14);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_15);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_16);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_17);
  auto res_mag_x_update_0_sm37_2208 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_17_pack);

  hw_uint<96 > img_FIFO_buf4_lane_23_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_18);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_19);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_20);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_21);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_22);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_23);
  auto res_mag_x_update_0_sm37_3210 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_23_pack);

  hw_uint<96 > img_FIFO_buf4_lane_29_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_24);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_25);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_26);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_27);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_28);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_29);
  auto res_mag_x_update_0_sm37_4212 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_29_pack);

  hw_uint<96 > img_FIFO_buf4_lane_35_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_30);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_31);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_32);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_33);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_34);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_35);
  auto res_mag_x_update_0_sm37_5214 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_35_pack);

  hw_uint<96 > img_FIFO_buf4_lane_41_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_36);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_37);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_38);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_39);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_40);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_41);
  auto res_mag_x_update_0_sm37_6216 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_41_pack);

  hw_uint<96 > img_FIFO_buf4_lane_47_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_42);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_43);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_44);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_45);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_46);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_47);
  auto res_mag_x_update_0_sm37_7218 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_47_pack);

  hw_uint<96 > img_FIFO_buf4_lane_53_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_48);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_49);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_50);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_51);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_52);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_53);
  auto res_mag_x_update_0_sm37_8220 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_53_pack);

  hw_uint<96 > img_FIFO_buf4_lane_59_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_54);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_55);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_56);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_57);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_58);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_59);
  auto res_mag_x_update_0_sm37_9222 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_59_pack);

  hw_uint<96 > img_FIFO_buf4_lane_65_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_60);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_61);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_62);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_63);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_64);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_65);
  auto res_mag_x_update_0_sm37_10224 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_65_pack);

  hw_uint<96 > img_FIFO_buf4_lane_71_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_66);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_67);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_68);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_69);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_70);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_71);
  auto res_mag_x_update_0_sm37_11226 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_71_pack);

  hw_uint<96 > img_FIFO_buf4_lane_77_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_72);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_73);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_74);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_75);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_76);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_77);
  auto res_mag_x_update_0_sm37_12228 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_77_pack);

  hw_uint<96 > img_FIFO_buf4_lane_83_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_78);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_79);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_80);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_81);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_82);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_83);
  auto res_mag_x_update_0_sm37_13230 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_83_pack);

  hw_uint<96 > img_FIFO_buf4_lane_89_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_84);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_85);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_86);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_87);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_88);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_89);
  auto res_mag_x_update_0_sm37_14232 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_89_pack);

  hw_uint<96 > img_FIFO_buf4_lane_95_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_90);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_91);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_92);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_93);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_94);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_95);
  auto res_mag_x_update_0_sm37_15234 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_95_pack);
  hw_uint<256 > return_value441;
  set_at<0, 256, 16>(return_value441, res_mag_x_update_0_sm37_0204);
  set_at<16, 256, 16>(return_value441, res_mag_x_update_0_sm37_1206);
  set_at<32, 256, 16>(return_value441, res_mag_x_update_0_sm37_2208);
  set_at<48, 256, 16>(return_value441, res_mag_x_update_0_sm37_3210);
  set_at<64, 256, 16>(return_value441, res_mag_x_update_0_sm37_4212);
  set_at<80, 256, 16>(return_value441, res_mag_x_update_0_sm37_5214);
  set_at<96, 256, 16>(return_value441, res_mag_x_update_0_sm37_6216);
  set_at<112, 256, 16>(return_value441, res_mag_x_update_0_sm37_7218);
  set_at<128, 256, 16>(return_value441, res_mag_x_update_0_sm37_8220);
  set_at<144, 256, 16>(return_value441, res_mag_x_update_0_sm37_9222);
  set_at<160, 256, 16>(return_value441, res_mag_x_update_0_sm37_10224);
  set_at<176, 256, 16>(return_value441, res_mag_x_update_0_sm37_11226);
  set_at<192, 256, 16>(return_value441, res_mag_x_update_0_sm37_12228);
  set_at<208, 256, 16>(return_value441, res_mag_x_update_0_sm37_13230);
  set_at<224, 256, 16>(return_value441, res_mag_x_update_0_sm37_14232);
  set_at<240, 256, 16>(return_value441, res_mag_x_update_0_sm37_15234);
  return return_value441;

}

hw_uint<256> mag_y_1_cu443(hw_uint<16*96>& img_FIFO_buf12) {
  hw_uint<16> img_FIFO_buf12_lane_0 = img_FIFO_buf12.extract<0, 15>();
  hw_uint<16> img_FIFO_buf12_lane_1 = img_FIFO_buf12.extract<16, 31>();
  hw_uint<16> img_FIFO_buf12_lane_2 = img_FIFO_buf12.extract<32, 47>();
  hw_uint<16> img_FIFO_buf12_lane_3 = img_FIFO_buf12.extract<48, 63>();
  hw_uint<16> img_FIFO_buf12_lane_4 = img_FIFO_buf12.extract<64, 79>();
  hw_uint<16> img_FIFO_buf12_lane_5 = img_FIFO_buf12.extract<80, 95>();
  hw_uint<16> img_FIFO_buf12_lane_6 = img_FIFO_buf12.extract<96, 111>();
  hw_uint<16> img_FIFO_buf12_lane_7 = img_FIFO_buf12.extract<112, 127>();
  hw_uint<16> img_FIFO_buf12_lane_8 = img_FIFO_buf12.extract<128, 143>();
  hw_uint<16> img_FIFO_buf12_lane_9 = img_FIFO_buf12.extract<144, 159>();
  hw_uint<16> img_FIFO_buf12_lane_10 = img_FIFO_buf12.extract<160, 175>();
  hw_uint<16> img_FIFO_buf12_lane_11 = img_FIFO_buf12.extract<176, 191>();
  hw_uint<16> img_FIFO_buf12_lane_12 = img_FIFO_buf12.extract<192, 207>();
  hw_uint<16> img_FIFO_buf12_lane_13 = img_FIFO_buf12.extract<208, 223>();
  hw_uint<16> img_FIFO_buf12_lane_14 = img_FIFO_buf12.extract<224, 239>();
  hw_uint<16> img_FIFO_buf12_lane_15 = img_FIFO_buf12.extract<240, 255>();
  hw_uint<16> img_FIFO_buf12_lane_16 = img_FIFO_buf12.extract<256, 271>();
  hw_uint<16> img_FIFO_buf12_lane_17 = img_FIFO_buf12.extract<272, 287>();
  hw_uint<16> img_FIFO_buf12_lane_18 = img_FIFO_buf12.extract<288, 303>();
  hw_uint<16> img_FIFO_buf12_lane_19 = img_FIFO_buf12.extract<304, 319>();
  hw_uint<16> img_FIFO_buf12_lane_20 = img_FIFO_buf12.extract<320, 335>();
  hw_uint<16> img_FIFO_buf12_lane_21 = img_FIFO_buf12.extract<336, 351>();
  hw_uint<16> img_FIFO_buf12_lane_22 = img_FIFO_buf12.extract<352, 367>();
  hw_uint<16> img_FIFO_buf12_lane_23 = img_FIFO_buf12.extract<368, 383>();
  hw_uint<16> img_FIFO_buf12_lane_24 = img_FIFO_buf12.extract<384, 399>();
  hw_uint<16> img_FIFO_buf12_lane_25 = img_FIFO_buf12.extract<400, 415>();
  hw_uint<16> img_FIFO_buf12_lane_26 = img_FIFO_buf12.extract<416, 431>();
  hw_uint<16> img_FIFO_buf12_lane_27 = img_FIFO_buf12.extract<432, 447>();
  hw_uint<16> img_FIFO_buf12_lane_28 = img_FIFO_buf12.extract<448, 463>();
  hw_uint<16> img_FIFO_buf12_lane_29 = img_FIFO_buf12.extract<464, 479>();
  hw_uint<16> img_FIFO_buf12_lane_30 = img_FIFO_buf12.extract<480, 495>();
  hw_uint<16> img_FIFO_buf12_lane_31 = img_FIFO_buf12.extract<496, 511>();
  hw_uint<16> img_FIFO_buf12_lane_32 = img_FIFO_buf12.extract<512, 527>();
  hw_uint<16> img_FIFO_buf12_lane_33 = img_FIFO_buf12.extract<528, 543>();
  hw_uint<16> img_FIFO_buf12_lane_34 = img_FIFO_buf12.extract<544, 559>();
  hw_uint<16> img_FIFO_buf12_lane_35 = img_FIFO_buf12.extract<560, 575>();
  hw_uint<16> img_FIFO_buf12_lane_36 = img_FIFO_buf12.extract<576, 591>();
  hw_uint<16> img_FIFO_buf12_lane_37 = img_FIFO_buf12.extract<592, 607>();
  hw_uint<16> img_FIFO_buf12_lane_38 = img_FIFO_buf12.extract<608, 623>();
  hw_uint<16> img_FIFO_buf12_lane_39 = img_FIFO_buf12.extract<624, 639>();
  hw_uint<16> img_FIFO_buf12_lane_40 = img_FIFO_buf12.extract<640, 655>();
  hw_uint<16> img_FIFO_buf12_lane_41 = img_FIFO_buf12.extract<656, 671>();
  hw_uint<16> img_FIFO_buf12_lane_42 = img_FIFO_buf12.extract<672, 687>();
  hw_uint<16> img_FIFO_buf12_lane_43 = img_FIFO_buf12.extract<688, 703>();
  hw_uint<16> img_FIFO_buf12_lane_44 = img_FIFO_buf12.extract<704, 719>();
  hw_uint<16> img_FIFO_buf12_lane_45 = img_FIFO_buf12.extract<720, 735>();
  hw_uint<16> img_FIFO_buf12_lane_46 = img_FIFO_buf12.extract<736, 751>();
  hw_uint<16> img_FIFO_buf12_lane_47 = img_FIFO_buf12.extract<752, 767>();
  hw_uint<16> img_FIFO_buf12_lane_48 = img_FIFO_buf12.extract<768, 783>();
  hw_uint<16> img_FIFO_buf12_lane_49 = img_FIFO_buf12.extract<784, 799>();
  hw_uint<16> img_FIFO_buf12_lane_50 = img_FIFO_buf12.extract<800, 815>();
  hw_uint<16> img_FIFO_buf12_lane_51 = img_FIFO_buf12.extract<816, 831>();
  hw_uint<16> img_FIFO_buf12_lane_52 = img_FIFO_buf12.extract<832, 847>();
  hw_uint<16> img_FIFO_buf12_lane_53 = img_FIFO_buf12.extract<848, 863>();
  hw_uint<16> img_FIFO_buf12_lane_54 = img_FIFO_buf12.extract<864, 879>();
  hw_uint<16> img_FIFO_buf12_lane_55 = img_FIFO_buf12.extract<880, 895>();
  hw_uint<16> img_FIFO_buf12_lane_56 = img_FIFO_buf12.extract<896, 911>();
  hw_uint<16> img_FIFO_buf12_lane_57 = img_FIFO_buf12.extract<912, 927>();
  hw_uint<16> img_FIFO_buf12_lane_58 = img_FIFO_buf12.extract<928, 943>();
  hw_uint<16> img_FIFO_buf12_lane_59 = img_FIFO_buf12.extract<944, 959>();
  hw_uint<16> img_FIFO_buf12_lane_60 = img_FIFO_buf12.extract<960, 975>();
  hw_uint<16> img_FIFO_buf12_lane_61 = img_FIFO_buf12.extract<976, 991>();
  hw_uint<16> img_FIFO_buf12_lane_62 = img_FIFO_buf12.extract<992, 1007>();
  hw_uint<16> img_FIFO_buf12_lane_63 = img_FIFO_buf12.extract<1008, 1023>();
  hw_uint<16> img_FIFO_buf12_lane_64 = img_FIFO_buf12.extract<1024, 1039>();
  hw_uint<16> img_FIFO_buf12_lane_65 = img_FIFO_buf12.extract<1040, 1055>();
  hw_uint<16> img_FIFO_buf12_lane_66 = img_FIFO_buf12.extract<1056, 1071>();
  hw_uint<16> img_FIFO_buf12_lane_67 = img_FIFO_buf12.extract<1072, 1087>();
  hw_uint<16> img_FIFO_buf12_lane_68 = img_FIFO_buf12.extract<1088, 1103>();
  hw_uint<16> img_FIFO_buf12_lane_69 = img_FIFO_buf12.extract<1104, 1119>();
  hw_uint<16> img_FIFO_buf12_lane_70 = img_FIFO_buf12.extract<1120, 1135>();
  hw_uint<16> img_FIFO_buf12_lane_71 = img_FIFO_buf12.extract<1136, 1151>();
  hw_uint<16> img_FIFO_buf12_lane_72 = img_FIFO_buf12.extract<1152, 1167>();
  hw_uint<16> img_FIFO_buf12_lane_73 = img_FIFO_buf12.extract<1168, 1183>();
  hw_uint<16> img_FIFO_buf12_lane_74 = img_FIFO_buf12.extract<1184, 1199>();
  hw_uint<16> img_FIFO_buf12_lane_75 = img_FIFO_buf12.extract<1200, 1215>();
  hw_uint<16> img_FIFO_buf12_lane_76 = img_FIFO_buf12.extract<1216, 1231>();
  hw_uint<16> img_FIFO_buf12_lane_77 = img_FIFO_buf12.extract<1232, 1247>();
  hw_uint<16> img_FIFO_buf12_lane_78 = img_FIFO_buf12.extract<1248, 1263>();
  hw_uint<16> img_FIFO_buf12_lane_79 = img_FIFO_buf12.extract<1264, 1279>();
  hw_uint<16> img_FIFO_buf12_lane_80 = img_FIFO_buf12.extract<1280, 1295>();
  hw_uint<16> img_FIFO_buf12_lane_81 = img_FIFO_buf12.extract<1296, 1311>();
  hw_uint<16> img_FIFO_buf12_lane_82 = img_FIFO_buf12.extract<1312, 1327>();
  hw_uint<16> img_FIFO_buf12_lane_83 = img_FIFO_buf12.extract<1328, 1343>();
  hw_uint<16> img_FIFO_buf12_lane_84 = img_FIFO_buf12.extract<1344, 1359>();
  hw_uint<16> img_FIFO_buf12_lane_85 = img_FIFO_buf12.extract<1360, 1375>();
  hw_uint<16> img_FIFO_buf12_lane_86 = img_FIFO_buf12.extract<1376, 1391>();
  hw_uint<16> img_FIFO_buf12_lane_87 = img_FIFO_buf12.extract<1392, 1407>();
  hw_uint<16> img_FIFO_buf12_lane_88 = img_FIFO_buf12.extract<1408, 1423>();
  hw_uint<16> img_FIFO_buf12_lane_89 = img_FIFO_buf12.extract<1424, 1439>();
  hw_uint<16> img_FIFO_buf12_lane_90 = img_FIFO_buf12.extract<1440, 1455>();
  hw_uint<16> img_FIFO_buf12_lane_91 = img_FIFO_buf12.extract<1456, 1471>();
  hw_uint<16> img_FIFO_buf12_lane_92 = img_FIFO_buf12.extract<1472, 1487>();
  hw_uint<16> img_FIFO_buf12_lane_93 = img_FIFO_buf12.extract<1488, 1503>();
  hw_uint<16> img_FIFO_buf12_lane_94 = img_FIFO_buf12.extract<1504, 1519>();
  hw_uint<16> img_FIFO_buf12_lane_95 = img_FIFO_buf12.extract<1520, 1535>();

	
  hw_uint<96 > img_FIFO_buf12_lane_5_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_0);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_1);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_2);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_3);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_4);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_5);
  auto res_mag_y_update_0_sm38_0236 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_5_pack);

  hw_uint<96 > img_FIFO_buf12_lane_11_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_6);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_7);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_8);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_9);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_10);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_11);
  auto res_mag_y_update_0_sm38_1238 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_11_pack);

  hw_uint<96 > img_FIFO_buf12_lane_17_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_12);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_13);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_14);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_15);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_16);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_17);
  auto res_mag_y_update_0_sm38_2240 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_17_pack);

  hw_uint<96 > img_FIFO_buf12_lane_23_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_18);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_19);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_20);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_21);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_22);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_23);
  auto res_mag_y_update_0_sm38_3242 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_23_pack);

  hw_uint<96 > img_FIFO_buf12_lane_29_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_24);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_25);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_26);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_27);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_28);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_29);
  auto res_mag_y_update_0_sm38_4244 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_29_pack);

  hw_uint<96 > img_FIFO_buf12_lane_35_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_30);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_31);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_32);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_33);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_34);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_35);
  auto res_mag_y_update_0_sm38_5246 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_35_pack);

  hw_uint<96 > img_FIFO_buf12_lane_41_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_36);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_37);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_38);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_39);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_40);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_41);
  auto res_mag_y_update_0_sm38_6248 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_41_pack);

  hw_uint<96 > img_FIFO_buf12_lane_47_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_42);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_43);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_44);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_45);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_46);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_47);
  auto res_mag_y_update_0_sm38_7250 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_47_pack);

  hw_uint<96 > img_FIFO_buf12_lane_53_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_48);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_49);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_50);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_51);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_52);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_53);
  auto res_mag_y_update_0_sm38_8252 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_53_pack);

  hw_uint<96 > img_FIFO_buf12_lane_59_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_54);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_55);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_56);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_57);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_58);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_59);
  auto res_mag_y_update_0_sm38_9254 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_59_pack);

  hw_uint<96 > img_FIFO_buf12_lane_65_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_60);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_61);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_62);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_63);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_64);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_65);
  auto res_mag_y_update_0_sm38_10256 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_65_pack);

  hw_uint<96 > img_FIFO_buf12_lane_71_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_66);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_67);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_68);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_69);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_70);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_71);
  auto res_mag_y_update_0_sm38_11258 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_71_pack);

  hw_uint<96 > img_FIFO_buf12_lane_77_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_72);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_73);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_74);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_75);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_76);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_77);
  auto res_mag_y_update_0_sm38_12260 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_77_pack);

  hw_uint<96 > img_FIFO_buf12_lane_83_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_78);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_79);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_80);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_81);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_82);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_83);
  auto res_mag_y_update_0_sm38_13262 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_83_pack);

  hw_uint<96 > img_FIFO_buf12_lane_89_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_84);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_85);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_86);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_87);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_88);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_89);
  auto res_mag_y_update_0_sm38_14264 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_89_pack);

  hw_uint<96 > img_FIFO_buf12_lane_95_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_90);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_91);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_92);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_93);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_94);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_95);
  auto res_mag_y_update_0_sm38_15266 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_95_pack);
  hw_uint<256 > return_value444;
  set_at<0, 256, 16>(return_value444, res_mag_y_update_0_sm38_0236);
  set_at<16, 256, 16>(return_value444, res_mag_y_update_0_sm38_1238);
  set_at<32, 256, 16>(return_value444, res_mag_y_update_0_sm38_2240);
  set_at<48, 256, 16>(return_value444, res_mag_y_update_0_sm38_3242);
  set_at<64, 256, 16>(return_value444, res_mag_y_update_0_sm38_4244);
  set_at<80, 256, 16>(return_value444, res_mag_y_update_0_sm38_5246);
  set_at<96, 256, 16>(return_value444, res_mag_y_update_0_sm38_6248);
  set_at<112, 256, 16>(return_value444, res_mag_y_update_0_sm38_7250);
  set_at<128, 256, 16>(return_value444, res_mag_y_update_0_sm38_8252);
  set_at<144, 256, 16>(return_value444, res_mag_y_update_0_sm38_9254);
  set_at<160, 256, 16>(return_value444, res_mag_y_update_0_sm38_10256);
  set_at<176, 256, 16>(return_value444, res_mag_y_update_0_sm38_11258);
  set_at<192, 256, 16>(return_value444, res_mag_y_update_0_sm38_12260);
  set_at<208, 256, 16>(return_value444, res_mag_y_update_0_sm38_13262);
  set_at<224, 256, 16>(return_value444, res_mag_y_update_0_sm38_14264);
  set_at<240, 256, 16>(return_value444, res_mag_y_update_0_sm38_15266);
  return return_value444;

}

hw_uint<256> img_ld1_cu446(hw_uint<16*16>& img) {
  return img;
}

hw_uint<256> img_to_gp_10_ld5_cu448(hw_uint<16*16>& img_to_gp_10) {
  return img_to_gp_10;
}

hw_uint<256> img_to_gp_28_ld13_cu450(hw_uint<16*16>& img_to_gp_28) {
  return img_to_gp_28;
}

hw_uint<256> mag_x_to_gp_316_ld21_cu452(hw_uint<16*16>& mag_x_to_gp_316) {
  return mag_x_to_gp_316;
}

hw_uint<256> mag_y_ld25_cu454(hw_uint<16*16>& mag_y) {
  return mag_y;
}

