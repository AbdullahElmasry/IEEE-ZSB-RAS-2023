#include <stdio.h>

enum milk{sum = 43, sub = 45, mul = 42, division = 47};

int main(){

    printf(" the size of this enum is >> %d", sizeof(enum milk));
    // the size of an enum is constant, so if we add more members we get the same size.
    return 0;
}
