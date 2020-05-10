#include "memory.h"

unsigned short Memory[65535];

/* Initialize the main memory of the 8085 with 0s. */ 
int InitializeMemory()
{
	int i = 0;
	for( i = 0; i < 65535; i++ )
	{
		Memory[i] = 0;
	}
}
