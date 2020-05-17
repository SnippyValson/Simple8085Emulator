#include "stack.h"

int PUSH(uint8_t data8)
{
	registers.SP++;
	memory[registers.SP];
	return 0; 
}

uint8_t POP()
{
	uint8_t data =  memory[registers.SP];
	registers.SP--;
	return data;
}
