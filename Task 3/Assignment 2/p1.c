#include <stdio.h>

struct Date {
    
    char *day;
    char *month;
    char *year;

}d1,d2;

int main() {
    
    //First date Entry
    printf("Enter the first date >> \n");
    scanf("%s %s %s",&d1.day,&d1.month,&d1.year);
    
    //Second date Entry
    printf("Enter the second date >> \n");
    scanf("%s %s %s",&d2.day,&d2.month,&d2.year);
    
    //Checking if the two dates equals or not
    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year){
        printf("Dates are equal");
    }
    
    else{ printf("Dates are not equal"); }

    return 0;
}