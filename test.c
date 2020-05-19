#include "8085.h"

int main()
{
	printRegisters();
	op_MVI_A(16);
	printRegisters();
	return 0;
}
