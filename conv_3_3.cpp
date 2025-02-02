#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: unet_conv_3_3_compute.h
#include "unet_conv_3_3_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 12], [0, 12], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 784
	// # of read delays: 782
	fifo<hw_uint<16>, 784> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(783 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_conv_stencil_2_36_cache {
	// RAM Box: {[1, 13], [0, 12], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_36_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 780
	// # of read delays: 778
	fifo<hw_uint<16>, 780> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(779 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_conv_stencil_3_40_cache {
	// RAM Box: {[2, 14], [0, 12], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_40_cache {
	// RAM Box: {[0, 14], [0, 12], [0, 3]}
	// Capacity: 776
	// # of read delays: 766
	fifo<hw_uint<16>, 776> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(775 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_10_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 728
	// # of read delays: 726
	fifo<hw_uint<16>, 728> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(727 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_conv_stencil_4_10_cache {
	// RAM Box: {[0, 12], [1, 13], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_14_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 724
	// # of read delays: 724
	fifo<hw_uint<16>, 724> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(723 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_conv_stencil_5_14_cache {
	// RAM Box: {[1, 13], [1, 13], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_18_cache {
	// RAM Box: {[0, 14], [0, 13], [0, 3]}
	// Capacity: 720
	// # of read delays: 713
	fifo<hw_uint<16>, 720> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(719 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_conv_stencil_6_18_cache {
	// RAM Box: {[2, 14], [1, 13], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_22_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 672
	// # of read delays: 557
	fifo<hw_uint<16>, 672> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(671 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_conv_stencil_7_22_cache {
	// RAM Box: {[0, 12], [2, 14], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_26_cache {
	// RAM Box: {[0, 13], [0, 14], [0, 3]}
	// Capacity: 668
	// # of read delays: 557
	fifo<hw_uint<16>, 668> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(667 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_conv_stencil_8_26_cache {
	// RAM Box: {[1, 13], [2, 14], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_30_cache {
	// RAM Box: {[0, 14], [0, 14], [0, 3]}
	// Capacity: 664
	// # of read delays: 545
	fifo<hw_uint<16>, 664> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(663 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_conv_stencil_9_30_cache {
	// RAM Box: {[2, 14], [2, 14], [0, 3]}
	// Capacity: 100
	// # of read delays: 2
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 65
	// # of read delays: 65
	fifo<hw_uint<16>, 65> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(64 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 65
	// # of read delays: 65
	fifo<hw_uint<16>, 65> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(64 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 14], [0, 12], [0, 3]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 43
	// # of read delays: 43
	fifo<hw_uint<16>, 43> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(42 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 40
	// # of read delays: 40
	fifo<hw_uint<16>, 40> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(39 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 14], [0, 13], [0, 3]}
	// Capacity: 40
	// # of read delays: 40
	fifo<hw_uint<16>, 40> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(39 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 13], [0, 13], [0, 3]}
	// Capacity: 20
	// # of read delays: 16
	fifo<hw_uint<16>, 20> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(19 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 13], [0, 14], [0, 3]}
	// Capacity: 18
	// # of read delays: 14
	fifo<hw_uint<16>, 18> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache {
	// RAM Box: {[0, 14], [0, 14], [0, 3]}
	// Capacity: 15
	// # of read delays: 15
	fifo<hw_uint<16>, 15> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_cache {
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_conv_stencil_2_36_cache conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_conv_stencil_2_36;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_36_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_36;
  conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_conv_stencil_3_40_cache conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_conv_stencil_3_40;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_40_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_40;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_10_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_10;
  conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_conv_stencil_4_10_cache conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_conv_stencil_4_10;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_14_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_14;
  conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_conv_stencil_5_14_cache conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_conv_stencil_5_14;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_18_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_18;
  conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_conv_stencil_6_18_cache conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_conv_stencil_6_18;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_22_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_22;
  conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_conv_stencil_7_22_cache conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_conv_stencil_7_22;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_26_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_26;
  conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_conv_stencil_8_26_cache conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_conv_stencil_8_26;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_30_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_30;
  conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_conv_stencil_9_30_cache conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_conv_stencil_9_30;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_hw_output_stencil_34;
  conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_hw_output_stencil_34_cache conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_hw_output_stencil_34;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_5_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_5, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.push(conv_stencil_op_hcompute_conv_stencil_1_5);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_1_5);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_35_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_35, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_conv_stencil_2_36.push(conv_stencil_op_hcompute_conv_stencil_2_35);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_2_35);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_39_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_39, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_conv_stencil_3_40.push(conv_stencil_op_hcompute_conv_stencil_3_39);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_3_39);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_36.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_40.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_10.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_14.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_18.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_22.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_26.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_30.push(conv_stencil_op_hcompute_conv_stencil_4);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_9_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_9, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_conv_stencil_4_10.push(conv_stencil_op_hcompute_conv_stencil_4_9);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_4_9);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_13_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_13, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_conv_stencil_5_14.push(conv_stencil_op_hcompute_conv_stencil_5_13);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_5_13);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_17_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_17, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_conv_stencil_6_18.push(conv_stencil_op_hcompute_conv_stencil_6_17);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_6_17);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_21_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_21, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_conv_stencil_7_22.push(conv_stencil_op_hcompute_conv_stencil_7_21);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_7_21);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_25_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_25, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_conv_stencil_8_26.push(conv_stencil_op_hcompute_conv_stencil_8_25);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_8_25);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_29_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_29, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_conv_stencil_9_30.push(conv_stencil_op_hcompute_conv_stencil_9_29);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_hw_output_stencil_34.push(conv_stencil_op_hcompute_conv_stencil_9_29);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[3conv_s1_x_x, 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((-1 + conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_y == 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((conv_s1_r_z == 0) && (-2 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-2 + conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y == 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.peek(/* one reader or all rams */ ((-1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_x_x >= 0) || (conv_s1_y_y == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) || (-1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 4 - conv_s1_r_y - conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_y_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 2 - conv_s1_w >= 0) || (conv_s1_w == 0 && -1 + conv_s1_r_y >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0) || (-3 + conv_s1_w == 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0) || (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 3 - conv_s1_x_x >= 0) || (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0) || (conv_s1_x_x == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (conv_s1_w == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 + conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0 && -conv_s1_r_z + conv_s1_x_x >= 0 && -conv_s1_r_z + conv_s1_y_y >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_w == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_y_y == 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0)) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (3) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (47) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (102) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? (((703 + 55 * conv_s1_w) - 164 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0) ? ((47 - 11 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0) ? ((102 - 11 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((780 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((781 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0 && -1 + conv_s1_x_x >= 0) ? ((((703 + 55 * conv_s1_w) - 164 * conv_s1_y_y) - 11 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_36_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_36 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[1 + 3conv_s1_x_x, 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((-1 + conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_y == 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((conv_s1_r_z == 0) && (-2 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-2 + conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y == 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_2_35 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_conv_stencil_2_36.peek(/* one reader or all rams */ ((-1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_x_x >= 0) || (conv_s1_y_y == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) || (-1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 4 - conv_s1_r_y - conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_y_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 2 - conv_s1_w >= 0) || (conv_s1_w == 0 && -1 + conv_s1_r_y >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0) || (-3 + conv_s1_w == 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0) || (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 3 - conv_s1_x_x >= 0) || (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0) || (conv_s1_x_x == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (conv_s1_w == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 + conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0 && -conv_s1_r_z + conv_s1_x_x >= 0 && -conv_s1_r_z + conv_s1_y_y >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_w == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_y_y == 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0)) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_2_35;
  }

  
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_36.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (3) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (58) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (103) : (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((728 - 168 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((729 - 168 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? (((659 + 55 * conv_s1_w) - 164 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? (((704 + 55 * conv_s1_w) - 164 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0) ? ((48 - 11 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0) ? ((103 - 11 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? (((776 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? (((777 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 1 - conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((704 + 55 * conv_s1_w) - 164 * conv_s1_y_y) - 11 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_40_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_40 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[2 + 3conv_s1_x_x, 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((-1 + conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_y == 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((conv_s1_r_z == 0) && (-2 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-2 + conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y == 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_3_39 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_conv_stencil_3_40.peek(/* one reader or all rams */ ((-1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_x_x >= 0) || (conv_s1_y_y == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) || (-1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 4 - conv_s1_r_y - conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_y_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 2 - conv_s1_w >= 0) || (conv_s1_w == 0 && -1 + conv_s1_r_y >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0) || (-3 + conv_s1_w == 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0) || (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 3 - conv_s1_x_x >= 0) || (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0) || (conv_s1_x_x == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (conv_s1_w == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 + conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0 && -conv_s1_r_z + conv_s1_x_x >= 0 && -conv_s1_r_z + conv_s1_y_y >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_w == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_y_y == 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0)) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_3_39;
  }

  
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_40.peek(/* one reader or all rams */ (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? (((703 + 55 * conv_s1_w) - 164 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? ((47 - 12 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? ((102 - 12 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? (((772 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? (((773 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 1 - conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? ((((703 + 55 * conv_s1_w) - 164 * conv_s1_y_y) - 11 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_10_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_10 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[3conv_s1_x_x, 1 + 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_10.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (3) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (47) : (conv_s1_x_x == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((703 - 164 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0) ? ((47 - 11 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((52 - 12 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0) ? (((55 - conv_s1_w) - 12 * conv_s1_x_x)) : (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((703 - 164 * conv_s1_y_y) - 11 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? (((724 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? (((725 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? (((726 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_y == 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((conv_s1_r_z == 0) && (-2 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-2 + conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y == 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4_9 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_conv_stencil_4_10.peek(/* one reader or all rams */ ((-1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_x_x >= 0) || (conv_s1_y_y == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) || (-1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 4 - conv_s1_r_y - conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_y_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 2 - conv_s1_w >= 0) || (conv_s1_w == 0 && -1 + conv_s1_r_y >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0) || (-3 + conv_s1_w == 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0) || (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 3 - conv_s1_x_x >= 0) || (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0) || (conv_s1_x_x == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (conv_s1_w == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 + conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0 && -conv_s1_r_z + conv_s1_x_x >= 0 && -conv_s1_r_z + conv_s1_y_y >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_w == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_y_y == 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0)) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4_9;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_14_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_14 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[1 + 3conv_s1_x_x, 1 + 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_14.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (3) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (47) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0) ? ((3 - conv_s1_w)) : (-4 + conv_s1_x_x == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((659 - 164 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((672 - 168 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((673 - 168 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((674 - 168 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((703 - 164 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0) ? ((47 - 11 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? ((48 - 12 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) ? (((51 - conv_s1_w) - 12 * conv_s1_x_x)) : (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0) ? (((703 - 164 * conv_s1_y_y) - 11 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((720 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((721 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((722 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_5_13 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_conv_stencil_5_14.peek(/* one reader or all rams */ (3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_5_13;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_18_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_18 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[2 + 3conv_s1_x_x, 1 + 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_18.peek(/* one reader or all rams */ (conv_s1_x_x == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((704 - 164 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? ((44 - 12 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? ((47 - 12 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) ? (((47 - conv_s1_w) - 12 * conv_s1_x_x)) : (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0) ? (((704 - 164 * conv_s1_y_y) - 11 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((716 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-2 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((717 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (-1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((718 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_y >= 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_y == 0) && (-1 + conv_s1_r_x >= 0)) || ((-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (11 + conv_s1_w - 3*conv_s1_y_y >= 0)) || ((conv_s1_r_z == 0) && (-2 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x == 0) && (conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-2 + conv_s1_r_y == 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y == 0)) || ((-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0)) || ((-4 + conv_s1_x_x == 0) && (-4 + conv_s1_y_y == 0) && (conv_s1_w == 0) && (-1 + conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_6_17 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_conv_stencil_6_18.peek(/* one reader or all rams */ ((-1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_x_x >= 0) || (conv_s1_y_y == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) || (-1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 4 - conv_s1_r_y - conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_y_y == 0 && -1 + conv_s1_x_x >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 2 - conv_s1_w >= 0) || (conv_s1_w == 0 && -1 + conv_s1_r_y >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0) || (-3 + conv_s1_w == 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_x_x >= 0 && -1 + conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0) || (conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 3 - conv_s1_x_x >= 0) || (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0) || (conv_s1_x_x == 0 && -1 + conv_s1_r_x + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && -1 + conv_s1_r_y + conv_s1_r_z + conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (conv_s1_w == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 + conv_s1_r_x - conv_s1_y_y >= 0 && -1 + conv_s1_r_x + conv_s1_r_z >= 0 && -conv_s1_r_z + conv_s1_x_x >= 0 && -conv_s1_r_z + conv_s1_y_y >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_w == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && conv_s1_y_y == 0 && -1 + conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_y_y >= 0) || (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 3 - conv_s1_r_y - conv_s1_r_x - conv_s1_w >= 0 && -1 + conv_s1_y_y >= 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_w >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_w >= 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x >= 0)) ? (99) : ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -2 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0)) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_6_17;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_22_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_22 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[3conv_s1_x_x, 2 + 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_y_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_22.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? (((668 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? ((((671 - conv_s1_w) - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_7_21 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_conv_stencil_7_22.peek(/* one reader or all rams */ (3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_7_21;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_26_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_26 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[1 + 3conv_s1_x_x, 2 + 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_y_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_26.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0) ? ((616 - 168 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? (((619 - conv_s1_w) - 168 * conv_s1_y_y)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((664 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) ? ((((667 - conv_s1_w) - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_8_25 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_conv_stencil_8_26.peek(/* one reader or all rams */ (3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_8_25;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_30_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_30 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[2 + 3conv_s1_x_x, 2 + 3conv_s1_y_y, conv_s1_w] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  if ((((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (conv_s1_r_y == 0) && (3 - conv_s1_x_x >= 0) && (3 - conv_s1_y_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_30.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0 && 3 - conv_s1_y_y >= 0) ? (((660 - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0 && 3 - conv_s1_x_x >= 0) ? ((((663 - conv_s1_w) - 168 * conv_s1_y_y) - 12 * conv_s1_x_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_z == 0)) || ((conv_s1_r_z == 0) && (-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_z == 0) && (conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_9_29 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_conv_stencil_9_30.peek(/* one reader or all rams */ (3 - conv_s1_x_x >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && 3 - conv_s1_y_y >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && 2 - conv_s1_w >= 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -3 + conv_s1_w == 0 && -1 + conv_s1_r_y + conv_s1_r_x + conv_s1_r_z >= 0) ? (99) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_9_29;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_34_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_34 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  if ((((-hw_output_s0_x_xi + 3*floord(hw_output_s0_x_xi, 3) == 0) && (-hw_output_s0_y_yi + 3*floord(hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ (-12 + hw_output_s0_x_xi == 0 && -12 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) ? (25) : ((-12 + hw_output_s0_x_xi == 0 && -12 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) || (-12 + hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0)) ? (50) : (-3 + hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (51) : (hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (59) : (-12 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (60) : (-3 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (61) : ((-12 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) || (-12 + hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) || ((-hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_w == 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0)) ? (((60 - 5 * hw_output_s0_y_yi))/3) : ((-12 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) || (-12 + hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) || ((-hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_w == 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0)) ? (((135 - 5 * hw_output_s0_y_yi))/3) : ((-hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && 1 - hw_output_s0_w >= 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0) ? (((210 - 5 * hw_output_s0_y_yi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 9 - hw_output_s0_x_xi >= 0) ? (((12 - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0 && 9 - hw_output_s0_x_xi >= 0) ? (((87 - hw_output_s0_x_xi))/3) : (((-hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0 && 9 - hw_output_s0_x_xi >= 0) || ((-hw_output_s0_x_xi) % 3 == 0 && hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0 && -6 + hw_output_s0_x_xi >= 0 && 9 - hw_output_s0_x_xi >= 0)) ? (((162 - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0 && -6 + hw_output_s0_x_xi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? (((192 - hw_output_s0_x_xi))/3) : (((-hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_w == 0 && -3 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_x_xi >= 0) || ((-hw_output_s0_x_xi) % 3 == 0 && hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 9 - hw_output_s0_x_xi >= 0)) ? ((((72 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) || ((-hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && -2 + hw_output_s0_w == 0 && -3 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_x_xi >= 0) || ((-hw_output_s0_x_xi) % 3 == 0 && hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0 && 9 - hw_output_s0_x_xi >= 0)) ? ((((147 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && 1 - hw_output_s0_w >= 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? ((((222 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((1 - hw_output_s0_x_xi + 3*floord(-1 + hw_output_s0_x_xi, 3) == 0) && (-hw_output_s0_y_yi + 3*floord(hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_2_35 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_35_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ (-13 + hw_output_s0_x_xi == 0 && -12 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) ? (25) : (-13 + hw_output_s0_x_xi == 0 && -12 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (50) : (-13 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (55) : ((-13 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) || ((-hw_output_s0_y_yi) % 3 == 0 && -13 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_w == 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0) || (-13 + hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0)) ? (((60 - 5 * hw_output_s0_y_yi))/3) : ((-13 + hw_output_s0_x_xi == 0 && hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0) || (-13 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) || ((-hw_output_s0_y_yi) % 3 == 0 && -13 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_w == 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0)) ? (((135 - 5 * hw_output_s0_y_yi))/3) : ((-hw_output_s0_y_yi) % 3 == 0 && -13 + hw_output_s0_x_xi == 0 && 1 - hw_output_s0_w >= 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0) ? (((210 - 5 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 10 - hw_output_s0_x_xi >= 0) ? (((13 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0 && 10 - hw_output_s0_x_xi >= 0) ? (((88 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0 && 10 - hw_output_s0_x_xi >= 0) ? (((163 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0 && 4 - hw_output_s0_x_xi >= 0) ? (((163 + 2 * hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -3 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0 && -7 + hw_output_s0_x_xi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? (((178 - hw_output_s0_x_xi))/3) : (((1 - hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_w == 0 && -3 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_x_xi >= 0) || ((1 - hw_output_s0_x_xi) % 3 == 0 && hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 10 - hw_output_s0_x_xi >= 0)) ? ((((73 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : (((1 - hw_output_s0_x_xi) % 3 == 0 && hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && 10 - hw_output_s0_x_xi >= 0) || ((1 - hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && -2 + hw_output_s0_w == 0 && -3 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_x_xi >= 0)) ? ((((148 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && 1 - hw_output_s0_w >= 0 && -6 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? ((((223 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_2_35;
  }

  
  if ((((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (-hw_output_s0_y_yi + 3*floord(hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_3_39 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_39_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ ((-hw_output_s0_y_yi) % 3 == 0 && -2 + hw_output_s0_x_xi == 0 && 1 - hw_output_s0_w >= 0 && -3 + hw_output_s0_y_yi >= 0 && 6 - hw_output_s0_y_yi >= 0) ? (((126 + 10 * hw_output_s0_y_yi))/3) : ((-hw_output_s0_y_yi) % 3 == 0 && -5 + hw_output_s0_x_xi == 0 && 1 - hw_output_s0_w >= 0 && -3 + hw_output_s0_y_yi >= 0 && 6 - hw_output_s0_y_yi >= 0) ? (((129 + 10 * hw_output_s0_y_yi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) ? (((14 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) ? (((89 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -12 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (((164 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -9 + hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) ? (((179 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_w == 0 && 9 - hw_output_s0_y_yi >= 0) ? ((((74 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && 1 - hw_output_s0_w >= 0 && -3 + hw_output_s0_y_yi >= 0 && 6 - hw_output_s0_y_yi >= 0 && -8 + hw_output_s0_x_xi >= 0) ? ((((134 + 10 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : (((-1 - hw_output_s0_x_xi) % 3 == 0 && hw_output_s0_y_yi == 0 && 1 - hw_output_s0_w >= 0) || ((-1 - hw_output_s0_x_xi) % 3 == 0 && (-hw_output_s0_y_yi) % 3 == 0 && -2 + hw_output_s0_w == 0 && 9 - hw_output_s0_y_yi >= 0)) ? ((((149 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_3_39;
  }

  
  if ((((-hw_output_s0_x_xi + 3*floord(hw_output_s0_x_xi, 3) == 0) && (1 - hw_output_s0_y_yi + 3*floord(-1 + hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4_9 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_9_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ (-12 + hw_output_s0_x_xi == 0 && -13 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0) ? (25) : ((1 - hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_w == 0 && 10 - hw_output_s0_y_yi >= 0) ? (((65 - 5 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_y_yi) % 3 == 0 && hw_output_s0_x_xi == 0 && 2 - hw_output_s0_w >= 0 && 4 - hw_output_s0_y_yi >= 0) ? (((77 + 10 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && 2 - hw_output_s0_w >= 0 && 4 - hw_output_s0_y_yi >= 0) ? (((80 + 10 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_x_xi == 0 && 2 - hw_output_s0_w >= 0 && 4 - hw_output_s0_y_yi >= 0) ? (((83 + 10 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0) ? (((140 - 5 * hw_output_s0_y_yi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && -13 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 9 - hw_output_s0_x_xi >= 0) ? (((12 - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && -13 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && 9 - hw_output_s0_x_xi >= 0) ? (((87 - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_w == 0 && 10 - hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? ((((77 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && 2 - hw_output_s0_w >= 0 && 4 - hw_output_s0_y_yi >= 0 && -6 + hw_output_s0_x_xi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? ((((92 + 10 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? ((((152 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4_9;
  }

  
  if ((((1 - hw_output_s0_x_xi + 3*floord(-1 + hw_output_s0_x_xi, 3) == 0) && (1 - hw_output_s0_y_yi + 3*floord(-1 + hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_5_13 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_13_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ ((-13 + hw_output_s0_x_xi == 0 && -13 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0) || (-13 + hw_output_s0_x_xi == 0 && -1 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0)) ? (25) : (-13 + hw_output_s0_x_xi == 0 && -4 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0) ? (35) : ((-13 + hw_output_s0_x_xi == 0 && -4 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) || ((1 - hw_output_s0_y_yi) % 3 == 0 && -13 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_w == 0 && -7 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0) || (-13 + hw_output_s0_x_xi == 0 && -1 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0)) ? (((65 - 5 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_y_yi) % 3 == 0 && -13 + hw_output_s0_x_xi == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0) ? (((140 - 5 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -13 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 10 - hw_output_s0_x_xi >= 0) ? (((13 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -1 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && 4 - hw_output_s0_x_xi >= 0) ? (((73 + 2 * hw_output_s0_x_xi))/3) : (((1 - hw_output_s0_x_xi) % 3 == 0 && -13 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && 10 - hw_output_s0_x_xi >= 0) || ((1 - hw_output_s0_x_xi) % 3 == 0 && -1 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_x_xi >= 0 && 10 - hw_output_s0_x_xi >= 0)) ? (((88 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -4 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && 4 - hw_output_s0_x_xi >= 0) ? (((103 + 2 * hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -4 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_x_xi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? (((118 - hw_output_s0_x_xi))/3) : (((1 - hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_w == 0 && -4 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_x_xi >= 0) || ((1 - hw_output_s0_x_xi) % 3 == 0 && -1 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 10 - hw_output_s0_x_xi >= 0)) ? ((((78 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? ((((153 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_5_13;
  }

  
  if ((((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (1 - hw_output_s0_y_yi + 3*floord(-1 + hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_6_17 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_17_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ ((-1 - hw_output_s0_x_xi) % 3 == 0 && -13 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) ? (((14 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -13 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0) ? (((89 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -4 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && 5 - hw_output_s0_x_xi >= 0) ? (((89 + 2 * hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -4 + hw_output_s0_y_yi == 0 && 2 - hw_output_s0_w >= 0 && -8 + hw_output_s0_x_xi >= 0) ? (((104 - hw_output_s0_x_xi))/3) : (((-1 - hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && -3 + hw_output_s0_w == 0 && -4 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0) || ((-1 - hw_output_s0_x_xi) % 3 == 0 && -1 + hw_output_s0_y_yi == 0)) ? ((((79 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && (1 - hw_output_s0_y_yi) % 3 == 0 && 2 - hw_output_s0_w >= 0 && -7 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_y_yi >= 0) ? ((((154 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_6_17;
  }

  
  if ((((-hw_output_s0_x_xi + 3*floord(hw_output_s0_x_xi, 3) == 0) && (-1 - hw_output_s0_y_yi + 3*floord(1 + hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_7_21 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_21_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ (-12 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_y_yi == 0) ? (10) : (-3 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_y_yi == 0) ? (11) : (-12 + hw_output_s0_x_xi == 0 && -5 + hw_output_s0_y_yi == 0) ? (15) : ((-1 - hw_output_s0_y_yi) % 3 == 0 && -12 + hw_output_s0_x_xi == 0 && -8 + hw_output_s0_y_yi >= 0) ? (((70 - 5 * hw_output_s0_y_yi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && -2 + hw_output_s0_y_yi == 0 && -6 + hw_output_s0_x_xi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? (((42 - hw_output_s0_x_xi))/3) : ((hw_output_s0_x_xi == 0 && -2 + hw_output_s0_y_yi == 0) || ((-hw_output_s0_x_xi) % 3 == 0 && -5 + hw_output_s0_y_yi == 0 && 9 - hw_output_s0_x_xi >= 0)) ? ((((7 + 10 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : ((-hw_output_s0_x_xi) % 3 == 0 && (-1 - hw_output_s0_y_yi) % 3 == 0 && -8 + hw_output_s0_y_yi >= 0 && 9 - hw_output_s0_x_xi >= 0) ? ((((82 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_7_21;
  }

  
  if ((((1 - hw_output_s0_x_xi + 3*floord(-1 + hw_output_s0_x_xi, 3) == 0) && (-1 - hw_output_s0_y_yi + 3*floord(1 + hw_output_s0_y_yi, 3) == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_8_25 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_25_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ (-13 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_y_yi == 0) ? (5) : (-13 + hw_output_s0_x_xi == 0 && -5 + hw_output_s0_y_yi == 0) ? (15) : ((-1 - hw_output_s0_y_yi) % 3 == 0 && -13 + hw_output_s0_x_xi == 0 && -8 + hw_output_s0_y_yi >= 0) ? (((70 - 5 * hw_output_s0_y_yi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -2 + hw_output_s0_y_yi == 0 && 4 - hw_output_s0_x_xi >= 0) ? (((13 + 2 * hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -2 + hw_output_s0_y_yi == 0 && -7 + hw_output_s0_x_xi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? (((28 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -5 + hw_output_s0_y_yi == 0 && 4 - hw_output_s0_x_xi >= 0) ? (((43 + 2 * hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && -5 + hw_output_s0_y_yi == 0 && -7 + hw_output_s0_x_xi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? (((58 - hw_output_s0_x_xi))/3) : ((1 - hw_output_s0_x_xi) % 3 == 0 && (-1 - hw_output_s0_y_yi) % 3 == 0 && -8 + hw_output_s0_y_yi >= 0 && 10 - hw_output_s0_x_xi >= 0) ? ((((83 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_8_25;
  }

  
  if ((((-2 + hw_output_s0_x_xi == 0) && (-2 + hw_output_s0_y_yi == 0)) || ((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (-2 + hw_output_s0_y_yi == 0) && (-5 + hw_output_s0_x_xi >= 0)) || ((-1 - hw_output_s0_x_xi + 3*floord(1 + hw_output_s0_x_xi, 3) == 0) && (-1 - hw_output_s0_y_yi + 3*floord(1 + hw_output_s0_y_yi, 3) == 0) && (-5 + hw_output_s0_y_yi >= 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // Write schedule: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    auto value_conv_stencil_op_hcompute_conv_stencil_9_29 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_29_to_conv_stencil_op_hcompute_hw_output_stencil_34.peek(/* one reader or all rams */ (-5 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_y_yi == 0) ? (2) : (-2 + hw_output_s0_x_xi == 0 && -5 + hw_output_s0_y_yi == 0) ? (10) : (-5 + hw_output_s0_x_xi == 0 && -5 + hw_output_s0_y_yi == 0) ? (12) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -2 + hw_output_s0_y_yi == 0 && -8 + hw_output_s0_x_xi >= 0) ? (((14 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && -5 + hw_output_s0_y_yi == 0 && -8 + hw_output_s0_x_xi >= 0) ? (((44 - hw_output_s0_x_xi))/3) : ((-1 - hw_output_s0_x_xi) % 3 == 0 && (-1 - hw_output_s0_y_yi) % 3 == 0 && -8 + hw_output_s0_y_yi >= 0) ? ((((84 - 5 * hw_output_s0_y_yi) - hw_output_s0_x_xi))/3) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_9_29;
  }

  
  return 0;
}

// # of bundles = 20
// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_6
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_6

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_res = conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_6_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_5
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_5_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_5_write(conv_stencil_op_hcompute_conv_stencil_1_5_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_36
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_36

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_36_res = conv_stencil_op_hcompute_conv_stencil_2_36_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_36_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_35
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_35_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_35_write(conv_stencil_op_hcompute_conv_stencil_2_35_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_40
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_40

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_40_res = conv_stencil_op_hcompute_conv_stencil_3_40_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_40_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_39
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_39_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_39_write(conv_stencil_op_hcompute_conv_stencil_3_39_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_10
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_10

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_10_res = conv_stencil_op_hcompute_conv_stencil_4_10_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_10_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_9
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_9_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_9_write(conv_stencil_op_hcompute_conv_stencil_4_9_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_14
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_14

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_14_res = conv_stencil_op_hcompute_conv_stencil_5_14_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_14_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_13
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_13_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_13_write(conv_stencil_op_hcompute_conv_stencil_5_13_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_18
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_18

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_18_res = conv_stencil_op_hcompute_conv_stencil_6_18_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_18_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_17
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_17_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_17_write(conv_stencil_op_hcompute_conv_stencil_6_17_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_22
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_22

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_22_res = conv_stencil_op_hcompute_conv_stencil_7_22_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_22_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_21
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_21_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_21_write(conv_stencil_op_hcompute_conv_stencil_7_21_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_26
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_26

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_26_res = conv_stencil_op_hcompute_conv_stencil_8_26_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_26_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_25
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_25_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_25_write(conv_stencil_op_hcompute_conv_stencil_8_25_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_30
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_30

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_30_res = conv_stencil_op_hcompute_conv_stencil_9_30_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_30_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_29
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_29_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_29_write(conv_stencil_op_hcompute_conv_stencil_9_29_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_4
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_write(conv_stencil_op_hcompute_conv_stencil_4_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_34
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_34

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_34_res = conv_stencil_op_hcompute_hw_output_stencil_34_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_34_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache {
	// RAM Box: {[0, 1], [0, 15], [0, 15]}
	// Capacity: 511
	// # of read delays: 511
	fifo<hw_uint<16>, 511> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(510 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_37_cache {
	// RAM Box: {[0, 1], [0, 15], [0, 15]}
	// Capacity: 509
	// # of read delays: 509
	fifo<hw_uint<16>, 509> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(508 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_41_cache {
	// RAM Box: {[0, 1], [0, 16], [0, 14]}
	// Capacity: 507
	// # of read delays: 507
	fifo<hw_uint<16>, 507> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(506 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_11_cache {
	// RAM Box: {[0, 1], [0, 15], [0, 15]}
	// Capacity: 480
	// # of read delays: 480
	fifo<hw_uint<16>, 480> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(479 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_15_cache {
	// RAM Box: {[0, 1], [0, 15], [0, 15]}
	// Capacity: 478
	// # of read delays: 478
	fifo<hw_uint<16>, 478> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(477 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_19_cache {
	// RAM Box: {[0, 1], [0, 16], [0, 15]}
	// Capacity: 476
	// # of read delays: 476
	fifo<hw_uint<16>, 476> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(475 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_23_cache {
	// RAM Box: {[0, 1], [0, 15], [0, 15]}
	// Capacity: 448
	// # of read delays: 448
	fifo<hw_uint<16>, 448> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(447 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_27_cache {
	// RAM Box: {[0, 1], [0, 15], [0, 16]}
	// Capacity: 446
	// # of read delays: 446
	fifo<hw_uint<16>, 446> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(445 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_31_cache {
	// RAM Box: {[0, 1], [0, 16], [0, 16]}
	// Capacity: 444
	// # of read delays: 444
	fifo<hw_uint<16>, 444> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(443 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_cache {
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_37_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_37;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_41_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_41;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_11_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_11;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_15_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_15;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_19_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_19;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_23_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_23;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_27_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_27;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_31_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_31;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_37.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_41.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_11.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_15.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_19.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_23.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_27.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_31.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (-2 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (13) : (-1 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (19) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (24) : (-2 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (45) : (-1 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (51) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-2 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((389 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-1 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((395 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((400 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((510 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0) ? ((((510 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0) ? ((((511 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0) ? (((((510 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0) ? (((((511 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_37_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_37 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, 1 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_37.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (-2 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (13) : (-1 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (19) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (24) : (-2 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (45) : (-1 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (51) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((480 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((481 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0) ? (((480 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0) ? (((481 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-2 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((389 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-1 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((395 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((400 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((508 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((508 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((509 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((508 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((509 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_41_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_41 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, 2 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_41.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (23) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (55) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((480 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((481 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0) ? (((480 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0) ? (((481 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? (((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((23 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((55 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((506 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((506 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((507 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((506 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((507 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 5 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_11 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, conv_s1_r_x + 3conv_s1_x_x, 1 + conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_11.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (23) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (55) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? (((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((23 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((55 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0) ? (((30 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0) ? (((31 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((478 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((479 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0) ? ((((478 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0) ? ((((479 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((((478 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((((479 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_w >= 0 && 2 - conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 5 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0 && -3 + conv_s1_x_x >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_15_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_15 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, 1 + conv_s1_r_x + 3conv_s1_x_x, 1 + conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_15.peek(/* one reader or all rams */ ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0)) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (23) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (55) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((448 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((449 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((448 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((449 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? (((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((23 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((55 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((28 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((29 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((476 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((477 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((476 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((477 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((476 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((477 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_w >= 0 && 2 - conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 5 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0 && -3 + conv_s1_x_x >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_19_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_19 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, 2 + conv_s1_r_x + 3conv_s1_x_x, 1 + conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_19.peek(/* one reader or all rams */ ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0)) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (-2 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (13) : (-1 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (19) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (24) : (-2 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (45) : (-1 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (51) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((448 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((449 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((448 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((449 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-2 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? (((389 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-1 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? (((395 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0) ? (((400 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((26 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((27 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((474 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((475 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((474 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((475 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((474 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 13 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((475 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 2 - conv_s1_w >= 0 && -3 + conv_s1_x_x >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_23_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_23 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, conv_s1_r_x + 3conv_s1_x_x, 2 + conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_23.peek(/* one reader or all rams */ (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (23) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (55) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? (((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((23 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((55 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0) ? (((30 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0) ? (((31 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((446 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -2 + conv_s1_w >= 0) ? (((447 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0) ? ((((446 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0) ? ((((447 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((((446 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((((447 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 1 - conv_s1_w >= 0 && 2 - conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 5 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0 && -3 + conv_s1_x_x >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_27 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, 1 + conv_s1_r_x + 3conv_s1_x_x, 2 + conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_27.peek(/* one reader or all rams */ ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0)) ? (1) : (-3 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (7) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (23) : (conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (55) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((416 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((417 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((416 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((417 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (conv_s1_x_x == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? (((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((23 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 2 - conv_s1_x_x >= 0) ? ((55 - 5 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -3 + conv_s1_x_x >= 0) ? ((57 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((28 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((29 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((444 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -2 + conv_s1_w >= 0) ? (((445 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((444 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((445 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((444 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 13 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((445 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -1 + conv_s1_x_x >= 0 && 1 - conv_s1_w >= 0 && 2 - conv_s1_x_x >= 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0) ? ((((399 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 5 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0 && -3 + conv_s1_x_x >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_31 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_z, 2 + conv_s1_r_x + 3conv_s1_x_x, 2 + conv_s1_r_y + 3conv_s1_y_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_31.peek(/* one reader or all rams */ ((-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) || (-4 + conv_s1_x_x == 0 && -4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0)) ? (1) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((416 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((417 - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((416 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_x_x == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0) ? (((417 - 32 * conv_s1_r_y) - 96 * conv_s1_y_y)) : (-4 + conv_s1_y_y == 0 && conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 3 - conv_s1_x_x >= 0) ? ((25 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? ((57 - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((26 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-4 + conv_s1_y_y == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((27 - 2 * conv_s1_r_x) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (((442 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && -2 + conv_s1_w >= 0) ? (((443 - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((442 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_y == 0 && -1 + conv_s1_r_x >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? ((((443 - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((442 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y >= 0 && 12 - conv_s1_r_y - 3*conv_s1_y_y >= 0 && 12 - conv_s1_r_x - 3*conv_s1_x_x >= 0) ? (((((443 - 32 * conv_s1_r_y) - 2 * conv_s1_r_x) - 96 * conv_s1_y_y) - 6 * conv_s1_x_x)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 10 + conv_s1_w - 3*conv_s1_y_y >= 0 && 1 - conv_s1_w >= 0) ? ((((401 + 32 * conv_s1_w) - 94 * conv_s1_y_y) - 6 * conv_s1_x_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_7
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_1_7

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_res = hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_1_7_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_37
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_2_37

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_37_res = hw_input_stencil_op_hcompute_conv_stencil_2_37_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_2_37_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_41
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_3_41

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_41_res = hw_input_stencil_op_hcompute_conv_stencil_3_41_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_3_41_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_11
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_4_11

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_11_res = hw_input_stencil_op_hcompute_conv_stencil_4_11_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_4_11_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_15
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_5_15

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_15_res = hw_input_stencil_op_hcompute_conv_stencil_5_15_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_5_15_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_19
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_6_19

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_19_res = hw_input_stencil_op_hcompute_conv_stencil_6_19_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_6_19_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_23
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_7_23

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_23_res = hw_input_stencil_op_hcompute_conv_stencil_7_23_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_7_23_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_27
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_8_27

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_27_res = hw_input_stencil_op_hcompute_conv_stencil_8_27_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_8_27_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_31
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_9_31

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_31_res = hw_input_stencil_op_hcompute_conv_stencil_9_31_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_9_31_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
}

#include "hw_classes.h"

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_38_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_42_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_12_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_16_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_20_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_24_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_28_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_32_cache {
	// RAM Box: {[0, 1], [0, 3], [0, 2], [0, 2]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_kernel_stencil_cache {
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_38_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_38;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_42_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_42;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_12_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_12;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_16_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_16;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_20_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_20;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_24_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_24;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_28_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_28;
  hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_32_cache hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_32;
};



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_38.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_42.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_12.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_16.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_20.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_24.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_28.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
  hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_32.push(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_8_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_1_8.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_38_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_38 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_2_38.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_42_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_42 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_3_42.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_12_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_12 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_4_12.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_16 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_5_16.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_20 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_6_20.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_24_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_24 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_7_24.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_28_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_28 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_8_28.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_32_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_32 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_z, conv_s1_w, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  // Write schedule: { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_to_hw_kernel_stencil_op_hcompute_conv_stencil_9_32.peek(/* one reader or all rams */ (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0) ? (1) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (17) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (24) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0) ? (25) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (40) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (48) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (49) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (56) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0) ? (57) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((16 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((17 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && -1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((40 - 8 * conv_s1_r_x)) : (-3 + conv_s1_w == 0 && conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 1 - conv_s1_r_x >= 0) ? ((41 - 8 * conv_s1_r_x)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((6 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((7 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((23 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((30 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((31 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((46 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((54 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((55 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((62 - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_x == 0 && conv_s1_r_y == 0 && 2 - conv_s1_w >= 0) ? ((63 - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((22 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -2 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((23 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (-1 + conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((46 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : (conv_s1_r_z == 0 && -1 + conv_s1_r_y == 0 && 2 - conv_s1_w >= 0 && 1 - conv_s1_r_x >= 0) ? (((47 - 8 * conv_s1_r_x) - 2 * conv_s1_w)) : 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_8
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_8

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_8_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_8_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_8_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_38
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_38

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_38_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_38_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_38_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_42
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_42

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_42_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_42_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_42_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_12
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_12

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_12_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_12_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_12_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_16
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_16

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_16_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_16_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_20
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_20

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_20_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_20_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_24
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_24

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_24_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_24_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_24_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_28
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_28

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_28_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_28_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_28_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_32
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_32

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_32_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_32_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_32_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_z_c__hw_input_s0_x_c__hw_input_s0_y_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_z_c__hw_input_s0_x_c__hw_input_s0_y_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_kernel_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */kernel_copy_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z) {
  // Dynamic address computation

	// Consume: kernel_copy_stencil
	auto kernel_copy_stencil_hw_kernel_s0_z_c__hw_kernel_s0_w_c__hw_kernel_s0_x_c__hw_kernel_s0_y_value = kernel_copy_stencil.read();
	auto compute_result = hcompute_hw_kernel_stencil(kernel_copy_stencil_hw_kernel_s0_z_c__hw_kernel_s0_w_c__hw_kernel_s0_x_c__hw_kernel_s0_y_value);
	// Produce: hw_kernel_stencil
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(/* arg names */compute_result, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp_conv_s1_x_x_m_3_rp__c___lp_conv_s1_y_y_m_3_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c___lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil__lp_conv_s1_x_x_m_3_rp__c___lp_conv_s1_y_y_m_3_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c___lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp_conv_s1_x_x_m_3_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__value = hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil__lp_conv_s1_x_x_m_3_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__value = hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__value = hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_6(conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp_conv_s1_x_x_m_3_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__value = hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_7(conv_stencil__lp_conv_s1_x_x_m_3_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__value = hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_8(conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_9(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__value = hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_9(conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c___lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_c__hw_output_s0_w_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_c__hw_output_s0_w_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__c___lp_conv_s1_y_y_m_3_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c___lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__value = hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_2(conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__c___lp_conv_s1_y_y_m_3_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c___lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__c___lp_conv_s1_y_y_m_3_rp__c__conv_s1_w_value = conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c___lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__value = hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil__lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__c___lp_conv_s1_y_y_m_3_rp__c__conv_s1_w_value, hw_input_stencil_conv_s1_r_z_c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c___lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__value, hw_kernel_stencil_conv_s1_r_z_c__conv_s1_w_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void conv_3_3(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("conv_3_3_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_kernel_stencil_cache hw_kernel_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13; op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3; op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_8(((i8 == 0) && (-2 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-14 + i3 >= 0) && (17 - i3 >= 0) && (-9 + i5 >= 0) && (13 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_4(((i8 == 0) && (-5 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-13 + i3 >= 0) && (16 - i3 >= 0) && (-8 + i5 >= 0) && (12 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 1, hw_input_s0_x, hw_input_s0_z, 6, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
// Condition for op_hcompute_hw_input_stencil(((i8 == 0) && (-6 + i7 == 0) && (-1 + i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (15 - i5 >= 0) && (i6 >= 0) && (1 - i6 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, hw_kernel_s0_y, 2 + hw_kernel_s0_x, 0, hw_kernel_s0_w, hw_kernel_s0_z, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
// Condition for op_hcompute_hw_kernel_stencil(((i8 == 0) && (i7 == 0) && (i4 == 0) && (i1 == 0) && (i0 == 0) && (i2 >= 0) && (2 - i2 >= 0) && (-2 + i3 >= 0) && (4 - i3 >= 0) && (i5 >= 0) && (3 - i5 >= 0) && (i6 >= 0) && (1 - i6 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [2, 2, 1, 14 + hw_output_s0_w, 1, 8 + hw_output_s0_y_yi, hw_output_s0_x_xi, 1, 1] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
// Condition for op_hcompute_hw_output_stencil(((-1 + i8 == 0) && (-1 + i7 == 0) && (-1 + i4 == 0) && (-1 + i2 == 0) && (-2 + i1 == 0) && (-2 + i0 == 0) && (-14 + i3 >= 0) && (17 - i3 >= 0) && (-8 + i5 >= 0) && (21 - i5 >= 0) && (i6 >= 0) && (13 - i6 >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 9, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_6(((i8 == 0) && (-9 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-13 + i3 >= 0) && (16 - i3 >= 0) && (-10 + i5 >= 0) && (14 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 0, conv_s0_y, 1, conv_s0_x, conv_s0_w, 8, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
// Condition for op_hcompute_conv_stencil(((i8 == 0) && (-8 + i7 == 0) && (-1 + i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (13 - i3 >= 0) && (i5 >= 0) && (13 - i5 >= 0) && (i6 >= 0) && (3 - i6 >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_1(((i8 == 0) && (-7 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-12 + i3 >= 0) && (15 - i3 >= 0) && (-8 + i5 >= 0) && (12 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 10, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_2(((i8 == 0) && (-10 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-12 + i3 >= 0) && (15 - i3 >= 0) && (-9 + i5 >= 0) && (13 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 10 + conv_s1_y_y, 2 + conv_s1_x_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_9(((i8 == 0) && (-1 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-14 + i3 >= 0) && (17 - i3 >= 0) && (-10 + i5 >= 0) && (14 - i5 >= 0) && (-2 + i6 >= 0) && (6 - i6 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 13 + conv_s1_w, 1, 9 + conv_s1_y_y, conv_s1_x_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_5(((i8 == 0) && (-4 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-13 + i3 >= 0) && (16 - i3 >= 0) && (-9 + i5 >= 0) && (13 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 12 + conv_s1_w, 1, 10 + conv_s1_y_y, conv_s1_x_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_3(((i8 == 0) && (i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-12 + i3 >= 0) && (15 - i3 >= 0) && (-10 + i5 >= 0) && (14 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, 14 + conv_s1_w, 1, 8 + conv_s1_y_y, conv_s1_x_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_7(((i8 == 0) && (-3 + i7 == 0) && (-1 + i4 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (1 - i2 >= 0) && (-14 + i3 >= 0) && (17 - i3 >= 0) && (-8 + i5 >= 0) && (12 - i5 >= 0) && (i6 >= 0) && (4 - i6 >= 0)))

  /*
for (int c0 = 0; c0 <= 2; c0 += 1)
  for (int c1 = 0; c1 <= 2; c1 += 1) {
    for (int c2 = 0; c2 <= 1; c2 += 1) {
      if (c0 == 0 && c1 == 0 && c2 == 1) {
        for (int c3 = 2; c3 <= 4; c3 += 1)
          for (int c5 = 0; c5 <= 3; c5 += 1)
            for (int c6 = 0; c6 <= 1; c6 += 1)
              op_hcompute_hw_kernel_stencil(0, 1, c3 - 2, c5, c6);
      } else if (c0 == 0 && c1 == 0 && c2 == 0) {
        for (int c3 = 0; c3 <= 11; c3 += 1) {
          if (c3 >= 2 && c3 <= 4)
            for (int c5 = 0; c5 <= 3; c5 += 1)
              for (int c6 = 0; c6 <= 1; c6 += 1)
                op_hcompute_hw_kernel_stencil(0, 0, c3 - 2, c5, c6);
          for (int c5 = 0; c5 <= 15; c5 += 1) {
            for (int c6 = 0; c6 <= 1; c6 += 1) {
              op_hcompute_hw_input_stencil(0, c3, c5, c6);
              if (c5 <= 13)
                op_hcompute_conv_stencil(0, c3, c5, c6);
            }
            if (c5 <= 13)
              for (int c6 = 2; c6 <= 3; c6 += 1)
                op_hcompute_conv_stencil(0, c3, c5, c6);
          }
        }
      }
      for (int c3 = 12; c3 <= 17; c3 += 1) {
        if (c1 <= 1 && c2 == 1) {
          for (int c5 = 8; c5 <= 14; c5 += 1) {
            if (c5 >= 9) {
              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, c1, 1, 3, c5 - 9, c6);
                  if (c5 <= 12)
                    op_hcompute_conv_stencil_7(0, c0, c1, 1, 3, c5 - 8, c6);
                }
              } else if (c3 >= c5 + 7) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, c1, 1, c3 - 14, c5 - 9, c6);
                  op_hcompute_conv_stencil_7(0, c0, c1, 1, c3 - 14, c5 - 8, c6);
                  if (c3 == 16 && c5 == 9) {
                    op_hcompute_conv_stencil_5(0, c0, c1, 1, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, c1, 1, 3, 1, c6);
                  }
                }
              }
              if (c3 == 17 && c5 >= 10) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_9(0, c0, c1, 1, 3, c5 - 10, c6 - 2);
                  if (c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, c1, 1, 3, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, c1, 1, 3, c5 - 8, c6);
                  }
                }
              } else if (c3 >= 16 && c5 == 9) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, c1, 1, c3 - 14, 0, c6);
                  op_hcompute_conv_stencil_7(0, c0, c1, 1, c3 - 14, 1, c6);
                  if (c3 == 16) {
                    op_hcompute_conv_stencil_5(0, c0, c1, 1, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, c1, 1, 3, 1, c6);
                  }
                }
              } else {
                for (int c6 = 0; c6 <= 4; c6 += 1) {
                  if (c3 <= 15 && c5 >= 10)
                    op_hcompute_conv_stencil_3(0, c0, c1, 1, c3 - 12, c5 - 10, c6);
                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
                    op_hcompute_conv_stencil_9(0, c0, c1, 1, c3 - 14, c5 - 10, c6 - 2);
                  if (c3 >= 14 && c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, c1, 1, c3 - 14, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, c1, 1, c3 - 14, c5 - 8, c6);
                  }
                  if (c3 >= 13 && c5 <= 13) {
                    op_hcompute_conv_stencil_5(0, c0, c1, 1, c3 - 13, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_4(0, c0, c1, 1, c3 - 13, c5 - 8, c6);
                  }
                  if (c3 <= 15 && c5 <= 12)
                    op_hcompute_conv_stencil_1(0, c0, c1, 1, c3 - 12, c5 - 8, c6);
                  if (c3 >= 13 && c5 >= 10)
                    op_hcompute_conv_stencil_6(0, c0, c1, 1, c3 - 13, c5 - 10, c6);
                  if (c3 <= 15 && c5 <= 13)
                    op_hcompute_conv_stencil_2(0, c0, c1, 1, c3 - 12, c5 - 9, c6);
                }
              }
              if (c3 >= 14 && c5 >= 10)
                for (int c6 = 5; c6 <= 6; c6 += 1)
                  op_hcompute_conv_stencil_9(0, c0, c1, 1, c3 - 14, c5 - 10, c6 - 2);
            } else {
              for (int c6 = 0; c6 <= 4; c6 += 1) {
                if (c3 >= 14)
                  op_hcompute_conv_stencil_7(0, c0, c1, 1, c3 - 14, 0, c6);
                if (c3 >= 13 && c3 <= 16)
                  op_hcompute_conv_stencil_4(0, c0, c1, 1, c3 - 13, 0, c6);
                if (c3 <= 15)
                  op_hcompute_conv_stencil_1(0, c0, c1, 1, c3 - 12, 0, c6);
              }
            }
          }
        } else if (c1 >= 1 && c2 == 0) {
          for (int c5 = 8; c5 <= 14; c5 += 1) {
            if (c5 >= 9) {
              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, c1, 0, 3, c5 - 9, c6);
                  if (c5 <= 12)
                    op_hcompute_conv_stencil_7(0, c0, c1, 0, 3, c5 - 8, c6);
                }
              } else if (c3 >= c5 + 7) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, c1, 0, c3 - 14, c5 - 9, c6);
                  op_hcompute_conv_stencil_7(0, c0, c1, 0, c3 - 14, c5 - 8, c6);
                  if (c3 == 16 && c5 == 9) {
                    op_hcompute_conv_stencil_5(0, c0, c1, 0, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, c1, 0, 3, 1, c6);
                  }
                }
              }
              if (c3 == 17 && c5 >= 10) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_9(0, c0, c1, 0, 3, c5 - 10, c6 - 2);
                  if (c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, c1, 0, 3, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, c1, 0, 3, c5 - 8, c6);
                  }
                }
              } else if (c3 >= 16 && c5 == 9) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, c1, 0, c3 - 14, 0, c6);
                  op_hcompute_conv_stencil_7(0, c0, c1, 0, c3 - 14, 1, c6);
                  if (c3 == 16) {
                    op_hcompute_conv_stencil_5(0, c0, c1, 0, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, c1, 0, 3, 1, c6);
                  }
                }
              } else {
                for (int c6 = 0; c6 <= 4; c6 += 1) {
                  if (c3 <= 15 && c5 >= 10)
                    op_hcompute_conv_stencil_3(0, c0, c1, 0, c3 - 12, c5 - 10, c6);
                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
                    op_hcompute_conv_stencil_9(0, c0, c1, 0, c3 - 14, c5 - 10, c6 - 2);
                  if (c3 >= 14 && c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, c1, 0, c3 - 14, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, c1, 0, c3 - 14, c5 - 8, c6);
                  }
                  if (c3 >= 13 && c5 <= 13) {
                    op_hcompute_conv_stencil_5(0, c0, c1, 0, c3 - 13, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_4(0, c0, c1, 0, c3 - 13, c5 - 8, c6);
                  }
                  if (c3 <= 15 && c5 <= 12)
                    op_hcompute_conv_stencil_1(0, c0, c1, 0, c3 - 12, c5 - 8, c6);
                  if (c3 >= 13 && c5 >= 10)
                    op_hcompute_conv_stencil_6(0, c0, c1, 0, c3 - 13, c5 - 10, c6);
                  if (c3 <= 15 && c5 <= 13)
                    op_hcompute_conv_stencil_2(0, c0, c1, 0, c3 - 12, c5 - 9, c6);
                }
              }
              if (c3 >= 14 && c5 >= 10)
                for (int c6 = 5; c6 <= 6; c6 += 1)
                  op_hcompute_conv_stencil_9(0, c0, c1, 0, c3 - 14, c5 - 10, c6 - 2);
            } else {
              for (int c6 = 0; c6 <= 4; c6 += 1) {
                if (c3 >= 14)
                  op_hcompute_conv_stencil_7(0, c0, c1, 0, c3 - 14, 0, c6);
                if (c3 >= 13 && c3 <= 16)
                  op_hcompute_conv_stencil_4(0, c0, c1, 0, c3 - 13, 0, c6);
                if (c3 <= 15)
                  op_hcompute_conv_stencil_1(0, c0, c1, 0, c3 - 12, 0, c6);
              }
            }
          }
        } else if (c0 <= 1 && c1 == 2 && c2 == 1) {
          for (int c5 = 8; c5 <= 14; c5 += 1) {
            if (c5 >= 9) {
              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, 2, 1, 3, c5 - 9, c6);
                  if (c5 <= 12)
                    op_hcompute_conv_stencil_7(0, c0, 2, 1, 3, c5 - 8, c6);
                }
              } else if (c3 >= c5 + 7) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, 2, 1, c3 - 14, c5 - 9, c6);
                  op_hcompute_conv_stencil_7(0, c0, 2, 1, c3 - 14, c5 - 8, c6);
                  if (c3 == 16 && c5 == 9) {
                    op_hcompute_conv_stencil_5(0, c0, 2, 1, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, 2, 1, 3, 1, c6);
                  }
                }
              }
              if (c3 == 17 && c5 >= 10) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_9(0, c0, 2, 1, 3, c5 - 10, c6 - 2);
                  if (c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, 2, 1, 3, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, 2, 1, 3, c5 - 8, c6);
                  }
                }
              } else if (c3 >= 16 && c5 == 9) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, 2, 1, c3 - 14, 0, c6);
                  op_hcompute_conv_stencil_7(0, c0, 2, 1, c3 - 14, 1, c6);
                  if (c3 == 16) {
                    op_hcompute_conv_stencil_5(0, c0, 2, 1, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, 2, 1, 3, 1, c6);
                  }
                }
              } else {
                for (int c6 = 0; c6 <= 4; c6 += 1) {
                  if (c3 <= 15 && c5 >= 10)
                    op_hcompute_conv_stencil_3(0, c0, 2, 1, c3 - 12, c5 - 10, c6);
                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
                    op_hcompute_conv_stencil_9(0, c0, 2, 1, c3 - 14, c5 - 10, c6 - 2);
                  if (c3 >= 14 && c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, 2, 1, c3 - 14, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, 2, 1, c3 - 14, c5 - 8, c6);
                  }
                  if (c3 >= 13 && c5 <= 13) {
                    op_hcompute_conv_stencil_5(0, c0, 2, 1, c3 - 13, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_4(0, c0, 2, 1, c3 - 13, c5 - 8, c6);
                  }
                  if (c3 <= 15 && c5 <= 12)
                    op_hcompute_conv_stencil_1(0, c0, 2, 1, c3 - 12, c5 - 8, c6);
                  if (c3 >= 13 && c5 >= 10)
                    op_hcompute_conv_stencil_6(0, c0, 2, 1, c3 - 13, c5 - 10, c6);
                  if (c3 <= 15 && c5 <= 13)
                    op_hcompute_conv_stencil_2(0, c0, 2, 1, c3 - 12, c5 - 9, c6);
                }
              }
              if (c3 >= 14 && c5 >= 10)
                for (int c6 = 5; c6 <= 6; c6 += 1)
                  op_hcompute_conv_stencil_9(0, c0, 2, 1, c3 - 14, c5 - 10, c6 - 2);
            } else {
              for (int c6 = 0; c6 <= 4; c6 += 1) {
                if (c3 >= 14)
                  op_hcompute_conv_stencil_7(0, c0, 2, 1, c3 - 14, 0, c6);
                if (c3 >= 13 && c3 <= 16)
                  op_hcompute_conv_stencil_4(0, c0, 2, 1, c3 - 13, 0, c6);
                if (c3 <= 15)
                  op_hcompute_conv_stencil_1(0, c0, 2, 1, c3 - 12, 0, c6);
              }
            }
          }
        } else if (c0 >= 1 && c1 == 0 && c2 == 0) {
          for (int c5 = 8; c5 <= 14; c5 += 1) {
            if (c5 >= 9) {
              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, 0, 0, 3, c5 - 9, c6);
                  if (c5 <= 12)
                    op_hcompute_conv_stencil_7(0, c0, 0, 0, 3, c5 - 8, c6);
                }
              } else if (c3 >= c5 + 7) {
                for (int c6 = 0; c6 <= 1; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, 0, 0, c3 - 14, c5 - 9, c6);
                  op_hcompute_conv_stencil_7(0, c0, 0, 0, c3 - 14, c5 - 8, c6);
                  if (c3 == 16 && c5 == 9) {
                    op_hcompute_conv_stencil_5(0, c0, 0, 0, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, 0, 0, 3, 1, c6);
                  }
                }
              }
              if (c3 == 17 && c5 >= 10) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_9(0, c0, 0, 0, 3, c5 - 10, c6 - 2);
                  if (c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, 0, 0, 3, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, 0, 0, 3, c5 - 8, c6);
                  }
                }
              } else if (c3 >= 16 && c5 == 9) {
                for (int c6 = 2; c6 <= 4; c6 += 1) {
                  op_hcompute_conv_stencil_8(0, c0, 0, 0, c3 - 14, 0, c6);
                  op_hcompute_conv_stencil_7(0, c0, 0, 0, c3 - 14, 1, c6);
                  if (c3 == 16) {
                    op_hcompute_conv_stencil_5(0, c0, 0, 0, 3, 0, c6);
                    op_hcompute_conv_stencil_4(0, c0, 0, 0, 3, 1, c6);
                  }
                }
              } else {
                for (int c6 = 0; c6 <= 4; c6 += 1) {
                  if (c3 <= 15 && c5 >= 10)
                    op_hcompute_conv_stencil_3(0, c0, 0, 0, c3 - 12, c5 - 10, c6);
                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
                    op_hcompute_conv_stencil_9(0, c0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
                  if (c3 >= 14 && c5 <= 13) {
                    op_hcompute_conv_stencil_8(0, c0, 0, 0, c3 - 14, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_7(0, c0, 0, 0, c3 - 14, c5 - 8, c6);
                  }
                  if (c3 >= 13 && c5 <= 13) {
                    op_hcompute_conv_stencil_5(0, c0, 0, 0, c3 - 13, c5 - 9, c6);
                    if (c5 <= 12)
                      op_hcompute_conv_stencil_4(0, c0, 0, 0, c3 - 13, c5 - 8, c6);
                  }
                  if (c3 <= 15 && c5 <= 12)
                    op_hcompute_conv_stencil_1(0, c0, 0, 0, c3 - 12, c5 - 8, c6);
                  if (c3 >= 13 && c5 >= 10)
                    op_hcompute_conv_stencil_6(0, c0, 0, 0, c3 - 13, c5 - 10, c6);
                  if (c3 <= 15 && c5 <= 13)
                    op_hcompute_conv_stencil_2(0, c0, 0, 0, c3 - 12, c5 - 9, c6);
                }
              }
              if (c3 >= 14 && c5 >= 10)
                for (int c6 = 5; c6 <= 6; c6 += 1)
                  op_hcompute_conv_stencil_9(0, c0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
            } else {
              for (int c6 = 0; c6 <= 4; c6 += 1) {
                if (c3 >= 14)
                  op_hcompute_conv_stencil_7(0, c0, 0, 0, c3 - 14, 0, c6);
                if (c3 >= 13 && c3 <= 16)
                  op_hcompute_conv_stencil_4(0, c0, 0, 0, c3 - 13, 0, c6);
                if (c3 <= 15)
                  op_hcompute_conv_stencil_1(0, c0, 0, 0, c3 - 12, 0, c6);
              }
            }
          }
        } else if (c0 == 2 && c1 == 2 && c2 == 1 && c3 >= 14) {
          for (int c5 = 8; c5 <= 21; c5 += 1)
            for (int c6 = 0; c6 <= 13; c6 += 1) {
              if (c3 <= 15 && c5 >= 10 && c5 <= 14 && c6 <= 4)
                op_hcompute_conv_stencil_3(0, 2, 2, 1, c3 - 12, c5 - 10, c6);
              if (c5 >= 10 && c5 <= 14 && c6 >= 2 && c6 <= 6)
                op_hcompute_conv_stencil_9(0, 2, 2, 1, c3 - 14, c5 - 10, c6 - 2);
              op_hcompute_hw_output_stencil(0, c3 - 14, c5 - 8, c6);
              if (c5 >= 9 && c5 <= 13 && c6 <= 4)
                op_hcompute_conv_stencil_8(0, 2, 2, 1, c3 - 14, c5 - 9, c6);
              if (c5 <= 12 && c6 <= 4)
                op_hcompute_conv_stencil_7(0, 2, 2, 1, c3 - 14, c5 - 8, c6);
              if (c3 <= 16 && c5 >= 9 && c5 <= 13 && c6 <= 4)
                op_hcompute_conv_stencil_5(0, 2, 2, 1, c3 - 13, c5 - 9, c6);
              if (c3 <= 16 && c5 <= 12 && c6 <= 4) {
                op_hcompute_conv_stencil_4(0, 2, 2, 1, c3 - 13, c5 - 8, c6);
                if (c3 <= 15)
                  op_hcompute_conv_stencil_1(0, 2, 2, 1, c3 - 12, c5 - 8, c6);
              }
              if (c3 <= 16 && c5 >= 10 && c5 <= 14 && c6 <= 4)
                op_hcompute_conv_stencil_6(0, 2, 2, 1, c3 - 13, c5 - 10, c6);
              if (c3 <= 15 && c5 >= 9 && c5 <= 13 && c6 <= 4)
                op_hcompute_conv_stencil_2(0, 2, 2, 1, c3 - 12, c5 - 9, c6);
            }
        } else if (c0 == 2 && c1 == 2 && c2 == 1 && c3 <= 13) {
          for (int c5 = 8; c5 <= 14; c5 += 1)
            for (int c6 = 0; c6 <= 4; c6 += 1) {
              if (c5 >= 10)
                op_hcompute_conv_stencil_3(0, 2, 2, 1, c3 - 12, c5 - 10, c6);
              if (c3 == 13 && c5 >= 9 && c5 <= 13)
                op_hcompute_conv_stencil_5(0, 2, 2, 1, 0, c5 - 9, c6);
              if (c3 == 13 && c5 <= 12)
                op_hcompute_conv_stencil_4(0, 2, 2, 1, 0, c5 - 8, c6);
              if (c5 <= 12)
                op_hcompute_conv_stencil_1(0, 2, 2, 1, c3 - 12, c5 - 8, c6);
              if (c3 == 13 && c5 >= 10)
                op_hcompute_conv_stencil_6(0, 2, 2, 1, 0, c5 - 10, c6);
              if (c5 >= 9 && c5 <= 13)
                op_hcompute_conv_stencil_2(0, 2, 2, 1, c3 - 12, c5 - 9, c6);
            }
        } else if (c3 >= 16) {
          for (int c5 = 8; c5 <= 14; c5 += 1) {
            if (c3 == 17 && c5 == 14) {
              for (int c6 = 2; c6 <= 4; c6 += 1)
                op_hcompute_conv_stencil_9(0, 0, 0, 0, 3, 4, c6 - 2);
            } else {
              for (int c6 = 0; c6 <= 4; c6 += 1) {
                if (c5 >= 10 && c6 >= 2)
                  op_hcompute_conv_stencil_9(0, 0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
                if (c5 >= 9 && c5 <= 13)
                  op_hcompute_conv_stencil_8(0, 0, 0, 0, c3 - 14, c5 - 9, c6);
                if (c5 <= 12)
                  op_hcompute_conv_stencil_7(0, 0, 0, 0, c3 - 14, c5 - 8, c6);
                if (c3 == 16 && c5 >= 9 && c5 <= 13)
                  op_hcompute_conv_stencil_5(0, 0, 0, 0, 3, c5 - 9, c6);
                if (c3 == 16 && c5 <= 12)
                  op_hcompute_conv_stencil_4(0, 0, 0, 0, 3, c5 - 8, c6);
                if (c3 == 16 && c5 >= 10)
                  op_hcompute_conv_stencil_6(0, 0, 0, 0, 3, c5 - 10, c6);
              }
            }
            if (c5 >= 10)
              for (int c6 = 5; c6 <= 6; c6 += 1)
                op_hcompute_conv_stencil_9(0, 0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
          }
        } else {
          for (int c5 = 0; c5 <= 15; c5 += 1) {
            for (int c6 = 0; c6 <= 1; c6 += 1) {
              if (c5 >= 10 && c5 <= 14)
                op_hcompute_conv_stencil_3(0, 0, 0, 0, c3 - 12, c5 - 10, c6);
              if (c3 >= 14 && c5 >= 9 && c5 <= 13)
                op_hcompute_conv_stencil_8(0, 0, 0, 0, c3 - 14, c5 - 9, c6);
              if (c3 >= 14 && c5 >= 8 && c5 <= 12)
                op_hcompute_conv_stencil_7(0, 0, 0, 0, c3 - 14, c5 - 8, c6);
              if (c3 >= 13 && c5 >= 9 && c5 <= 13)
                op_hcompute_conv_stencil_5(0, 0, 0, 0, c3 - 13, c5 - 9, c6);
              if (c3 >= 13 && c5 >= 8 && c5 <= 12)
                op_hcompute_conv_stencil_4(0, 0, 0, 0, c3 - 13, c5 - 8, c6);
              op_hcompute_hw_input_stencil(0, c3, c5, c6);
              if (c5 >= 8 && c5 <= 12)
                op_hcompute_conv_stencil_1(0, 0, 0, 0, c3 - 12, c5 - 8, c6);
              if (c3 <= 13 && c5 <= 13)
                op_hcompute_conv_stencil(0, c3, c5, c6);
              if (c3 >= 13 && c5 >= 10 && c5 <= 14)
                op_hcompute_conv_stencil_6(0, 0, 0, 0, c3 - 13, c5 - 10, c6);
              if (c5 >= 9 && c5 <= 13)
                op_hcompute_conv_stencil_2(0, 0, 0, 0, c3 - 12, c5 - 9, c6);
            }
            if (c3 >= 14 && c5 >= 8 && c5 <= 9) {
              for (int c6 = 2; c6 <= 4; c6 += 1) {
                if (c5 == 9)
                  op_hcompute_conv_stencil_8(0, 0, 0, 0, c3 - 14, 0, c6);
                op_hcompute_conv_stencil_7(0, 0, 0, 0, c3 - 14, c5 - 8, c6);
                if (c5 == 9)
                  op_hcompute_conv_stencil_5(0, 0, 0, 0, c3 - 13, 0, c6);
                op_hcompute_conv_stencil_4(0, 0, 0, 0, c3 - 13, c5 - 8, c6);
                op_hcompute_conv_stencil_1(0, 0, 0, 0, c3 - 12, c5 - 8, c6);
                if (c5 == 9)
                  op_hcompute_conv_stencil_2(0, 0, 0, 0, c3 - 12, 0, c6);
              }
            } else if (c3 <= 13 && c5 <= 13) {
              for (int c6 = 2; c6 <= 3; c6 += 1) {
                if (c5 >= 10)
                  op_hcompute_conv_stencil_3(0, 0, 0, 0, c3 - 12, c5 - 10, c6);
                if (c3 == 13 && c5 >= 9)
                  op_hcompute_conv_stencil_5(0, 0, 0, 0, 0, c5 - 9, c6);
                if (c3 == 13 && c5 >= 8 && c5 <= 12)
                  op_hcompute_conv_stencil_4(0, 0, 0, 0, 0, c5 - 8, c6);
                if (c5 >= 8 && c5 <= 12)
                  op_hcompute_conv_stencil_1(0, 0, 0, 0, c3 - 12, c5 - 8, c6);
                op_hcompute_conv_stencil(0, c3, c5, c6);
                if (c3 == 13 && c5 >= 10)
                  op_hcompute_conv_stencil_6(0, 0, 0, 0, 0, c5 - 10, c6);
                if (c5 >= 9)
                  op_hcompute_conv_stencil_2(0, 0, 0, 0, c3 - 12, c5 - 9, c6);
              }
              if (c5 >= 8) {
                if (c5 >= 10)
                  op_hcompute_conv_stencil_3(0, 0, 0, 0, c3 - 12, c5 - 10, 4);
                if (c3 == 13 && c5 >= 9)
                  op_hcompute_conv_stencil_5(0, 0, 0, 0, 0, c5 - 9, 4);
                if (c3 == 13 && c5 <= 12)
                  op_hcompute_conv_stencil_4(0, 0, 0, 0, 0, c5 - 8, 4);
                if (c5 <= 12)
                  op_hcompute_conv_stencil_1(0, 0, 0, 0, c3 - 12, c5 - 8, 4);
                if (c3 == 13 && c5 >= 10)
                  op_hcompute_conv_stencil_6(0, 0, 0, 0, 0, c5 - 10, 4);
                if (c5 >= 9)
                  op_hcompute_conv_stencil_2(0, 0, 0, 0, c3 - 12, c5 - 9, 4);
              }
            } else if (c3 <= 13 && c5 == 14) {
              for (int c6 = 2; c6 <= 4; c6 += 1) {
                op_hcompute_conv_stencil_3(0, 0, 0, 0, c3 - 12, 4, c6);
                if (c3 == 13)
                  op_hcompute_conv_stencil_6(0, 0, 0, 0, 0, 4, c6);
              }
            } else if (c3 >= 14 && c5 >= 10 && c5 <= 14) {
              for (int c6 = 2; c6 <= 6; c6 += 1) {
                if (c6 <= 4)
                  op_hcompute_conv_stencil_3(0, 0, 0, 0, c3 - 12, c5 - 10, c6);
                op_hcompute_conv_stencil_9(0, 0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
                if (c5 <= 13 && c6 <= 4) {
                  op_hcompute_conv_stencil_8(0, 0, 0, 0, c3 - 14, c5 - 9, c6);
                  if (c5 <= 12)
                    op_hcompute_conv_stencil_7(0, 0, 0, 0, c3 - 14, c5 - 8, c6);
                  op_hcompute_conv_stencil_5(0, 0, 0, 0, c3 - 13, c5 - 9, c6);
                  if (c5 <= 12) {
                    op_hcompute_conv_stencil_4(0, 0, 0, 0, c3 - 13, c5 - 8, c6);
                    op_hcompute_conv_stencil_1(0, 0, 0, 0, c3 - 12, c5 - 8, c6);
                  }
                }
                if (c6 <= 4) {
                  op_hcompute_conv_stencil_6(0, 0, 0, 0, c3 - 13, c5 - 10, c6);
                  if (c5 <= 13)
                    op_hcompute_conv_stencil_2(0, 0, 0, 0, c3 - 12, c5 - 9, c6);
                }
              }
            }
          }
        }
      }
    }
    if (c0 == 0 && c1 == 0)
      for (int c3 = 2; c3 <= 4; c3 += 1)
        for (int c5 = 0; c5 <= 3; c5 += 1)
          for (int c6 = 0; c6 <= 1; c6 += 1)
            op_hcompute_hw_kernel_stencil(0, 2, c3 - 2, c5, c6);
  }

  */
	for (int c0 = 0; c0 <= 2; c0 += 1)
	  for (int c1 = 0; c1 <= 2; c1 += 1) {
	    for (int c2 = 0; c2 <= 1; c2 += 1) {
	      if (c0 == 0 && c1 == 0 && c2 == 1) {
	        for (int c3 = 2; c3 <= 4; c3 += 1)
	          for (int c5 = 0; c5 <= 3; c5 += 1)
	            for (int c6 = 0; c6 <= 1; c6 += 1)
	              op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 1, c3 - 2, c5, c6);
	      } else if (c0 == 0 && c1 == 0 && c2 == 0) {
	        for (int c3 = 0; c3 <= 11; c3 += 1) {
	          if (c3 >= 2 && c3 <= 4)
	            for (int c5 = 0; c5 <= 3; c5 += 1)
	              for (int c6 = 0; c6 <= 1; c6 += 1)
	                op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 0, c3 - 2, c5, c6);
	          for (int c5 = 0; c5 <= 15; c5 += 1) {
	            for (int c6 = 0; c6 <= 1; c6 += 1) {
	              op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5, c6);
	              if (c5 <= 13)
	                op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c6);
	            }
	            if (c5 <= 13)
	              for (int c6 = 2; c6 <= 3; c6 += 1)
	                op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c6);
	          }
	        }
	      }
	      for (int c3 = 12; c3 <= 17; c3 += 1) {
	        if (c1 <= 1 && c2 == 1) {
	          for (int c5 = 8; c5 <= 14; c5 += 1) {
	            if (c5 >= 9) {
	              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, c5 - 9, c6);
	                  if (c5 <= 12)
	                    op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, c5 - 8, c6);
	                }
	              } else if (c3 >= c5 + 7) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, c5 - 9, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, c5 - 8, c6);
	                  if (c3 == 16 && c5 == 9) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, 1, c6);
	                  }
	                }
	              }
	              if (c3 == 17 && c5 >= 10) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, c5 - 10, c6 - 2);
	                  if (c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, c5 - 8, c6);
	                  }
	                }
	              } else if (c3 >= 16 && c5 == 9) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, 0, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, 1, c6);
	                  if (c3 == 16) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, 3, 1, c6);
	                  }
	                }
	              } else {
	                for (int c6 = 0; c6 <= 4; c6 += 1) {
	                  if (c3 <= 15 && c5 >= 10)
	                    op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 12, c5 - 10, c6);
	                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
	                    op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, c5 - 10, c6 - 2);
	                  if (c3 >= 14 && c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, c5 - 8, c6);
	                  }
	                  if (c3 >= 13 && c5 <= 13) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 13, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 13, c5 - 8, c6);
	                  }
	                  if (c3 <= 15 && c5 <= 12)
	                    op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 12, c5 - 8, c6);
	                  if (c3 >= 13 && c5 >= 10)
	                    op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 13, c5 - 10, c6);
	                  if (c3 <= 15 && c5 <= 13)
	                    op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 12, c5 - 9, c6);
	                }
	              }
	              if (c3 >= 14 && c5 >= 10)
	                for (int c6 = 5; c6 <= 6; c6 += 1)
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, c5 - 10, c6 - 2);
	            } else {
	              for (int c6 = 0; c6 <= 4; c6 += 1) {
	                if (c3 >= 14)
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 14, 0, c6);
	                if (c3 >= 13 && c3 <= 16)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 13, 0, c6);
	                if (c3 <= 15)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 1, c3 - 12, 0, c6);
	              }
	            }
	          }
	        } else if (c1 >= 1 && c2 == 0) {
	          for (int c5 = 8; c5 <= 14; c5 += 1) {
	            if (c5 >= 9) {
	              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, c5 - 9, c6);
	                  if (c5 <= 12)
	                    op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, c5 - 8, c6);
	                }
	              } else if (c3 >= c5 + 7) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, c5 - 9, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, c5 - 8, c6);
	                  if (c3 == 16 && c5 == 9) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, 1, c6);
	                  }
	                }
	              }
	              if (c3 == 17 && c5 >= 10) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, c5 - 10, c6 - 2);
	                  if (c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, c5 - 8, c6);
	                  }
	                }
	              } else if (c3 >= 16 && c5 == 9) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, 0, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, 1, c6);
	                  if (c3 == 16) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, 3, 1, c6);
	                  }
	                }
	              } else {
	                for (int c6 = 0; c6 <= 4; c6 += 1) {
	                  if (c3 <= 15 && c5 >= 10)
	                    op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 12, c5 - 10, c6);
	                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
	                    op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, c5 - 10, c6 - 2);
	                  if (c3 >= 14 && c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, c5 - 8, c6);
	                  }
	                  if (c3 >= 13 && c5 <= 13) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 13, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 13, c5 - 8, c6);
	                  }
	                  if (c3 <= 15 && c5 <= 12)
	                    op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 12, c5 - 8, c6);
	                  if (c3 >= 13 && c5 >= 10)
	                    op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 13, c5 - 10, c6);
	                  if (c3 <= 15 && c5 <= 13)
	                    op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 12, c5 - 9, c6);
	                }
	              }
	              if (c3 >= 14 && c5 >= 10)
	                for (int c6 = 5; c6 <= 6; c6 += 1)
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, c5 - 10, c6 - 2);
	            } else {
	              for (int c6 = 0; c6 <= 4; c6 += 1) {
	                if (c3 >= 14)
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 14, 0, c6);
	                if (c3 >= 13 && c3 <= 16)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 13, 0, c6);
	                if (c3 <= 15)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, c1, 0, c3 - 12, 0, c6);
	              }
	            }
	          }
	        } else if (c0 <= 1 && c1 == 2 && c2 == 1) {
	          for (int c5 = 8; c5 <= 14; c5 += 1) {
	            if (c5 >= 9) {
	              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, c5 - 9, c6);
	                  if (c5 <= 12)
	                    op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, c5 - 8, c6);
	                }
	              } else if (c3 >= c5 + 7) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, c5 - 9, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, c5 - 8, c6);
	                  if (c3 == 16 && c5 == 9) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, 1, c6);
	                  }
	                }
	              }
	              if (c3 == 17 && c5 >= 10) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, c5 - 10, c6 - 2);
	                  if (c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, c5 - 8, c6);
	                  }
	                }
	              } else if (c3 >= 16 && c5 == 9) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, 0, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, 1, c6);
	                  if (c3 == 16) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, 3, 1, c6);
	                  }
	                }
	              } else {
	                for (int c6 = 0; c6 <= 4; c6 += 1) {
	                  if (c3 <= 15 && c5 >= 10)
	                    op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 12, c5 - 10, c6);
	                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
	                    op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, c5 - 10, c6 - 2);
	                  if (c3 >= 14 && c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, c5 - 8, c6);
	                  }
	                  if (c3 >= 13 && c5 <= 13) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 13, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 13, c5 - 8, c6);
	                  }
	                  if (c3 <= 15 && c5 <= 12)
	                    op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 12, c5 - 8, c6);
	                  if (c3 >= 13 && c5 >= 10)
	                    op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 13, c5 - 10, c6);
	                  if (c3 <= 15 && c5 <= 13)
	                    op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 12, c5 - 9, c6);
	                }
	              }
	              if (c3 >= 14 && c5 >= 10)
	                for (int c6 = 5; c6 <= 6; c6 += 1)
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, c5 - 10, c6 - 2);
	            } else {
	              for (int c6 = 0; c6 <= 4; c6 += 1) {
	                if (c3 >= 14)
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 14, 0, c6);
	                if (c3 >= 13 && c3 <= 16)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 13, 0, c6);
	                if (c3 <= 15)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 2, 1, c3 - 12, 0, c6);
	              }
	            }
	          }
	        } else if (c0 >= 1 && c1 == 0 && c2 == 0) {
	          for (int c5 = 8; c5 <= 14; c5 += 1) {
	            if (c5 >= 9) {
	              if (c3 == 17 && c5 >= 11 && c5 <= 13) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, c5 - 9, c6);
	                  if (c5 <= 12)
	                    op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, c5 - 8, c6);
	                }
	              } else if (c3 >= c5 + 7) {
	                for (int c6 = 0; c6 <= 1; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, c5 - 9, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, c5 - 8, c6);
	                  if (c3 == 16 && c5 == 9) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, 1, c6);
	                  }
	                }
	              }
	              if (c3 == 17 && c5 >= 10) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, c5 - 10, c6 - 2);
	                  if (c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, c5 - 8, c6);
	                  }
	                }
	              } else if (c3 >= 16 && c5 == 9) {
	                for (int c6 = 2; c6 <= 4; c6 += 1) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, 0, c6);
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, 1, c6);
	                  if (c3 == 16) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, 0, c6);
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, 3, 1, c6);
	                  }
	                }
	              } else {
	                for (int c6 = 0; c6 <= 4; c6 += 1) {
	                  if (c3 <= 15 && c5 >= 10)
	                    op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 12, c5 - 10, c6);
	                  if (c3 >= 14 && c5 >= 10 && c6 >= 2)
	                    op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
	                  if (c3 >= 14 && c5 <= 13) {
	                    op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, c5 - 8, c6);
	                  }
	                  if (c3 >= 13 && c5 <= 13) {
	                    op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 13, c5 - 9, c6);
	                    if (c5 <= 12)
	                      op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 13, c5 - 8, c6);
	                  }
	                  if (c3 <= 15 && c5 <= 12)
	                    op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 12, c5 - 8, c6);
	                  if (c3 >= 13 && c5 >= 10)
	                    op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 13, c5 - 10, c6);
	                  if (c3 <= 15 && c5 <= 13)
	                    op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 12, c5 - 9, c6);
	                }
	              }
	              if (c3 >= 14 && c5 >= 10)
	                for (int c6 = 5; c6 <= 6; c6 += 1)
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
	            } else {
	              for (int c6 = 0; c6 <= 4; c6 += 1) {
	                if (c3 >= 14)
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 14, 0, c6);
	                if (c3 >= 13 && c3 <= 16)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 13, 0, c6);
	                if (c3 <= 15)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0, 0, 0, c3 - 12, 0, c6);
	              }
	            }
	          }
	        } else if (c0 == 2 && c1 == 2 && c2 == 1 && c3 >= 14) {
	          for (int c5 = 8; c5 <= 21; c5 += 1)
	            for (int c6 = 0; c6 <= 13; c6 += 1) {
	              if (c3 <= 15 && c5 >= 10 && c5 <= 14 && c6 <= 4)
	                op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 12, c5 - 10, c6);
	              if (c5 >= 10 && c5 <= 14 && c6 >= 2 && c6 <= 6)
	                op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 14, c5 - 10, c6 - 2);
	              op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c3 - 14, c5 - 8, c6);
	              if (c5 >= 9 && c5 <= 13 && c6 <= 4)
	                op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 14, c5 - 9, c6);
	              if (c5 <= 12 && c6 <= 4)
	                op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 14, c5 - 8, c6);
	              if (c3 <= 16 && c5 >= 9 && c5 <= 13 && c6 <= 4)
	                op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 13, c5 - 9, c6);
	              if (c3 <= 16 && c5 <= 12 && c6 <= 4) {
	                op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 13, c5 - 8, c6);
	                if (c3 <= 15)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 12, c5 - 8, c6);
	              }
	              if (c3 <= 16 && c5 >= 10 && c5 <= 14 && c6 <= 4)
	                op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 13, c5 - 10, c6);
	              if (c3 <= 15 && c5 >= 9 && c5 <= 13 && c6 <= 4)
	                op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 12, c5 - 9, c6);
	            }
	        } else if (c0 == 2 && c1 == 2 && c2 == 1 && c3 <= 13) {
	          for (int c5 = 8; c5 <= 14; c5 += 1)
	            for (int c6 = 0; c6 <= 4; c6 += 1) {
	              if (c5 >= 10)
	                op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 12, c5 - 10, c6);
	              if (c3 == 13 && c5 >= 9 && c5 <= 13)
	                op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, 0, c5 - 9, c6);
	              if (c3 == 13 && c5 <= 12)
	                op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, 0, c5 - 8, c6);
	              if (c5 <= 12)
	                op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 12, c5 - 8, c6);
	              if (c3 == 13 && c5 >= 10)
	                op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, 0, c5 - 10, c6);
	              if (c5 >= 9 && c5 <= 13)
	                op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 2, 2, 1, c3 - 12, c5 - 9, c6);
	            }
	        } else if (c3 >= 16) {
	          for (int c5 = 8; c5 <= 14; c5 += 1) {
	            if (c3 == 17 && c5 == 14) {
	              for (int c6 = 2; c6 <= 4; c6 += 1)
	                op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 3, 4, c6 - 2);
	            } else {
	              for (int c6 = 0; c6 <= 4; c6 += 1) {
	                if (c5 >= 10 && c6 >= 2)
	                  op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
	                if (c5 >= 9 && c5 <= 13)
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 9, c6);
	                if (c5 <= 12)
	                  op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 8, c6);
	                if (c3 == 16 && c5 >= 9 && c5 <= 13)
	                  op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 3, c5 - 9, c6);
	                if (c3 == 16 && c5 <= 12)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 3, c5 - 8, c6);
	                if (c3 == 16 && c5 >= 10)
	                  op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 3, c5 - 10, c6);
	              }
	            }
	            if (c5 >= 10)
	              for (int c6 = 5; c6 <= 6; c6 += 1)
	                op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
	          }
	        } else {
	          for (int c5 = 0; c5 <= 15; c5 += 1) {
	            for (int c6 = 0; c6 <= 1; c6 += 1) {
	              if (c5 >= 10 && c5 <= 14)
	                op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 10, c6);
	              if (c3 >= 14 && c5 >= 9 && c5 <= 13)
	                op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 9, c6);
	              if (c3 >= 14 && c5 >= 8 && c5 <= 12)
	                op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 8, c6);
	              if (c3 >= 13 && c5 >= 9 && c5 <= 13)
	                op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 9, c6);
	              if (c3 >= 13 && c5 >= 8 && c5 <= 12)
	                op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 8, c6);
	              op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5, c6);
	              if (c5 >= 8 && c5 <= 12)
	                op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 8, c6);
	              if (c3 <= 13 && c5 <= 13)
	                op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c6);
	              if (c3 >= 13 && c5 >= 10 && c5 <= 14)
	                op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 10, c6);
	              if (c5 >= 9 && c5 <= 13)
	                op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 9, c6);
	            }
	            if (c3 >= 14 && c5 >= 8 && c5 <= 9) {
	              for (int c6 = 2; c6 <= 4; c6 += 1) {
	                if (c5 == 9)
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, 0, c6);
	                op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 8, c6);
	                if (c5 == 9)
	                  op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, 0, c6);
	                op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 8, c6);
	                op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 8, c6);
	                if (c5 == 9)
	                  op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, 0, c6);
	              }
	            } else if (c3 <= 13 && c5 <= 13) {
	              for (int c6 = 2; c6 <= 3; c6 += 1) {
	                if (c5 >= 10)
	                  op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 10, c6);
	                if (c3 == 13 && c5 >= 9)
	                  op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, c5 - 9, c6);
	                if (c3 == 13 && c5 >= 8 && c5 <= 12)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, c5 - 8, c6);
	                if (c5 >= 8 && c5 <= 12)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 8, c6);
	                op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c6);
	                if (c3 == 13 && c5 >= 10)
	                  op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, c5 - 10, c6);
	                if (c5 >= 9)
	                  op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 9, c6);
	              }
	              if (c5 >= 8) {
	                if (c5 >= 10)
	                  op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 10, 4);
	                if (c3 == 13 && c5 >= 9)
	                  op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, c5 - 9, 4);
	                if (c3 == 13 && c5 <= 12)
	                  op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, c5 - 8, 4);
	                if (c5 <= 12)
	                  op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 8, 4);
	                if (c3 == 13 && c5 >= 10)
	                  op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, c5 - 10, 4);
	                if (c5 >= 9)
	                  op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 9, 4);
	              }
	            } else if (c3 <= 13 && c5 == 14) {
	              for (int c6 = 2; c6 <= 4; c6 += 1) {
	                op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, 4, c6);
	                if (c3 == 13)
	                  op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, 0, 4, c6);
	              }
	            } else if (c3 >= 14 && c5 >= 10 && c5 <= 14) {
	              for (int c6 = 2; c6 <= 6; c6 += 1) {
	                if (c6 <= 4)
	                  op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 10, c6);
	                op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 10, c6 - 2);
	                if (c5 <= 13 && c6 <= 4) {
	                  op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 9, c6);
	                  if (c5 <= 12)
	                    op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 14, c5 - 8, c6);
	                  op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 9, c6);
	                  if (c5 <= 12) {
	                    op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 8, c6);
	                    op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 8, c6);
	                  }
	                }
	                if (c6 <= 4) {
	                  op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 13, c5 - 10, c6);
	                  if (c5 <= 13)
	                    op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, 0, 0, 0, c3 - 12, c5 - 9, c6);
	                }
	              }
	            }
	          }
	        }
	      }
	    }
	    if (c0 == 0 && c1 == 0)
	      for (int c3 = 2; c3 <= 4; c3 += 1)
	        for (int c5 = 0; c5 <= 3; c5 += 1)
	          for (int c6 = 0; c6 <= 1; c6 += 1)
	            op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 2, c3 - 2, c5, c6);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
const int op_hcompute_hw_output_stencil_write_num_transfers = 784;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> input_copy_stencil[hw_input_s0_z, hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
const int op_hcompute_hw_input_stencil_read_num_transfers = 512;
  // { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> kernel_copy_stencil[hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
const int op_hcompute_hw_kernel_stencil_read_num_transfers = 72;


extern "C" {

static void read_op_hcompute_hw_input_stencil_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = op_hcompute_hw_input_stencil_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void read_op_hcompute_hw_kernel_stencil_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = op_hcompute_hw_kernel_stencil_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_op_hcompute_hw_output_stencil_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = op_hcompute_hw_output_stencil_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void conv_3_3_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read, hw_uint<16>* op_hcompute_hw_kernel_stencil_read, hw_uint<16>* op_hcompute_hw_output_stencil_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_kernel_stencil_read offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_kernel_stencil_read bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_kernel_stencil_read_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_channel;

  read_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_read, op_hcompute_hw_input_stencil_read_channel, size);
  read_op_hcompute_hw_kernel_stencil_read(op_hcompute_hw_kernel_stencil_read, op_hcompute_hw_kernel_stencil_read_channel, size);

  conv_3_3(op_hcompute_hw_input_stencil_read_channel, op_hcompute_hw_kernel_stencil_read_channel, op_hcompute_hw_output_stencil_write_channel);

  write_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_write, op_hcompute_hw_output_stencil_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

