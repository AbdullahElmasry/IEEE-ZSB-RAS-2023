#include <stdio.h>

int add(int j){
    j++;
    return j;
}


void main(){
    int (*p)(int);
    p = &add;
    int num;
    printf("Enter A Number: ");
    scanf("%d", &num);

    int m = p(num);

    printf("ur new num is = %d", m);
}
