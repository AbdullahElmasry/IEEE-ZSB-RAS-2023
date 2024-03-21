#include <stdio.h>

enum milk{sum = 43, sub = 45, mul = 42, division = 47};

int calculator(int num1, int num2, char symbol){
    if(symbol == sum){
        printf("x + y = %d", num1 + num2);
    }

    else if(symbol == sub){
        printf("x - y = %d", num1 - num2);
    }

    else if(symbol == mul){
        printf("x * y = %d", num1 * num2);
    }

    else if(symbol == division){
        printf("x / y = %d", num1 / num2);
    }
    
}

int main(){
    int num1;
    int num2;
    char symbol;

    printf("the first number is >> ");
    scanf("%d", &num1);

    printf("the second number is >> ");
    scanf("\n%d", &num2);

    printf("the operation is >> ");
    scanf("\n%c", &symbol);

    calculator(num1, num2, symbol);
    
}