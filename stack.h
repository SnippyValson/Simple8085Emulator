#include "memory.h"
#include "registers.h"

#ifndef _STACK_H_
#define _STACK_H_

/* Declaration of all stack methods go here. */

/* Push the data onto the stack. */
int push(uint8_t data);

/* Return the value at the top os the stack. */
uint8_t pop();

#endif
