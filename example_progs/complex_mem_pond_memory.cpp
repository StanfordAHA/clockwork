#include "example_progs.h"

prog complex_mem_pond() {
  prog prg;
  prg.compute_unit_file = "complex_mem_pond_compute.h";
  prg.name = "complex_mem_pond";

// Stencil<uint16_t, 64, 30, 30> &input_host_stencil = arg_0;
  prg.add_input("input_host_stencil");
  prg.buffer_port_widths["input_host_stencil"] = 16;
// Stencil<uint16_t, 64, 48, 3, 3> &kernel_host_stencil = arg_1;
  prg.add_input("kernel_host_stencil");
  prg.buffer_port_widths["kernel_host_stencil"] = 16;
// Stencil<uint16_t, 28, 28, 48> &hw_output_stencil = arg_2;
  prg.add_output("hw_output_stencil");
  prg.buffer_port_widths["hw_output_stencil"] = 16;

////producing output_cgra.stencil
////producing input_cgra.stencil
  auto input_cgra_s0_y = prg.add_loop("input_cgra_s0_y", 0, 6);
  auto input_cgra_s0_x = input_cgra_s0_y->add_loop("input_cgra_s0_x", 0, 6);
  auto input_cgra_s0_z = input_cgra_s0_x->add_loop("input_cgra_s0_z", 0, 4);
  auto input_cgra_s0_zz = input_cgra_s0_z->add_loop("input_cgra_s0_zz", 0, 8);

//store is: input_cgra.stencil(input_cgra_s0_zz, input_cgra_s0_z, input_cgra_s0_x, input_cgra_s0_y) = input_host.stencil(((input_cgra_s0_z*4) + input_cgra_s0_zz), input_cgra_s0_x, input_cgra_s0_y)
  auto hcompute_input_cgra_stencil = input_cgra_s0_zz->add_op("op_hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_function("hcompute_input_cgra_stencil");
  hcompute_input_cgra_stencil->add_load("input_host_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "((input_cgra_s0_z*8) + input_cgra_s0_zz)");
  prg.buffer_port_widths["input_cgra_stencil"] = 16;
  hcompute_input_cgra_stencil->add_store("input_cgra_stencil", "input_cgra_s0_y", "input_cgra_s0_x", "input_cgra_s0_z", "input_cgra_s0_zz");

//consuming input_cgra.stencil
////producing kernel_cgra.stencil
  auto kernel_cgra_s0_y = prg.add_loop("kernel_cgra_s0_y", 0, 3);
  auto kernel_cgra_s0_x = kernel_cgra_s0_y->add_loop("kernel_cgra_s0_x", 0, 3);
  auto kernel_cgra_s0_w = kernel_cgra_s0_x->add_loop("kernel_cgra_s0_w", 0, 3);
  auto kernel_cgra_s0_z = kernel_cgra_s0_w->add_loop("kernel_cgra_s0_z", 0, 4);
  auto kernel_cgra_s0_zz = kernel_cgra_s0_z->add_loop("kernel_cgra_s0_zz", 0, 8);

//store is: kernel_cgra.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_host.stencil(kernel_cgra_s0_z, kernel_cgra_s0_w, kernel_cgra_s0_x, kernel_cgra_s0_y)
  auto hcompute_kernel_cgra_stencil = kernel_cgra_s0_zz->add_op("op_hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_function("hcompute_kernel_cgra_stencil");
  hcompute_kernel_cgra_stencil->add_load("kernel_host_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "kernel_cgra_s0_w", "kernel_cgra_s0_z*8+kernel_cgra_s0_zz");
  prg.buffer_port_widths["kernel_cgra_stencil"] = 16;
  hcompute_kernel_cgra_stencil->add_store("kernel_cgra_stencil", "kernel_cgra_s0_y", "kernel_cgra_s0_x", "kernel_cgra_s0_w", "kernel_cgra_s0_z", "kernel_cgra_s0_zz");

//consuming kernel_cgra.stencil
  //auto output_cgra_s0_w_w = prg.add_loop("output_cgra_s0_w_w", 0, 4);
  auto output_cgra_s0_y = prg.add_loop("output_cgra_s0_y", 0, 4);
  auto output_cgra_s0_x = output_cgra_s0_y->add_loop("output_cgra_s0_x", 0, 4);
////producing output_pond.stencil
  auto output_pond_s0_w_w_unroll = output_cgra_s0_x->add_loop("output_pond_s0_w_w_unroll", 0, 3);

//store is: output_pond.stencil(0, 0, output_pond_s0_w_w_unroll) = (uint16)0
  auto hcompute_output_pond_stencil = output_pond_s0_w_w_unroll->add_op("op_hcompute_output_pond_stencil");
  hcompute_output_pond_stencil->add_function("hcompute_output_pond_stencil");
  prg.buffer_port_widths["output_pond_stencil"] = 16;
  hcompute_output_pond_stencil->add_store("output_pond_stencil", "output_pond_s0_w_w_unroll", "0", "0");
////producing input_pond.stencil
  auto input_pond_s0_z = output_cgra_s0_x->add_loop("input_pond_s0_z", 0, 4);
  auto input_pond_s0_y = input_pond_s0_z->add_loop("input_pond_s0_y", 0, 3);
  auto input_pond_s0_x = input_pond_s0_y->add_loop("input_pond_s0_x", 0, 3);
  auto input_pond_s0_zz = input_pond_s0_x->add_loop("input_pond_s0_zz", 0, 8);

//store is: input_pond.stencil(input_pond_s0_zz, input_pond_s0_z, input_pond_s0_x, input_pond_s0_y) = input_cgra.stencil(input_pond_s0_zz, input_pond_s0_z, (input_pond_s0_x + output_cgra_s0_x), (input_pond_s0_y + output_cgra_s0_y))
  auto hcompute_input_pond_stencil = input_pond_s0_zz->add_op("op_hcompute_input_pond_stencil");
  hcompute_input_pond_stencil->add_function("hcompute_input_pond_stencil");
  hcompute_input_pond_stencil->add_load("input_cgra_stencil", "(input_pond_s0_y + output_cgra_s0_y)", "(input_pond_s0_x + output_cgra_s0_x)", "input_pond_s0_z", "input_pond_s0_zz");
  prg.buffer_port_widths["input_pond_stencil"] = 16;
  hcompute_input_pond_stencil->add_store("input_pond_stencil", "input_pond_s0_y", "input_pond_s0_x", "input_pond_s0_z", "input_pond_s0_zz");

//consuming input_pond.stencil
////producing kernel_pond.stencil
  auto kernel_pond_s0_z = output_cgra_s0_x->add_loop("kernel_pond_s0_z", 0, 4);
  auto kernel_pond_s0_y = kernel_pond_s0_z->add_loop("kernel_pond_s0_y", 0, 3);
  auto kernel_pond_s0_x = kernel_pond_s0_y->add_loop("kernel_pond_s0_x", 0, 3);
  auto kernel_pond_s0_w_w_cgra = kernel_pond_s0_x->add_loop("kernel_pond_s0_w_w_cgra", 0, 3);
  auto kernel_pond_s0_zz = kernel_pond_s0_w_w_cgra->add_loop("kernel_pond_s0_zz", 0, 8);

//store is: kernel_pond.stencil(kernel_pond_s0_zz, kernel_pond_s0_z, kernel_pond_s0_w_w_cgra, kernel_pond_s0_x, kernel_pond_s0_y) = kernel_cgra.stencil(((kernel_pond_s0_z*4) + kernel_pond_s0_zz), ((output_cgra_s0_w_w*3) + kernel_pond_s0_w_w_cgra), kernel_pond_s0_x, kernel_pond_s0_y)
  auto hcompute_kernel_pond_stencil = kernel_pond_s0_zz->add_op("op_hcompute_kernel_pond_stencil");
  hcompute_kernel_pond_stencil->add_function("hcompute_kernel_pond_stencil");
  hcompute_kernel_pond_stencil->add_load("kernel_cgra_stencil", "kernel_pond_s0_y", "kernel_pond_s0_x", " kernel_pond_s0_w_w_cgra", "kernel_pond_s0_z", " kernel_pond_s0_zz");
  prg.buffer_port_widths["kernel_pond_stencil"] = 16;
  hcompute_kernel_pond_stencil->add_store("kernel_pond_stencil", "kernel_pond_s0_y", "kernel_pond_s0_x", "kernel_pond_s0_w_w_cgra", "kernel_pond_s0_z", "kernel_pond_s0_zz");

//consuming kernel_pond.stencil
  auto output_pond_s1_r_z = output_cgra_s0_x->add_loop("output_pond_s1_r_z", 0, 8);
  auto output_pond_s1_r_y = output_pond_s1_r_z->add_loop("output_pond_s1_r_y", 0, 3);
  auto output_pond_s1_r_x = output_pond_s1_r_y->add_loop("output_pond_s1_r_x", 0, 3);

//store is: output_pond.stencil(0, 0, 0) = ((kernel_pond.stencil(0, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(0, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(1, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(1, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(2, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(2, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + (output_pond.stencil(0, 0, 0) + (kernel_pond.stencil(3, output_pond_s1_r_z, 0, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(3, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y))))))
  auto hcompute_output_pond_stencil_1 = output_pond_s1_r_x->add_op("op_hcompute_output_pond_stencil_1");
  hcompute_output_pond_stencil_1->add_function("hcompute_output_pond_stencil_1");
  hcompute_output_pond_stencil_1->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "3", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "0", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "1", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "2", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "3", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_1->add_load("output_pond_stencil", "0", "0", "0");
  hcompute_output_pond_stencil_1->add_store("output_pond_stencil", "0", "0", "0");

//store is: output_pond.stencil(0, 0, 1) = ((kernel_pond.stencil(0, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(0, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(1, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(1, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(2, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(2, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + (output_pond.stencil(0, 0, 1) + (kernel_pond.stencil(3, output_pond_s1_r_z, 1, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(3, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y))))))
  auto hcompute_output_pond_stencil_2 = output_pond_s1_r_x->add_op("op_hcompute_output_pond_stencil_2");
  hcompute_output_pond_stencil_2->add_function("hcompute_output_pond_stencil_2");
  hcompute_output_pond_stencil_2->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "3", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "0", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "1", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "2", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "3", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_2->add_load("output_pond_stencil", "1", "0", "0");
  hcompute_output_pond_stencil_2->add_store("output_pond_stencil", "1", "0", "0");

//store is: output_pond.stencil(0, 0, 2) = ((kernel_pond.stencil(0, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(0, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(1, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(1, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + ((kernel_pond.stencil(2, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(2, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y)) + (output_pond.stencil(0, 0, 2) + (kernel_pond.stencil(3, output_pond_s1_r_z, 2, output_pond_s1_r_x, output_pond_s1_r_y)*input_pond.stencil(3, output_pond_s1_r_z, output_pond_s1_r_x, output_pond_s1_r_y))))))
  auto hcompute_output_pond_stencil_3 = output_pond_s1_r_x->add_op("op_hcompute_output_pond_stencil_3");
  hcompute_output_pond_stencil_3->add_function("hcompute_output_pond_stencil_3");
  hcompute_output_pond_stencil_3->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "1", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "3", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("input_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "0", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "1", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "2", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "3", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("kernel_pond_stencil", "output_pond_s1_r_y", "output_pond_s1_r_x", "2", "0", "output_pond_s1_r_z");
  hcompute_output_pond_stencil_3->add_load("output_pond_stencil", "2", "0", "0");
  hcompute_output_pond_stencil_3->add_store("output_pond_stencil", "2", "0", "0");

//consuming output_pond.stencil

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, (output_cgra_s0_w_w*3)) = output_pond.stencil(0, 0, 0)
  auto hcompute_output_cgra_stencil = output_cgra_s0_x->add_op("op_hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_function("hcompute_output_cgra_stencil");
  hcompute_output_cgra_stencil->add_load("output_pond_stencil", "0", "0", "0");
  prg.buffer_port_widths["output_cgra_stencil"] = 16;
  hcompute_output_cgra_stencil->add_store("output_cgra_stencil", "0", "output_cgra_s0_y", "output_cgra_s0_x");

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, ((output_cgra_s0_w_w*3) + 1)) = output_pond.stencil(0, 0, 1)
  auto hcompute_output_cgra_stencil_1 = output_cgra_s0_x->add_op("op_hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_function("hcompute_output_cgra_stencil_1");
  hcompute_output_cgra_stencil_1->add_load("output_pond_stencil", "1", "0", "0");
  hcompute_output_cgra_stencil_1->add_store("output_cgra_stencil", "1", "output_cgra_s0_y", "output_cgra_s0_x");

//store is: output_cgra.stencil(output_cgra_s0_x, output_cgra_s0_y, ((output_cgra_s0_w_w*3) + 2)) = output_pond.stencil(0, 0, 2)
  auto hcompute_output_cgra_stencil_2 = output_cgra_s0_x->add_op("op_hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_function("hcompute_output_cgra_stencil_2");
  hcompute_output_cgra_stencil_2->add_load("output_pond_stencil", "2", "0", "0");
  hcompute_output_cgra_stencil_2->add_store("output_cgra_stencil", "2", "output_cgra_s0_y", "output_cgra_s0_x");

//consuming output_cgra.stencil
  auto hw_output_s0_w = prg.add_loop("hw_output_s0_w", 0, 3);
  auto hw_output_s0_y_yi = hw_output_s0_w->add_loop("hw_output_s0_y_yi", 0, 4);
  auto hw_output_s0_x_xi = hw_output_s0_y_yi->add_loop("hw_output_s0_x_xi", 0, 4);

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = output_cgra.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
  auto hcompute_hw_output_stencil = hw_output_s0_x_xi->add_op("op_hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_function("hcompute_hw_output_stencil");
  hcompute_hw_output_stencil->add_load("output_cgra_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");
  hcompute_hw_output_stencil->add_store("hw_output_stencil", "hw_output_s0_w", "hw_output_s0_y_yi", "hw_output_s0_x_xi");

  return prg;
}


