#include <stdint.h>

#ifndef _REGISTERS_H_
#define _REGISTERS_H_

/* The rigisters of the 8085 micro-processor goes here. */

extern uint8_t A;
extern uint8_t B;
extern uint8_t C;
extern uint8_t D;
extern uint8_t E;
extern uint8_t H;
extern uint8_t L;
extern uint16_t PC;
extern uint16_t SP;

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

typedef enum { rA, rB, rC, rD, rE, rH, rL, rFlag } register8_t;

typedef enum { rBC, rDE, rHL, rPC, rSP } register16_t;

extern flag_t flags;

#endif
