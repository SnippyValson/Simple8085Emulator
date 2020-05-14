#ifndef _8085_H_
#define _8085_H_

// Print the values stored memory of the 8085.
void printMemory();

// Print current values stored in registers.
void printRegisters();

// Print the stack area of the memory.
void printStack();

// Load the assembled hex file.
void loadHEX();

// Excute the loaded hex file.
void execute();

// Pause the execution of the hex file.
void pauseExecution();

// Start debugging the hex file.
// Instructions will be executed one by one.
// The execution will be paused after each instruction. 
// Call the continueDebug() method to execute the next instruction.
void startDebug();

// Execute the next instruction.
// Used while debugging the hex file.
void continueDebug();

// Stop debugging the hex file.
void stopDebug();

#endif
