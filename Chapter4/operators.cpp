#include "operators.h"
using namespace std;

void bprint::execute()
{
	printf("\nbprint:\n");
	uint8_t x = 5;
	uint8_t y = 10;
	uint8_t z = x | y;

	printf("x is %s\n", u8_to_cstr(x));
	printf("y is %s\n", u8_to_cstr(y));
	printf("result is %s\n", u8_to_cstr(z));
}

const char* bprint::u8_to_cstr(const uint8_t& x)
{
	static char buf[sizeof(x) * 8 + 1];
	for (char& c : buf) c = 0; // reset buffer
	char* bp = buf;
	for (uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1) {
		*(bp++) = x & bitmask ? '1' : '0';
	}
	return buf;
}

#include <new>
int newDelete::execute()
{
	printf("\nNew Delete:\n");

	printf("allocate space for %lu long int at *ip with new\n", count);

	// allocate array
	long int* ip;

	try {
		ip = new long int[count];
	}
	catch (std::bad_alloc & ba) {
		fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
		return 1;
	}

	// initialize array
	for (long int i = 0; i < count; ++i) {
		ip[i] = i;
	}

	// print array
	for (long int i = 0; i < count; ++i) {
		printf("%ld ", ip[i]);
	}
	puts("");

	// deallocate array
	delete[] ip;
	puts("space at *ip deleted");

	return 0;
}

int operators::pointerIncremental()
{
	printf("\nPointer Incremental:\n");

	char arr[5] = { 1, 2, 3, 4, 5 };
	char* p = arr;
	printp(p++);
	printp(p++);
	printp(p++);

	return 0;
}

void operators::printp(char* p)
{
	printf("pointer is %p, value is %d\n", p, *p);
}

#include <typeinfo>
int operators::typeIdTest()
{
	printf("\nType Info:\n");

	if (typeid(a1) == typeid(A)) {
		puts("same");
	}
	else {
		puts("different");
	}
	return 0;
}

int operators::compoundOperators()
{
	printf("\nCompound Operators:\n");

	int x = 1;
	int y = 2;

	x = x + y;
	printf("The result of x and y are %d and %d\n", x, y);
	x += y;
	printf("The result of x and y are %d and %d\n", x, y);
	x -= y;
	printf("The result of x and y are %d and %d\n", x, y);
	x *= y;
	printf("The result of x and y are %d and %d\n", x, y);
	x /= y;
	printf("The result of x and y are %d and %d\n", x, y);
	x %= y;
	printf("The result of x and y are %d and %d\n", x, y);
	++y;
	printf("The result of x and y are %d and %d\n", x, y);

	return 0;
}

int operators::IncrementDecrementOperators()
{
	printf("\nIncrement Operators:\n");

	int i = 0;
	//Increment Before
	printf("\ni is %d", ++i);
	printf("\ni is %d", ++i);
	printf("\ni is %d", ++i);
	//Increment After
	printf("\ni is %d", i++);
	printf("\ni is %d", i++);
	printf("\ni is %d", i++);
	//Decrement Before
	printf("\ni is %d", --i);
	printf("\ni is %d", --i);
	printf("\ni is %d", --i);
	//Decrement After
	printf("\ni is %d", i--);
	printf("\ni is %d", i--);
	printf("\ni is %d", i--);

	//Prefix is more efficient

	return 0;
}
