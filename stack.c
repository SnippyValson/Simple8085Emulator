#include "stack.h"

int push(uint8_t data8)
{
	registers.SP++;
	memory[registers.SP] = data8;
	return 0; 
}

uint8_t pop()
{
	uint8_t data =  memory[registers.SP];
	registers.SP--;
	return data;
}
