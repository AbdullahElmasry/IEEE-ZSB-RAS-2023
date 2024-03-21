#include <stdio.h>

int main() {
    
    int x = 0x123456;
    int *ptr = &x;
    printf("%d",&x);
    
    ++*ptr;
    printf("%d\n", *ptr);
    // this increment will increase the value of the pointer by 1

    //------------------------------------------

    *ptr++;
    printf("%d\n", *ptr);
    // this will make the pointer to step to the next element
    
    //------------------------------------------
    
    *++ptr;
    printf("%d\n",*ptr);
    printf("The Pointer Will Go To The NextElement And Take Its Value\n");
    // the pointer will store the next elment's value
    
    return 0;
}