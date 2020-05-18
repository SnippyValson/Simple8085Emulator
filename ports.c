#include "ports.h"

uint8_t ports[256];

int initializePorts()
{
	int i = 0;
	for(i = 0; i < 256; i++)
	{
		ports[i] = 0;
	}
	return 0;
}
