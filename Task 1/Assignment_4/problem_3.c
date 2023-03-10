#include <stdio.h>

int main()
{
    char x[99] = "Abdoooo";

    char y[99] = "Abdoooo";
    int compare = 1;

    for (int i = 0; i < 99; i++)
    {

        if (x[i] != y[i]){
            compare = 0;
            break;
        }
        
    }
    
    if(compare == 0){
        printf("x != y");
    }

    else{
        printf("x = y");
    }
return 0;
}