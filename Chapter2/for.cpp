// for.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int basicFor()
{
    printf("\nFor loop:\n");
    // basic for loop
    for( int i = 0; i < 5; ++i ) {
        printf("i is %d\n", i);
    }

    char s[] = "Vladimir";
    printf("\nIterating String %s with for:\n", s);

    for (int i = 0; s[i]; ++i) {
        printf("char is %c\n", s[i]);
    }

    printf("\nIterating String %s with pointer:\n", s);
    for (char* cp = s; *cp; ++cp) {
        printf("char is %c\n", *cp);
    }

    return 0;
}

int rangeBasedForLoop()
{
    printf("\nRange-based for loop:\n");

    int array[] = {1,2,3,4,5};

    for (int i : array) {
        printf("i is %d\n", i);
    }

    char s[] = "Vladimir";
    printf("\nIterating String %s with Range-based for loop:\n", s);

    for (char c : s) {
        if (c == 0) break;
        printf("i is %c\n", c);
    }
    return 0;
}
