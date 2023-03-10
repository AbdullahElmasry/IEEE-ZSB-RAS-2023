#include <stdio.h>

int add(int fNum,int sNum){
    int sum = 0;
    sum = fNum +sNum;
    return sum;
}

int main(){
    int fNum;
    int sNum;
    int sum = 0;

    printf("Enter First Num: ");
    scanf("%d", &fNum);
    printf("Enter Second Num: ");
    scanf("%d", &sNum);

    sum = add(&fNum, &sNum);

    printf("The Sum = %d", sum);
}