#include "registers.h"

registers_t registers;

uint8_t* getRegister8(register8_t registerName)
{
	switch(registerName)
	{
		case rA : return &(registers.statusword.status.A);
		case rB : return &(registers.general.registers8.B);
		case rC : return &(registers.general.registers8.C);
		case rD : return &(registers.general.registers8.D);
		case rE : return &(registers.general.registers8.E);
		case rH : return &(registers.general.registers8.H);
		case rL : return &(registers.general.registers8.L);
		default : return 0;
	}
	return 0;	
}

uint16_t* getRegister16(register16_t registerName)
{
	switch(registerName)
	{
		case rBC : return &(registers.general.registers16.BC);
		case rDE : return &(registers.general.registers16.DE);
		case rHL : return &(registers.general.registers16.HL);
		case rSP : return &(registers.SP);
		case rPC : return &(registers.PC);
		case rPSW : return &(registers.statusword.psw);
		default : return 0;
	}
	return 0;
}

flag_t* getFlagsAddress()
{
	return &(registers.statusword.status.FLAGS);
}
