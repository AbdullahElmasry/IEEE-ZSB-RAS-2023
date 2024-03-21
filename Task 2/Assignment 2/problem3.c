#include <stdio.h>

int var = 5;

void print( );

int add(){
    static int num = 0; 
    num++;
    printf("Num: %d\n", num);
}

void main(){
    auto int x;
    register int y = 1;

    printf("Address Of x = %d\n", &x); 
    printf("Var = %d\n", var);
    print( );
    add();
    add();
    add();
}