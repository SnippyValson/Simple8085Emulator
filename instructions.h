#include "registers.h"
#include "memory.h"

#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

/* The instruction set of the 8085 micro-processor is declared here. */

/* Restart Locations */
typedef enum { RST0, RST1, RST2, RST3, RST4, RST5, RST6, RST7 } restartLocation_t; 

/* Data transfer instructions. */
int MOV_RR(register8_t destinationRegister, register8_t sourceRegister);
int MOV_RM(register8_t destinationRegister);
int MOV_MR(register8_t sourceRegister);
int MVI_RD(register8_t detinationRegister, int8_t data8);
int MVI_MD(int8_t data8);
int LXI(register16_t destinationRegisterPair, int16_t data16);
int LDA(Mem_t sourceMemoryAddress);
int STA(Mem_t destinationMemoryAddress);
int LHLD(Mem_t sourceDestinationAddress);
int SHLD(Mem_t destinationRegisterAddress);
int LDAX(register16_t sourceRegisterPair);
int STAX(register16_t destinationRegisterPair);
int XCHG();

/* Arithemetic instructions. */
int ADD(register8_t operandRegister);
int ADD_M();
int ADC(register8_t operandRegister);
int ADC_M();
int ADI(int8_t data8);
int ACI(int8_t data8);
int DAD(register16_t operandRegister);
int SUB(register8_t operandRegister);
int SUB_M();
int SBB(register8_t operandRegister);
int SBB_M();
int SUI(int8_t data8);
int SBI(int8_t data8);
int INR(register8_t operandRegister);
int INR_M();
int DCR(register8_t operandRegister);
int DCR_M();
int INX(register16_t operandRegister);
int DCX(register16_t operandRegister);
int DAA();

/* Logical instructions. */
int ANA(register8_t operandRegister);
int ANA_M();
int ANI(int8_t data);
int ORA(register8_t operandRegister);
int ORA_M();
int ORI(int8_t data);
int XRA(register8_t operandRegister);
int XRA_M();
int XRI(int8_t data);
int CMA();
int CMC();
int STC();
int CMP(register8_t operandRegister);
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
int CZ(Mem_t targetAddress); 
int CNZ(Mem_t targetAddress); 
int CC(Mem_t targetAddress); 
int CNC(Mem_t targetAddress); 
int CP(Mem_t targetAddress); 
int CM(Mem_t targetAddress); 
int CPE(Mem_t targetAddress); 
int CPO(Mem_t targetAddress); 

int RET();
int RST(restartLocation_t restartLocation);

/* Stack, I/O, and Machine Control Group. */
int IN(Mem_t sourcePortAddress);
int OUT(Mem_t destinationPortAddress);
int PUSH(register16_t destinationRegister);
int PUSH_PSW();
int POP(register16_t sourceResgister);
int POP_PSW();
int HLT();
int XTHL();
int SPHL();
int EI();
int DI();
int SIM();
int RIM();
int NOP();

#endif
