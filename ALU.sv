module ALU #(
    parameter A_WIDTH = 32,
              D_WIDTH = 32  
)(
    // interface signals
    input logic               clk, 
    input logic               ALUsrc, 
    input logic               ALUctrl, 
    input logic               ImmOp, 
    input logic               WE3,  
    input logic [A_WIDTH-1:0] AD1, 
    input logic [A_WIDTH-1:0] AD2,
    input logic [A_WIDTH-1:0] AD3,
    output logic              EQ,
    output logic [D_WIDTH-1:0] a0
);

    logic [D_WIDTH-1:0] regOp2; 
    logic [D_WIDTH-1:0] ALUop1; 
    logic [D_WIDTH-1:0] ALUop2; 
    logic [D_WIDTH-1:0] ALUout; 

alu_ addralu (
    .ALUop1 (ALUop1),
    .ALUop2 (ALUop2),
    .EQ  (EQ),
    .ALUctrl (ALUctrl),
    .ALUout (ALUout)
);

Reg_file regfile(
    .clk (clk),
    .AD1 (AD1),
    .AD2 (AD2),
    .AD3 (AD3),
    .WE3 (WE3),
    .RD1 (ALUop1),
    .RD2 (regOp2),
    .WD3 (ALUout),
    .a0 (a0)
);

mux mux(
    .ALUsrc (ALUsrc),
    .regOp2 (regOp2),
    .ALUop2 (ALUop2),
    .ImmOp (ImmOp)
);

endmodule




