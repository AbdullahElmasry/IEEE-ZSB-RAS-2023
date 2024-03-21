#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    for(int i =0;i<3;i++)
    {
        char s[505];
        scanf("%[^\n]%*c", &s);
        
    
        printf("%s\n", s);
    }   
    return 0;
}