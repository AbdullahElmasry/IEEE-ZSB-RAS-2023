

#include <stdio.h>

int main()
{
    int x = 1, y = 2, z = 3;
    int *p , *q , *r ;

    p = &x;
    q = &y;
    r = &z;


    printf("The Value X = %d\n", x);
    printf("The Value Y = %d\n", y);
    printf("The Value Z = %d\n", z);
    printf("The Value p = %d\n", p);
    printf("The Value q = %d\n", q);
    printf("The Value r = %d\n", r);
    printf("The Value p = %d\n", p);
    printf("The Value q = %d\n", q);
    printf("The Value r = %d\n", r);


    printf("Swapping Pointers\n");

///////////////////////////
    r = p;  //////////////
    p = q;  /////////////
    q = r;  ////////////
///////////////////////////

    printf("The Value X = %d\n", x);
    printf("The Value Y = %d\n", y);
    printf("The Value Z = %d\n", z);
    printf("The Value p = %d\n", p);
    printf("The Value q = %d\n", q);
    printf("The Value r = %d\n", r);
    printf("The Value p* = %d\n", *p);
    printf("The Value q* = %d\n", *q);
    printf("The Value r* = %d\n", *r);

}
