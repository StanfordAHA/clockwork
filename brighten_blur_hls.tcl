open_project -reset brighten_blur_proj
set_top brighten_blur
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" brighten_blur.cpp
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" brighten_blur.cpp
add_files -cflags "-I ../.. -std=c++11 -D__VIVADO_SYNTH__" -tb tb_soda_brighten_blur.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog
cosim_design -rtl verilog
exit
