#include <stdio.h>

int main(){

    char String[60];

    printf("Enter Your String Sir: ");
    fgets (String, 60, stdin);
    printf("Your String Is: %s", String);
    
}