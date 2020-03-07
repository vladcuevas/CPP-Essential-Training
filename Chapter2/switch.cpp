// switch.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include "switch.h"

using namespace std;

int switchMe() {
    printf("\nSwitch:\n");

    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;
    
    int x = 3;
    
    switch(x) {
        case iONE:
            puts("one");
            break; //Break will stop the switch
        case iTWO:
            puts("two");
            break;
        case iTHREE:
            puts("three");
            break;
        case iFOUR:
            puts("four");
            break;
        default:
            puts("default");
            break;
    }

    return 0;
}
