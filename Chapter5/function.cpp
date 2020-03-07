#include "function.h"
void funct()
{
	puts("this is func()");
}

int function::pointerFunction()
{
	printf("\nPointer Function:\n");

	void (*pfunc)() = funct;
	puts("This is pointerFunction()");
	pfunc();
	return 0;
}


