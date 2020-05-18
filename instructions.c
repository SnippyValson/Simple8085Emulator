/* The instruction set of the 8085 micro-processor is defined here. */ 
#include "instructions.h"
#include "stack.h"

int MOV_RR(register8_t destinationRegister, register8_t sourceRegister)
{
	uint8_t* destinationRegisterAddress = getRegister8Address(destinationRegister);
	uint8_t* sourceRegisterAddress = getRegister8Address(sourceRegister);
	*destinationRegisterAddress = *sourceRegisterAddress; 
	return 0;
}

int MOV_RM(register8_t destinationRegister)
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	uint8_t* destinationRegisterAddress = getRegister8Address(destinationRegister);
	*destinationRegisterAddress = memory[*hlAddress];
	return 0;
}

int MOV_MR(register8_t sourceRegister)
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	uint8_t* sourceRegisterAddress = getRegister8Address(sourceRegister);
	memory[*hlAddress] = *sourceRegisterAddress;
	return 0;
}

int MVI_RD(register8_t destinationRegister, uint8_t data8)
{	
	uint8_t* destinationRegisterAddress = getRegister8Address(destinationRegister);
	*destinationRegisterAddress = data8;
 	return 0;
}

int MVI_MD(uint8_t data8)
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	memory[*hlAddress] = data8;
	return 0;
}

int LXI(register16_t destinationRegisterPair, uint16_t data16)
{
	uint16_t* destinationRegisterAddress = getRegister16Address(rHL);
	*destinationRegisterAddress = data16;
	return 0;
}

int LDA(mem_t sourceMemoryAddress)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = memory[sourceMemoryAddress];
	return 0;
}

int STA(mem_t destinationMemoryAddress)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	memory[destinationMemoryAddress] = *accumulatorAddress;
	return 0;
}

int LHLD(mem_t sourceMemoryAddress)
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	*hlAddress = memory[sourceMemoryAddress];
	return 0;
}

int SHLD(mem_t destinationMemoryAddress)
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	memory[destinationMemoryAddress] = *hlAddress;
	return 0;
}

int LDAX(register16_t sourceRegisterPair)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* sourceRegisterAddress = getRegister16Address(sourceRegisterPair);
	*accumulatorAddress = memory[*sourceRegisterAddress];
	return 0;
}

int STAX(register16_t destinationRegisterPair)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* destinationAddressPair = getRegister16Address(destinationRegisterPair);
	memory[*destinationAddressPair] = *accumulatorAddress;
	return 0;
}

int XCHG()
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	uint16_t* deAddress = getRegister16Address(rDE);
	uint16_t buffer = *hlAddress;
	*hlAddress = *deAddress;
	*deAddress = buffer;
	return 0;
}

int PCHL()
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	uint16_t* pcAddress = getRegister16Address(rPC);
	*hlAddress = *pcAddress;
	return 0;
}

int ADD(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	*accumulatorAddress = *accumulatorAddress + *operandRegisterAddress; 
	return 0;
}

int ADD_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	*accumulatorAddress = *accumulatorAddress + memory[*hlAddress];
	return 0;
}

int ADC(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	flag_t* flagAddress = getFlagsAddress();
	uint8_t carry = flagAddress->carry; 
	*accumulatorAddress = *accumulatorAddress + *operandRegisterAddress + carry;
	return 0;
}

int ADC_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	flag_t* flagAddress = getFlagsAddress();
	uint8_t carry = flagAddress->carry;  
	*accumulatorAddress = *accumulatorAddress + memory[*hlAddress] + carry;
	return 0;
}

int ADI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = *accumulatorAddress + data8;
	return 0;
}

int ACI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	flag_t* flagAddress = getFlagsAddress();
	uint8_t carry = flagAddress->carry; 
	*accumulatorAddress = *accumulatorAddress + data8 + carry;
	return 0;
}

int DAD(register16_t operandRegister)
{
	return 0;
}

int SUB(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	*accumulatorAddress = *accumulatorAddress - *operandRegisterAddress; 
	return 0;
}

int SUB_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	*accumulatorAddress = *accumulatorAddress - memory[*hlAddress];
 	return 0;
}

int SBB(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	flag_t* flagAddress = getFlagsAddress();
	uint8_t borrow = flagAddress->carry; 
	*accumulatorAddress = *accumulatorAddress - *operandRegisterAddress - borrow;
	return 0;
}

