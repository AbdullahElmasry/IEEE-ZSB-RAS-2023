#include <stdio.h>

typedef struct complex{

    double real;
    double imaginary;
    
}comp;

comp sum(comp number1, comp number2){
    
    comp summation;
    summation.real = number1.real + number2.real;
    summation.imaginary = number1.imaginary + number2.imaginary;
    
    return summation;
}

int main() {
    
    comp number1;
    comp number2;
    comp summation;
    printf("enter the real and the imaginary numbers for the first complex number >> ");
    scanf("%lf %lf",&number1.real,&number1.imaginary);
    
    printf("enter the real and the imaginary numbers for the second complex number >> ");
    scanf("%lf %lf",&number2.real,&number2.imaginary);
    
    summation = sum(number1,number2);
    
    printf("the summatin is >> %lf + i%lf",summation.real, summation.imaginary);
    
    return 0;
}