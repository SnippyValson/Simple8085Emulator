#include "memory.h"

uint8_t  memory[65536];

/* Initialize the main memory of the 8085 with 0s. */ 
int initializeMemory()
{
	int i = 0;
	for( i = 0; i < 65536; i++ )
	{
		memory[i] = 0;
	}
	return 0;
}