int SBB_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	flag_t* flagAddress = getFlagsAddress();
	uint8_t borrow = flagAddress->carry; 
	*accumulatorAddress = *accumulatorAddress - memory[*hlAddress] - borrow;
	return 0;
}

int SUI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = *accumulatorAddress - data8;
	return 0;
}

int SBI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	flag_t* flagAddress = getFlagsAddress();
	uint8_t borrow = flagAddress->carry; 
	*accumulatorAddress = *accumulatorAddress - data8 - borrow;
 	return 0;
}

int INR(register8_t operandRegister)
{
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	(*operandRegisterAddress)++;
	return 0;
}

int INR_M()
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	memory[*hlAddress]++;
 	return 0;
}

int DCR(register8_t operandRegister)
{
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	(*operandRegisterAddress)--;
	return 0;
}

int DCR_M()
{
	uint16_t* hlAddress = getRegister16Address(rHL);
	memory[*hlAddress]--;
	return 0;
}

int INX(register16_t operandRegister)
{
	uint16_t* operandRegisterAddress = getRegister16Address(operandRegister);
	(*operandRegisterAddress)++;
	return 0;
}

int DCX(register16_t operandRegister)
{
	uint16_t* operandRegisterAddress = getRegister16Address(operandRegister);
	(*operandRegisterAddress)--;
	return 0;
}

int DAA()
{
	return 0;
}

int ANA(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	*accumulatorAddress = *accumulatorAddress & *operandRegisterAddress; 
	return 0;
}

int ANA_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	*accumulatorAddress = *accumulatorAddress & memory[*hlAddress];
	return 0;
}

int ANI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = *accumulatorAddress & data8;
	return 0;
}

int ORA(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	*accumulatorAddress = *accumulatorAddress | *operandRegisterAddress; 
	return 0;
}

int ORA_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	*accumulatorAddress = *accumulatorAddress | memory[*hlAddress];
	return 0;
}

int ORI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = *accumulatorAddress | data8;
	return 0;
}

int XRA(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	*accumulatorAddress = *accumulatorAddress ^ *operandRegisterAddress; 
	return 0;
}

int XRA_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	*accumulatorAddress = *accumulatorAddress ^ memory[*hlAddress];
	return 0;
}

int XRI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = *accumulatorAddress ^ data8;
	return 0;
}

int CMA()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	*accumulatorAddress = ~(*accumulatorAddress);
	return 0;
}

int CMC()
{
	flag_t* flagAddress = getFlagsAddress();
	flagAddress->carry = ~(flagAddress->carry);
	return 0;
}

int STC()
{
	flag_t* flagAddress = getFlagsAddress();
	flagAddress->carry = 1;
	return 0;
}

int CMP(register8_t operandRegister)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint8_t* operandRegisterAddress = getRegister8Address(operandRegister);
	flag_t* flagAddress = getFlagsAddress();
	if(*accumulatorAddress == *operandRegisterAddress)
	{
		flagAddress->zero = 1;
		flagAddress->carry = 0;
	}
	else if(*accumulatorAddress < *operandRegisterAddress)
	{
		flagAddress->zero = 0;
		flagAddress->carry = 1;
	}
	else if(*accumulatorAddress > *operandRegisterAddress)
	{
		flagAddress->zero = 0;
		flagAddress->carry = 0;
	}
	return 0;
}

int CMP_M()
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	uint16_t* hlAddress = getRegister16Address(rHL);
	flag_t* flagAddress = getFlagsAddress();
	if(*accumulatorAddress == memory[*hlAddress])
	{
		flagAddress->zero = 1;
		flagAddress->carry = 0;
	}
	else if(*accumulatorAddress < memory[*hlAddress])
	{
		flagAddress->zero = 0;
		flagAddress->carry = 1;
	}
	else if(*accumulatorAddress > memory[*hlAddress])
	{
		flagAddress->zero = 0;
		flagAddress->carry = 0;
	}
	return 0;
}

int CPI(uint8_t data8)
{
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	flag_t* flagAddress = getFlagsAddress();
	if(*accumulatorAddress == data8)
	{
		flagAddress->zero = 1;
		flagAddress->carry = 0;
	}
	else if(*accumulatorAddress < data8)
	{
		flagAddress->zero = 0;
		flagAddress->carry = 1;
	}
	else if(*accumulatorAddress > data8)
	{
		flagAddress->zero = 0;
		flagAddress->carry = 0;
	}
	return 0;
}

