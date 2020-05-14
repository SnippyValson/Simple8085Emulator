#include <stdint.h>

#ifndef _MEMORY_H_
#define _MEMORY_H_

/* The main memory of 8085 goes here */

typedef uint16_t mem_t;

extern uint16_t memory[65535];

int intializeMemory();

#endif
