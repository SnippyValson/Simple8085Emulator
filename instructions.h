#include "memory.h"
#include <stdint.h>

/* The instruction set of the 8085 micro-processor is declared here. */

/* Restart Locations */
typedef enum { RST_0, RST_1, RST_2, RST_3, RST_4, RST_5, RST_6, RST_7 } RestartLocation_t; 

/* Data transfer instructions. */
int MOV_RR(Register_t destinationRegister, Register_t sourceRegister);
int MOV_RM(Register_t destinationRegister);
int MOV_MR(Register_t sourceRegister);
int MVI_RD(Register_t detinationRegister, int8_t data8);
int MVI_MD(Mem_t destinationMemoryAddress, int8_t data8);
int LXI(Register16_t destinationRegisterPair, int16_t data16);
int LDA(Mem_t sourceMemoryAddress);
int STA(Mem_t destinationMemoryAddress);
int LHLD(Mem_t sourceDestinationAddress);
int SHLD(Mem_t destinationRegisterAddress);
int LDAX(Register16_t sourceRegisterPair);
int STAX(Register16_t destinationRegisterPair);
int XCHG();

/* Arithemetic instructions. */
int ADD(Register_t operandRegister);
int ADD_M();
int ADC(Register_t operandRegister);
int ADC_M();
int ADI(int8_t data8);
int ACI(int8_t data8);
int DAD(Register16_t operandRegister);
int SUB(Register_t operandRegister);
int SUB_M();
int SBB(Register_t operandRegister);
int SBB_M();
int SUI(int8_t data8);
int SBI(int8_t data8);
int INR(Register_t operandRegister);
int INR_M();
int DCR(Register_t operandRegister);
int DCR_M();
int INX(Register16_t operandRegister);
int DCX(Register16_t operandRegister);
int DAA();

/* Logical instructions. */
int ANA(Register_t operandRegister);
int ANA_M();
int ANI(int8_t data);
int ORA(Register_t operandRegister);
int ORA_M();
int ORI(int8_t data);
int XRA(Register_t operandRegister);
int XRA_M();
int XRI(int8_t data);
int CMA();
int CMC();
int STC();
int CMP(Register_t operandRegister);
int CMP_M();
int CPI(int8_t data);
int RLC();
int RRC();
int RAL();
int RAR();

/* Jump instructions. */
int JMP(Mem_t targetAddress);
int JZ(Mem_t targetAddress); 
int JNZ(Mem_t targetAddress); 
int JC(Mem_t targetAddress); 
int JNC(Mem_t targetAddress); 
int JP(Mem_t targetAddress); 
int JM(Mem_t targetAddress); 
int JPE(Mem_t targetAddress); 
int JPO(Mem_t targetAddress); 
int CALL(Mem_t targetAddress);
int RET();
int RST(RestartLocation_t restartLocation);

/* Stack, I/O, and Machine Control Group. */
int IN(Mem_t sourcePortAddress);
int OUT(Mem_t destinationPortAddress);
int PUSH(Register16_t destinationRegister);
int PUSH_PSW();
int POP(Register16_t sourceResgister);
int POP_PSW();
int HLT();
int XTHL();
int SPHL();
int EI();
int DI();
int SIM();
int RIM();
int NOP();
