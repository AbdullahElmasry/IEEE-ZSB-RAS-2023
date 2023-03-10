#include <stdio.h>

void main(){
    unsigned int x  = -1;
    printf("%u\n", x);
    if(x == 2147483649){
        printf("Sign Magnitude");
    }

    else if (x == 4294967294)
    {
        printf("1S Compliment");
    }

    else if (x == 4294967295)
    {
        printf("2S Compliment");
    }

}