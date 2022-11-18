module Countermux #(
  input logic [31:0]      PC,       
  input logic [11:0]      ImmOp, 
  input logic             PCscr,
  output  logic [31:0]    next_PC  
);

logic  [31:0]       branch_PC;  
logic  [31:0]       inc_PC;

assign branch_PC = PC_in + ImmOP;
assign inc_PC = PC_in + 32'b100;
assign next_PC = PCsrc ? branch_PC : inc_PC;

endmodule 


