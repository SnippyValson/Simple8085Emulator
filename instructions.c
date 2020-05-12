/* The instruction set of the 8085 micro-processor is defined here. */ 

#include "instructions.h"

int MOV_RR(Register_t destinationRegister, Register_t sourceRegister)
{
	return 0;
}

int MOV_RM(Register_t destinationRegister)
{
	return 0;
}

int MOV_MR(Register_t sourceRegister)
{
	return 0;
}

int MVI_RD(Register_t detinationRegister, int8_t data8)
{
 	return 0;
}

int MVI_MD(int8_t data8)
{
	return 0;
}

int LXI(Register16_t destinationRegisterPair, int16_t data16)
{
	return 0;
}

int LDA(Mem_t sourceMemoryAddress)
{
	return 0;
}

int STA(Mem_t destinationMemoryAddress)
{
	return 0;
}

int LHLD(Mem_t sourceDestinationAddress)
{
	return 0;
}

int SHLD(Mem_t destinationRegisterAddress)
{
	return 0;
}

int LDAX(Register16_t sourceRegisterPair)
{
	return 0;
}

int STAX(Register16_t destinationRegisterPair)
{
	return 0;
}

int XCHG()
{
	return 0;
}

int ADD(Register_t operandRegister)
{
	return 0;
}

int ADD_M()
{
	return 0;
}

int ADC(Register_t operandRegister)
{
	return 0;
}

int ADC_M()
{
	return 0;
}

int ADI(int8_t data8)
{
	return 0;
}

int ACI(int8_t data8)
{
	return 0;
}

int DAD(Register16_t operandRegister)
{
	return 0;
}

int SUB(Register_t operandRegister)
{
	return 0;
}

int SUB_M()
{
 	return 0;
}

int SBB(Register_t operandRegister)
{
	return 0;
}

int SBB_M()
{
	return 0;
}

int SUI(int8_t data8)
{
	return 0;
}

int SBI(int8_t data8)
{
 	return 0;
}

int INR(Register_t operandRegister)
{
	return 0;
}

int INR_M()
{
 	return 0;
}

int DCR(Register_t operandRegister)
{
	return 0;
}

int DCR_M()
{
	return 0;
}

int INX(Register16_t operandRegister)
{
	return 0;
}

int DCX(Register16_t operandRegister)
{
	return 0;
}

int DAA()
{
	return 0;
}

int ANA(Register_t operandRegister)
{
	return 0;
}

int ANA_M()
{
	return 0;
}

int ANI(int8_t data)
{
	return 0;
}

int ORA(Register_t operandRegister)
{
	return 0;
}

int ORA_M()
{
	return 0;
}

int ORI(int8_t data)
{
	return 0;
}

int XRA(Register_t operandRegister)
{
	return 0;
}

int XRA_M()
{
	return 0;
}

int XRI(int8_t data)
{
	return 0;
}

int CMA()
{
	return 0;
}

int CMC()
{
	return 0;
}

int STC()
{
	return 0;
}

int CMP(Register_t operandRegister)
{
	return 0;
}

int CMP_M()
{
	return 0;
}

int CPI(int8_t data)
{
	return 0;
}

int RLC()
{
	return 0;
}

int RRC()
{
	return 0;
}

int RAL()
{
	return 0;
}

int RAR()
{
	return 0;
}

int JMP(Mem_t targetAddress)
{
	return 0;
}

int JZ(Mem_t targetAddress)
{
	return 0;
}

int JNZ(Mem_t targetAddress)
{
	return 0;
} 

int JC(Mem_t targetAddress)
{
	return 0;
}

int JNC(Mem_t targetAddress)
{
	return 0;
} 

int JP(Mem_t targetAddress)
{
	return 0;
} 

int JM(Mem_t targetAddress)
{
	return 0;
}

int JPE(Mem_t targetAddress)
{
	return 0;
} 

int JPO(Mem_t targetAddress)
{
	return 0;
} 

int CALL(Mem_t targetAddress)
{
	return 0;
}

int CZ(Mem_t targetAddress)
{
	return 0;
}
 
int CNZ(Mem_t targetAddress)
{
	return 0;
}

int CC(Mem_t targetAddress)
{
	return 0;
}

int CNC(Mem_t targetAddress)
{
	return 0;
}

int CP(Mem_t targetAddress)
{
	return 0;
} 
int CM(Mem_t targetAddress)
{
	return 0;
} 

int CPE(Mem_t targetAddress)
{
	return 0;
} 

int CPO(Mem_t targetAddress)
{
	return 0;
} 

int RET()
{
	return 0;
}

int RST(RestartLocation_t restartLocation)
{
	return 0;
}

int IN(Mem_t sourcePortAddress)
{
	return 0;
}

int OUT(Mem_t destinationPortAddress)
{
	return 0;
}

int PUSH(Register16_t destinationRegister)
{
	return 0;
}

int PUSH_PSW()
{
	return 0;
}

int POP(Register16_t sourceResgister)
{
	return 0;
}

int POP_PSW()
{
	return 0;
}

int HLT()
{
	return 0;
}

int XTHL()
{
	return 0;
}

int SPHL()
{
	return 0;
}

int EI()
{
	return 0;
}

int DI()
{
	return 0;
}

int SIM()
{
	return 0;
}

int RIM()
{
	return 0;
}

int NOP()
{
	return 0;
}
