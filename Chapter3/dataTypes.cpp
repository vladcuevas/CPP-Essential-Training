#include "dataTypes.h"
using namespace std;

void integerTypes::execute(void)
{
    printf("\nIntegerTypes:\n");

    printf("sizeof char is %ld bits\n", sizeof(char) * byte);
    printf("sizeof short int is %ld bits\n", sizeof(short int) * byte);
    printf("sizeof int is %ld bits\n", sizeof(int) * byte);
    printf("sizeof long int is %ld bits\n", sizeof(long int) * byte);
    printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);
}

int integerTypes::executeFixedSize()
{
    printf("\nInteger Types from cstdint:\n");

    printf("sizeof int8_t is %ld bits\n", sizeof(int8_t) * byte);
    printf("sizeof int16_t int is %ld bits\n", sizeof(int16_t) * byte);
    printf("sizeof int32_t is %ld bits\n", sizeof(int32_t) * byte);
    printf("sizeof int32_t is %ld bits\n", sizeof(int64_t) * byte);

    printf("\nUnsigned Integer Types from cstdint:\n");
    printf("sizeof uint8_t is %ld bits\n", sizeof(uint8_t) * byte);
    printf("sizeof uint16_t int is %ld bits\n", sizeof(uint16_t) * byte);
    printf("sizeof uint32_t is %ld bits\n", sizeof(uint32_t) * byte);
    printf("sizeof uint32_t is %ld bits\n", sizeof(uint64_t) * byte);
    return 0;
}

int floatTypes::execute() {
    printf("\nFloat Types:\n");

    float f;
    double df;
    long double ldf;

    printf("size of float f is %ld bits\n", sizeof(f) * byte);
    printf("size of double float df is %ld bits\n", sizeof(df) * byte);
    printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);

    ldf = .1 + .1 + .1;
    if (ldf == .3)
        puts("True");
    else
        puts("False");

    printf("Value of ldf is %1.20Lf\n", ldf);

    return 0;
}

int charAndStringsTypes::execute() {

    printf("\nCharacter and String Types:\n");

    char cstring[] = "Vladimir" " Cuevas \u03bc \x40"; //concatenate
    printf("The string is: %s\n", cstring);

    for (unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n", i, cstring[i]);
    }
    return 0;
}

void preferences::execute(void)
{
    printf("\nBitFields:\n");

    struct preferences homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;

    printf("sizeof int: %ld bits\n", sizeof(int) * 8);
    printf("sizeof homer: %ld bits\n", sizeof(homer) * 8);

    if (homer.likesMusic) printf("homer likes music\n");
    if (homer.hasHair) printf("homer has hair\n");
    if (homer.hasInternet) printf("homer has net\n");
    if (homer.hasDinosaur) printf("homer has a dino\n");
    printf("homer has %d children\n", homer.numberOfChildren);
}

void autoType::execute()
{
    printf("\nAuto Type:\n");
    auto x = func();
    printf("x is %s\n", x.c_str());
    if (typeid(x) == typeid(string)) puts("x is string");
}

string autoType::func()
{
    return string("this is a string");
}

void nullPointer::execute()
{
    printf("\nNull Pointers:\n");
    f(NULL); 
    f(nullptr); //null pointer
}

void nullPointer::f(int i) {
    printf("the int is %d\n", i);
}

void nullPointer::f(const char* s) {
    printf("the pointer is %p\n", s);
}