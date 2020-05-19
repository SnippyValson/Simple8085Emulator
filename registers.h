#include <stdint.h>

#ifndef _REGISTERS_H_
#define _REGISTERS_H_

/* The rigisters of the 8085 micro-processor goes here. */

/* Represents the 8 bit general purpose registers. */
typedef struct {
	 uint8_t C;
	 uint8_t B;
	 uint8_t E;
	 uint8_t D;
	 uint8_t L;
	 uint8_t H;
	} registers8_t;

/* Represents the 16 bit general purpose registers. */
typedef struct {
	uint16_t BC;
	uint16_t DE;
	uint16_t HL;
	} registers16_t;
/*
 * Since 16 bit registers are to the corresponding two 8 bit registers combined,
 * a union is used as an interface for the data.
 */
typedef union {
	registers8_t registers8;
	registers16_t registers16;
	} registersg_t;

/* Represents the flags. */
typedef struct {
	uint8_t sign : 1;
	uint8_t zero : 1;
	uint8_t filler0 : 1;
	uint8_t auxillaryCarry : 1;
	uint8_t filler1 : 1;
	uint8_t parity : 1;
	uint8_t filler2 : 1;
	uint8_t carry : 1;
	} flag_t;

/* Represents the status word of the 8085 8 */
typedef struct {
	uint8_t A;
	flag_t FLAGS;
	} status_t;

/* A union to provide an interface to the program status word. */
typedef union {
	status_t status;
	uint16_t psw;
	} psw_t;

/*
 * Represents the entire registers of 8085.
 * The accumulator, general purpose registers, stack pointer, program counter and the flag register.
 */
typedef struct {
	psw_t 		statusword;
	registersg_t 	general;
	uint16_t 	PC;
	uint16_t	SP;
	} registers_t;	

/* Used to identify each of the 8 bit registers. */
typedef enum { rA, rB, rC, rD, rE, rH, rL, rFlag } register8_t;

/* used to identify each of the 18 bit registers. */
typedef enum { rBC, rDE, rHL, rPC, rSP, rPSW } register16_t;

/* The registers. */
extern registers_t registers;

/* Returns a pointer to the 8-bit register identified by 'registerName'. */
uint8_t* getRegister8Address(register8_t registerName);

/* Returns a pointer to the 16-bit register identified by 'registerName'. */
uint16_t* getRegister16Address(register16_t registerName);

/* Returns a pointer to the entire flag register. */
flag_t* getFlagsAddress();

#endif
