#include "basicSyntax.h"
using namespace std;

int pointer::execute()
{
	puts("");
	puts("Pointers:");
	puts("");

	int x = 7;
	int y = 42;
	int* ip = &x; //int* ip means that ip is an int pointer variable; &x means that we are refering the address of x. After the assigment

	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	ip = &y;
	printf("The value of *ip is %d\n", *ip);

	return 0;
}

int reference::execute()
{
	puts("");
	puts("References:");
	puts("");

	int x = 7;
	printf("The value of [x = 7] is %d\n", x);

	int* ip = &x; //int* ip means that ip is an int pointer variable; &x means that we are refering the address of x. After the assigment
	printf("The value of [int* ip = &x] is %d\n", *ip);

	int& y = x;
	printf("The value of [int &y = x] is %d\n", y);

	y = 42;
	printf("The value of [y = 42] is %d\n", y);

	int z = 73;
	printf("The value of [z = 73] is %d\n", z);

	ip = &z;
	printf("The value of [ip = &z] is %d\n", *ip);

	ip = &y;
	printf("The value of [ip = &y] is %d\n", *ip);

	y = 45;
	printf("The value of [ip] after [y = 45] is %d\n", *ip);
	printf("The value of [y] after [y = 45] is %d\n", y);
	printf("The value of [x] after [y = 45] is %d\n", x);

	x = 43;
	printf("The value of [ip] after [x = 43] is %d\n", *ip);
	printf("The value of [y] after [x = 43] is %d\n", y);
	printf("The value of [x] after [x = 43] is %d\n", x);

	return 0;
}

int primitiveArray::execute()
{
	printf("\nPrimitiveArrays:\n");

	int ia[5]; //<--primitive array
	ia[0] = 1;
	printf("The value of <ia[0]> after <ia[0] = 1> is %d\n", ia[0]);

	*ia = 2; //Array can be accessed as a pointer
	printf("The value of <*ia> after <ia[0] = 1> is %d\n", *ia);

	int* ip = ia;
	printf("The value of <ip> after <int* ip = ia> is %d\n", *ip);

	*ip = 3;
	printf("The value of <ip> after <*ip = 3> is %d\n", *ip);

	++ip;
	printf("The value of <ip> after <++ip;> is %d\n", *ip);

	*ip = 4;
	printf("The value of <ip> after <*ip = 4> is %d\n", *ip);

	*(++ip) = 5;
	printf("The value of <ip> after <*(++ip) = 5> is %d\n", *ip);
	*(++ip) = 6;
	*(++ip) = 7;

	for (auto& var : ia) // access by reference to avoid copying
	{
		printf("%d\n", var);
	}

	//New feature in C++, array initialization with {
	int iaCpp11[5] = { 1,2,3,4,5 };

	for (auto& var : iaCpp11) // access by reference to avoid copying
	{
		printf("%d\n", var);
	}

	int ia10[10];
	int* iap = ia10;

	int count = 0;
	*iap = 0;

	printf("\nia10:\n");

	for (auto& var : ia10) // access by reference to avoid copying
	{
		printf("%d\n", var);
		++count;

		int lenArray = (sizeof(ia10) / sizeof(*ia10));

		if (lenArray > count)
			*(++iap) = count;
	}

	return 0;
}

int primitiveString::execute()
{
	printf("\nPrimitive Strings:\n");

	char s[] = "Vladimir";
	printf("String is: %s\n", s);

	for (char* cp = s; *cp; ++cp) {
		printf("char is %c\n", *cp);
	}

	return 0;
}

int conditionals::execute()
{
	printf("\nConditionals:\n");

	int x = 42, y = 72;

	printf("The next line shows how to use tenary (variable = Expression1 ? Expression2 : Expression3) \n");
	printf("The greater value is %d\n", x > y ? x : y);

	return 0;
}

#include <iostream>
int coutMe::execute()
{
	printf("\ncout:\n");

	printf("\ncout consumes a lot of size, 3 times more than printf and puts:\n");

	cout << "Hello, World!" << endl; //endl is newline;

	return 0;
}
