// test for modern C++ compiler
#include <cstdio>
#include "cpp11.h"
using namespace std;

int cpp11::checkCPP11()
{
    int ia[] = { 1, 2, 3, 4, 5 };
    for (auto i : ia) {
        printf("i is %d\n", i);
    }
    return 0;
}
