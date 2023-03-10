#include <stdio.h>

int main(){

    char s[99] = "Abdoooooo";
    for(int i = 0; i < 99; i++){

        if(s[i] != "\0"){

            printf("%c ", s[i]);
        }
    }
    return 0;
}