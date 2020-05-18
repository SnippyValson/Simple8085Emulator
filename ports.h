#include <stdint.h>

/* The 256 ports of the 8085 goes here. */

#ifndef _PORTS_H_
#define _PORTS_H_

typedef uint8_t port_t;
extern uint8_t ports[256];

#endif
