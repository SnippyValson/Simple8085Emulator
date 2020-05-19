#include "8085.h"

int main()
{
	printRegisters();
	op_MVI_A(16);
	printRegisters();
	op_LXI_B(0xBEDF);
	printRegisters();
	return 0;
}
