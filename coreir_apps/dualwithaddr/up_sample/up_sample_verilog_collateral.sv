
module hw_input_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

endmodule

module hw_input_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_hw_input_stencil_write_wen,
	input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_hw_input_stencil_write [0:0] ,
	input op_hcompute_nearest_neighbor_stencil_read_ren,
	input [15:0] op_hcompute_nearest_neighbor_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_nearest_neighbor_stencil_read [0:0] );

  // Storage
  // # of banks: 8
  logic [15:0] bank_0 [4096];
  logic [15:0] bank_1 [4096];
  logic [15:0] bank_2 [4096];
  logic [15:0] bank_3 [4096];
  logic [15:0] bank_4 [4096];
  logic [15:0] bank_5 [4096];
  logic [15:0] bank_6 [4096];
  logic [15:0] bank_7 [4096];

  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_0 = ((((1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_1 = ((((1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))))) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_2 = (0 - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_2,hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_1,hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_0}));
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_0;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_0 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_1;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_1 = (((1*op_hcompute_hw_input_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_2;
  assign hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_2 = (0 - 0);
hw_input_stencil_bank_selector hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector(.d({hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_2,hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_1,hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_0}));


  always @(posedge clk) begin
    if (op_hcompute_hw_input_stencil_write_wen) begin
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 7) begin
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 0) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 1) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 2) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 3) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 4) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 5) begin $finish(-1); end
        if (hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_4_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((64*op_hcompute_hw_input_stencil_write_ctrl_vars[1] + 1*op_hcompute_hw_input_stencil_write_ctrl_vars[2])))] <= op_hcompute_hw_input_stencil_write[0];
      end
    end
  end
  always @(*) begin
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 0) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_0[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 1) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_1[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 2) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_2[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 3) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_3[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 4) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_4[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 5) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_5[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 6) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_6[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
      if (hw_input_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_bank_selector.out == 7) begin
    op_hcompute_nearest_neighbor_stencil_read[0] = bank_7[((((64*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1])) / 2))) + (1*$rtoi($floor(((1*op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2])) / 2))))))];
      end
  end

endmodule


module nearest_neighbor_stencil_bank_selector(input clk, input flush, input rst_n, input logic [16*3 - 1 :0] d, output logic [15:0] out);
  logic [15:0] bank_index_0;
  assign bank_index_0 = (d[0] % 2);
  logic [15:0] bank_index_1;
  assign bank_index_1 = (d[1] % 2);
  logic [15:0] bank_index_2;
  assign bank_index_2 = (d[2] % 2);
  assign out = bank_index_0*1+bank_index_1*2+bank_index_2*4;

endmodule

module nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_to_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_sr(input clk, input flush, input rst_n, input logic [15:0] in, output logic [15:0] out);
  logic [15:0] storage [0:0];

  reg [15:0] read_addr;
  reg [15:0] write_addr;
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      read_addr <= 0;
      write_addr <= 0;
    end else begin
      storage[write_addr] <= in;
      read_addr <= read_addr == 0 ? 0 : read_addr + 1;
      write_addr <= write_addr == 0 ? 0 : write_addr + 1;
    end

  end

  always @(*) begin
    out = storage[read_addr];
  end

endmodule

module nearest_neighbor_stencil_ub(
	input clk,
	input flush,
	input rst_n,
	input op_hcompute_hw_output_stencil_read_ren,
	input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0] ,
	output logic [15:0] op_hcompute_hw_output_stencil_read [0:0] ,
	input op_hcompute_nearest_neighbor_stencil_write_wen,
	input [15:0] op_hcompute_nearest_neighbor_stencil_write_ctrl_vars [2:0] ,
	input logic [15:0] op_hcompute_nearest_neighbor_stencil_write [0:0] );

  // Storage
  // # of banks: 8
  logic [15:0] bank_0 [16384];
  logic [15:0] bank_1 [16384];
  logic [15:0] bank_2 [16384];
  logic [15:0] bank_3 [16384];
  logic [15:0] bank_4 [16384];
  logic [15:0] bank_5 [16384];
  logic [15:0] bank_6 [16384];
  logic [15:0] bank_7 [16384];

  logic [15:0] nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_0;
  assign nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_0 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[2])) - 0);
  logic [15:0] nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_1;
  assign nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_1 = (((1*op_hcompute_hw_output_stencil_read_ctrl_vars[1])) - 0);
  logic [15:0] nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_2;
  assign nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_2 = (0 - 0);
nearest_neighbor_stencil_bank_selector nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_bank_selector(.d({nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_2,nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_1,nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_0}));
  logic [15:0] nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_0;
  assign nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_0 = (((1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])) - 0);
  logic [15:0] nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_1;
  assign nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_1 = (((1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1])) - 0);
  logic [15:0] nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_2;
  assign nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_2 = (0 - 0);
nearest_neighbor_stencil_bank_selector nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector(.d({nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_2,nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_1,nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_0}));

    nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_to_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_sr nearest_neighbor_stencil_op_hcompute_hw_output_stencil_3_delay(.clk(clk), .rst_n(rst_n), .flush(flush), .in(op_hcompute_nearest_neighbor_stencil_write[0]), .out(op_hcompute_hw_output_stencil_read[0]));


  always @(posedge clk) begin
    if (op_hcompute_nearest_neighbor_stencil_write_wen) begin
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_0[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_1[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_2[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_3[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_4[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_5[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin $finish(-1); end
        bank_6[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
      if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 7) begin
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 0) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 1) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 2) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 3) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 4) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 5) begin $finish(-1); end
        if (nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_0_bank_selector.out == 6) begin $finish(-1); end
        bank_7[(((128*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] + 1*op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2])))] <= op_hcompute_nearest_neighbor_stencil_write[0];
      end
    end
  end
  always @(*) begin
  end

endmodule

