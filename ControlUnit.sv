module ControlUnit #(
    parameter   DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0]  instr,
    input  logic                   EQ,
    output logic                   RegWrite,
    output logic [2:0]             ALUctrl,
    output logic                   ALUsrc,
    output logic [DATA_WIDTH-21:0] ImmSrc,
    output logic                   PCsrc
);

logic [6:0] opcode;
logic [2:0] funct3;

assign opcode = instr[6:0];
assign funct3 = instr[14:12];

always_latch @(instr) 
    if (opcode == 7'b0010011 & funct3 == 3'b000) //add
        begin
        assign ALUctrl = 3'b000;
        assign ALUsrc = 1'b0;
        assign RegWrite = 1'b1; 
        end
    else if (opcode==7'b0010011 & funct3==3'b000 & EQ == 0) //addi
        begin  
        assign ALUctrl = 3'b000;
        assign ALUsrc = 1'b1;
        assign RegWrite = 1'b1;
        assign ImmSrc = instr[31:20];
        end
    else if (opcode == 7'b1100011 & funct3 == 3'b001 & EQ == 0) //bne
        begin
        assign ImmSrc = instr[31:20];
        assign RegWrite = 1'b0;
        if (EQ==0)
            assign  PCsrc = 1'b1;
        else
            assign PCsrc = 1'b0; 
        end

endmodule   


     

    

