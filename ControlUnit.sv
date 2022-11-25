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
//logic [6:0] funct7;

assign opcode = instr[6:0];
assign funct3 = instr[14:12];
assign funct7 = instr[31:25]; 
    
assign RegWrite = 1'b0;
assign ALUctrl = 3'b000;
assign ALUsrc = 1'b0;
assign ImmSrc = 12'b000000000000;
assign PCsrc = 1'b1;

always_comb
    case (opcode)
        7'b0010011: 
            case (funct3) //add
                3'b000: ALUctrl = 3'b000;
                        ALUsrc = 1'b0;
                        RegWrite = 1'b1;
                default: RegWrite = 1'b0;
                         ALUctrl = 3'b000;
                         ALUsrc = 1'b0;
            endcase
        7'b0010011:
            case (funct3) //addi
                3'b000: ALUctrl = 3'b000;
                        ALUsrc = 1'b0;
                        RegWrite = 1'b1;
                default: RegWrite = 1'b0;
                         ALUctrl = 3'b000;
                         ALUsrc = 1'b0;
            endcase
        7'b1100011:
            case (funct3)
                3'b001:
                    case (EQ)
                        0: ImmSrc = instr[31:20]; //bne
                           RegWrite = 1'b0;
                           PCsrc = 1'b1;
                        1: ImmSrc = instr[31:20];
                           RegWrite = 1'b0;
                           PCsrc = 1'b0;
                        defalut: RegWrite = 1'b0;
                                 ImmSrc = 12'b000000000000;
                                 PCsrc = 1'b1;
                    endcase
                default: RegWrite = 1'b0;
                         ALUctrl = 3'b000;
                         ALUsrc = 1'b0;
                         ImmSrc = 12'b000000000000;
                         PCsrc = 1'b1;
            endcase
        default: RegWrite = 1'b0;
                 ALUctrl = 3'b000;
                 ALUsrc = 1'b0;
                 ImmSrc = 12'b000000000000;
                 PCsrc = 1'b1;
    endcase
                
endmodule   


     

    

