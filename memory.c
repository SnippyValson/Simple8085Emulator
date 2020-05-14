#include "memory.h"

uint16_t  memory[65535];

/* Initialize the main memory of the 8085 with 0s. */ 
int initializeMemory()
{
	int i = 0;
	for( i = 0; i < 65535; i++ )
	{
		memory[i] = 0;
	}
	return 0;
}
