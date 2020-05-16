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
int MVI_RD(register8_t detinationRegister,uint8_t data8);
int MVI_MD(uint8_t data8);
int LXI(register16_t destinationRegisterPair, uint16_t data16);
int LDA(mem_t sourceMemoryAddress);
int STA(mem_t destinationMemoryAddress);
int LHLD(mem_t sourceDestinationAddress);
int SHLD(mem_t destinationRegisterAddress);
int LDAX(register16_t sourceRegisterPair);
int STAX(register16_t destinationRegisterPair);
int XCHG();
int PCHL();

/* Arithemetic instructions. */
int ADD(register8_t operandRegister);
int ADD_M();
int ADC(register8_t operandRegister);
int ADC_M();
int ADI(uint8_t data8);
int ACI(uint8_t data8);
int DAD(register16_t operandRegister);
int SUB(register8_t operandRegister);
int SUB_M();
int SBB(register8_t operandRegister);
int SBB_M();
int SUI(uint8_t data8);
int SBI(uint8_t data8);
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
int ANI(uint8_t data);
int ORA(register8_t operandRegister);
int ORA_M();
int ORI(uint8_t data);
int XRA(register8_t operandRegister);
int XRA_M();
int XRI(uint8_t data);
int CMA();
int CMC();
int STC();
int CMP(register8_t operandRegister);
int CMP_M();
int CPI(uint8_t data);
int RLC();
int RRC();
int RAL();
int RAR();

/* Jump instructions. */
int JMP(mem_t targetAddress);
int JZ(mem_t targetAddress); 
int JNZ(mem_t targetAddress); 
int JC(mem_t targetAddress); 
int JNC(mem_t targetAddress); 
int JP(mem_t targetAddress); 
int JM(mem_t targetAddress); 
int JPE(mem_t targetAddress); 
int JPO(mem_t targetAddress); 
int CALL(mem_t targetAddress);
int CZ(mem_t targetAddress); 
int CNZ(mem_t targetAddress); 
int CC(mem_t targetAddress); 
int CNC(mem_t targetAddress); 
int CP(mem_t targetAddress); 
int CM(mem_t targetAddress); 
int CPE(mem_t targetAddress); 
int CPO(mem_t targetAddress); 

int RET();
int RZ(); 
int RNZ(); 
int RC(); 
int RNC(); 
int RP(); 
int RM(); 
int RPE(); 
int RPO(); 
int RST(restartLocation_t restartLocation);

/* Stack, I/O, and Machine Control Group. */
int IN(mem_t sourcePortAddress);
int OUT(mem_t destinationPortAddress);
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
