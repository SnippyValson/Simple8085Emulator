#include "8085.h"

int main()
{
	printRegisters();
	op_MVI_A(16);
	printRegisters();
	op_LXI_B(0xBEDF);
	op_LXI_D(0xCDEF);
	op_LXI_H(0x1234);
	printRegisters();
	return 0;
}
