#include "8085.h"
#include <stdio.h>

void printMemory()
{
	int i = 0;
	for(i=0; i < 65536; i++)
	{
		printf("%02hhX ", memory[i]);
		if((i > 0) && (i % 75 == 0))
		{
			printf("\n");
		}
	}	
}

void printMemoryAtAddress(uint16_t memoryAddress)
{
	printf("%02hhX", memory[memoryAddress]);
}

void printRegisters()
{
	printf("A => %02hhX\n", registers.statusword.status.A);
	printf("B => %02hhX\n", registers.general.registers8.B);
	printf("C => %02hhX\n", registers.general.registers8.C);
	printf("D => %02hhX\n", registers.general.registers8.D);
	printf("E => %02hhX\n", registers.general.registers8.E);
	printf("H => %02hhX\n", registers.general.registers8.H);
	printf("L => %02hhX\n", registers.general.registers8.L);
	printf("BC => %04X\n", registers.general.registers16.BC);
	printf("DE => %04X\n", registers.general.registers16.DE);
	printf("HL => %04X\n", registers.general.registers16.HL);
	printf("SP => %04X\n", registers.SP);
	printf("PC => %04X\n", registers.PC);
	printf("PSW => %04X\n", registers.statusword.psw);
}

void printPorts()
{
	int i = 0;
	for(i=0; i < 256; i++)
	{
		printf("%02hhX", ports[i]);
		if((i > 0) && (i % 16 == 0))
		{
			printf("\n");
		}
	}
}

void printStack()
{
	uint16_t* spAddress = getRegister16Address(rSP);
	printf("Stack Top => %02hhX", memory[*spAddress]);
}

void loadHEX()
{
}

void execute()
{
}

void pauseExecution()
{
}

void startDebug()
{
}

void continueDebug()
{
}

void stopDebug()
{
}


