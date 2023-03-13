#include <stdio.h>

int main() {
    
    int *p1;
    char *p2 = "hi";
    long long *p3;
    
    printf("P1 first value is >> %d\n", p1);
    p1++;
    printf("P1 second value is >> %d\n", p1);
    
    /* as we see the first value of the pointer was 0 and when
    we add a step the next value became 4, that happend becuase the 
    integers type of data requires 4 bits in the memory.
    */
    
    //---------------------------------------------
    
    printf("P2 first value is >> %s\n", p2);
    p2++;
    printf("P2 second value is >> %s\n", p2);
    
    /*
    i have no idea what happend in the results but, i know 
    that the char type of data requires 1 bit of memory to 
    store it, so every step would take one bit.
    */
    
    //---------------------------------------------
    
    printf("P3 first value is >> %ld\n", p3);
    p3++;
    printf("P3 second value is >> %ld\n", p3);
    
    /*
    as we see the first value of the pointer was 0 and when
    we add a step the next value became 8, that happend becuase the 
    long long type of data requires 8 bits in the memory,
    so each step would increase the value by 8 bits.
    */
    
    return 0;
}