#include <stdio.h>

int main() {
    
    typedef int integer;
    typedef char string;
    typedef short shortTnteger;
    typedef long longInteger;
    typedef float decimalInt;
    typedef double decimalLongInt;
    
    printf("the size of integer >> %d \n", sizeof(integer));
    printf("the size of string >> %d \n", sizeof(string));
    printf("the size of shortTnteger >> %d \n", sizeof(shortTnteger));
    printf("the size of longInteger >> %d \n", sizeof(longInteger));
    printf("the size of decimalInt >> %d \n", sizeof(decimalInt));
    printf("the size of decimalLongInt >> %d \n", sizeof(decimalLongInt));

    return 0;
}