int RLC()
{
	uint8_t NUM_BITS = 7;
	uint8_t DROPPED_MSB = 0;	
	uint8_t MSB = 0;
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	flag_t* flagAddress = getFlagsAddress();
	DROPPED_MSB = (*accumulatorAddress >> NUM_BITS) & 1;
	*accumulatorAddress = (*accumulatorAddress << 1) | DROPPED_MSB;
	MSB = (*accumulatorAddress >> NUM_BITS) & 1;
	flagAddress->carry = MSB;
	return 0;
}

int RRC()
{
	uint8_t NUM_BITS = 7;
	uint8_t DROPPED_LSB = 0;	
	uint8_t MSB = 0;
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	flag_t* flagAddress = getFlagsAddress();
	DROPPED_LSB = *accumulatorAddress & 1;
	*accumulatorAddress = *accumulatorAddress >> 1;
	*accumulatorAddress = *accumulatorAddress & (~(1 << NUM_BITS));
	*accumulatorAddress = *accumulatorAddress | (DROPPED_LSB << NUM_BITS);
	MSB = (*accumulatorAddress >> NUM_BITS) & 1;
	flagAddress->carry = MSB;
	return 0;
}

int RAL()
{
	uint8_t NUM_BITS = 7;
	uint8_t DROPPED_MSB = 0;	
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	flag_t* flagAddress = getFlagsAddress();
	DROPPED_MSB = (*accumulatorAddress >> NUM_BITS) & 1;
	*accumulatorAddress = (*accumulatorAddress << 1) | DROPPED_MSB;
	return 0;
}

int RAR()
{
	uint8_t NUM_BITS = 7;
	uint8_t DROPPED_LSB = 0;	
	uint8_t* accumulatorAddress = getRegister8Address(rA);
	DROPPED_LSB = *accumulatorAddress & 1;
	*accumulatorAddress = *accumulatorAddress >> 1;
	*accumulatorAddress = *accumulatorAddress & (~(1 << NUM_BITS));
	*accumulatorAddress = *accumulatorAddress | (DROPPED_LSB << NUM_BITS);
	return 0;
}

int JMP(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	*pcAddress = targetAddress;
	return 0;
}

int JZ(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->zero == 1)
	{
		*pcAddress = targetAddress;
	}
	return 0;
}

int JNZ(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->zero == 0)
	{
		*pcAddress = targetAddress;
	}
	return 0;
} 

int JC(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->carry == 1)
	{
		*pcAddress = targetAddress;
	}
	return 0;
}

int JNC(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->carry == 0)
	{
		*pcAddress = targetAddress;
	}
	return 0;
} 

int JP(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->sign == 0)
	{
		*pcAddress = targetAddress;
	}
	return 0;
} 

int JM(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->sign == 1)
	{
		*pcAddress = targetAddress;
	}
	return 0;
}

int JPE(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->parity == 1)
	{
		*pcAddress = targetAddress;
	}
	return 0;
} 

int JPO(mem_t targetAddress)
{
	uint16_t* pcAddress = getRegister16Address(rPC);
	flag_t* flagAddress = getFlagsAddress();
	if(flagAddress->parity == 0)
	{
		*pcAddress = targetAddress;
	}
	return 0;
} 

int CALL(mem_t targetAddress)
{
	
	return 0;
}

int CZ(mem_t targetAddress)
{
	return 0;
}
 
int CNZ(mem_t targetAddress)
{
	return 0;
}

int CC(mem_t targetAddress)
{
	return 0;
}

int CNC(mem_t targetAddress)
{
	return 0;
}

int CP(mem_t targetAddress)
{
	return 0;
} 
int CM(mem_t targetAddress)
{
	return 0;
} 

int CPE(mem_t targetAddress)
{
	return 0;
} 

int CPO(mem_t targetAddress)
{
	return 0;
} 

int RET()
{
	return 0;
}

int RZ()
{
	return 0;
}
 
int RNZ()
{
	return 0;
}

int RC()
{
	return 0;
}

int RNC()
{
	return 0;
}

int RP()
{
	return 0;
} 
int RM()
{
	return 0;
} 

int RPE()
{
	return 0;
} 

int RPO()
{
	return 0;
} 

int RST(restartLocation_t restartLocation)
{
	return 0;
}

int IN(mem_t sourcePortAddress)
{
	return 0;
}

int OUT(mem_t destinationPortAddress)
{
	return 0;
}

int PUSH(register16_t destinationRegister)
{
	return 0;
}

int PUSH_PSW()
{
	return 0;
}

int POP(register16_t sourceResgister)
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
