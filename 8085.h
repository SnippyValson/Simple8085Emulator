#include "opcodes.h"

#ifndef _8085_H_
#define _8085_H_

/* Print the values stored memory of the 8085. */
void printMemory();

/* Print the value stored at a particular memeory location of the 8085. */
void printMemoryAtAddress(mem_t memoryAddress);

/* Print current values stored in registers. */
void printRegisters();

/* Print the stack area of the memory. */
void printStack();

/* Print the values stored in the ports of the 8085 */
void printPorts();

/* Load the assembled hex file. */
void loadHEX();

/* Excute the loaded hex file. */
void execute();

/* Pause the execution of the hex file. */
void pauseExecution();

/*
 * Start debugging the hex file.
 * Instructions will be executed one by one.
 * The execution will be paused after each instruction. 
 * Call the continueDebug() method to execute the next instruction.
 */
void startDebug();

/*
 * Execute the next instruction.
 * Used while debugging the hex file.
 */
void continueDebug();

/* Stop debugging the hex file. */
void stopDebug();

#endif
