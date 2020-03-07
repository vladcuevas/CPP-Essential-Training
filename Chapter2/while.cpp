#ifndef WHILE_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define WHILE_H

#include <cstdio>
using namespace std;

int basicLoop()
{
    printf("\nWhile:\n");

    int array[] = { 1, 2, 3, 4, 5 };
    int i = 0;
    
    while(i < 5) {
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    printf("\nWhile with break:\n");
    i = 0;
    while (i < 5) {
        if (i == 2) break;
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    printf("\nWhile with continue:\n");
    i = 0;
    while (i < 5) {
        if (i == 2) {
            ++i;
            continue;
        };
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    printf("\nDo while:\n");
    i = 0;
    do {
        printf("element %d is %d\n", i, array[i]);
        ++i;
    } while (i < 5);
    
    return 0;
}

#endif