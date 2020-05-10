#include <stdint.h>

/* The main memory of 8085 goes here */

typedef uint16_t Mem_t;

extern uint16_t Memory[65535];

int IntializeMemory();

