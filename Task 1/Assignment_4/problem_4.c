#include <stdio.h>


int main(){
    char z[999] = "IEEE RAS TEAM";
    char y[999];

    for(int x = 0; x < 999; x++){

        y[x] = z[x];

    }

    printf("The New Value Is :\n " );
    for(int j = 0; j < 999; j++){
        printf("%c", y[j]);
    }
}