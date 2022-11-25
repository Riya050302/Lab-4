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
// assign funct3 = instr[14:12];
// assign funct7 = instr[31:25]; 
    


always_comb
    case (instr[6:0])
        7'b0010011: 
        begin 
            case (instr[14:12]) //add
                3'b000: 
                begin
                    ALUctrl = 3'b000;
                    ALUsrc = 1'b0;
                    RegWrite = 1'b1;
                end 
                default: 
                begin
                    RegWrite = 1'b0;
                    ALUctrl = 3'b000;
                    ALUsrc = 1'b0;
                end 
            endcase
        end 
        // 7'b0010011: 
        // begin 
        //     case (instr[14:12]) //addi
        //         3'b000: 
        //         begin
        //             ALUctrl = 3'b000;
        //             ALUsrc = 1'b0;
        //             RegWrite = 1'b1;
        //         end 
        //         default: 
        //         begin
        //             RegWrite = 1'b0;
        //             ALUctrl = 3'b000;
        //             ALUsrc = 1'b0;
        //         end 
        //     endcase
        // end 
        7'b1100011: 
        begin 
            case (instr[14:12])
                3'b001:
                begin 
                    case (EQ)
                        0: 
                        begin
                           ImmSrc = instr[31:20]; //bne
                           RegWrite = 1'b0;
                           PCsrc = 1'b1;
                        end 
                        1: 
                        begin
                           ImmSrc = instr[31:20];
                           RegWrite = 1'b0;
                           PCsrc = 1'b0;
                        end
                        default: 
                        begin
                            RegWrite = 1'b0;
                            ImmSrc = 12'b000000000000;
                            PCsrc = 1'b1;
                        end
                    endcase
                end 
                default: 
                begin
                    RegWrite = 1'b0;
                    ALUctrl = 3'b000;
                    ALUsrc = 1'b0;
                    ImmSrc = 12'b000000000000;
                    PCsrc = 1'b1;
                end
            endcase
        end 
        default: 
        begin
            RegWrite = 1'b0;
            ALUctrl = 3'b000;
            ALUsrc = 1'b0;
            ImmSrc = 12'b000000000000;
            PCsrc = 1'b1;
        end 
    endcase
                
endmodule   




     

    

