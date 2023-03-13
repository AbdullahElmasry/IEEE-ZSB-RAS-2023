#include <stdio.h>

void main(){
    int arr[] = {77, 2, 29, 17, 5};
    int *p = arr;

    for(int i = 0; i < 5; i++){
        printf("%d\n", *p);
        p++;
    }
}