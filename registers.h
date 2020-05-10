#include <stdint.h>

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
	uint8_t Sign : 1;
	uint8_t Zero : 1;
	uint8_t Filler0 : 1;
	uint8_t AuxillaryCarry : 1;
	uint8_t Filler1 : 1;
	uint8_t Parity : 1;
	uint8_t Filler2 : 1;
	uint8_t Carry : 1;
} Flag_t;

typedef enum { r_A, r_B, r_C, r_D, r_E, r_H, r_L, r_Flag } Register_t;

typedef enum { r_BC, r_DE, r_HL, r_PC, r_SP } Register16_t;

extern Flag_t Flags;

