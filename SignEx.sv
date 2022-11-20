module SignEx #(
    logic input [11:0] ImmSrc,
    logic input [31:0] instr,
    logic output [31:0] ImmOp
)

logic [4:0] rd;
logic [6:0] opcode;
logic [19:0] imm;

assign opcode = instr[6:0];
assign rd = instr[11:7];
assign imm = {8'ImmSrc[11],ImmSrc};

if (opcode==7'b0010011) //addi
    ImmOp <= {imm,rd,opcode};
if (opcode==7'b1100011) //bne
    ImmOp <= {ImmSrc[11],ImmSrc[9:4],instr[24:12],ImmScr[3:0],ImmScr[10],opcode};

endmodule