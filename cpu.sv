module cpu #(
    parameter D_WIDTH = 32
    //A_WIDTH = 5,
)(
    //interface signals
    input logic clk, 
    input logic rst, 
    output logic [D_WIDTH-1:0]a0
);

    //connecting wires
logic [D_WIDTH-1:0] PC; 
logic [D_WIDTH-1:0] instr; 
logic PCsrc;
logic [2:0]  ALUctrl; 
logic ALUsrc; 
logic EQ; 
logic regwrite; 
logic [11:0] Immsrc; 
logic [31:0] Immop; 
// logic [A_WIDTH-1:0] rs1;
// logic [A_WIDTH-1:0] rs2;
// logic [A_WIDTH-1:0] rd;

// assign rs1 = {instr[19:15]};
// assign rs2 = {instr[24:20]};
// assign rd = {instr[11:7]};

InstrMem memory(
    .addr (PC),
    .instr (instr)
);

SignEx immext(
    .ImmOp (Immop), 
    .ImmSrc (Immsrc),
    .instr(instr)
);

toppc pc (
    .clk (clk), 
    .rst (rst),
    .PC (PC),  
    .PCsrc (PCsrc),
    .ImmOp (Immop)
);

ControlUnit controlunit (
    .PCsrc (PCsrc), 
    .RegWrite (regwrite), 
    .ALUctrl (ALUctrl),
    .ALUsrc (ALUsrc), 
    .ImmSrc (Immsrc), 
    .EQ (EQ), 
    .instr (instr)
);

ALU alublock(
    .AD1 (instr[19:15]), 
    .AD2 (instr[24:20]), 
    .AD3 (instr[11:7]),
    .WE3 (regwrite),
    .clk (clk), 
    .EQ (EQ), 
    .ALUctrl (ALUctrl),
    .ALUsrc (ALUsrc),
    .ImmOp (Immop), 
    .a0 (a0)
);

endmodule






