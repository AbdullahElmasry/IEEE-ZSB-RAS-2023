#include <stdio.h>


#define x 15

struct student_info
{
    unsigned int age : 8 ;   // can store from 0 >> 255 = 256 numbers
    unsigned int marks : 3 ; // can store from 0 >> 7
    unsigned int roll_number : 4 ; // can store from 0 >> 15

    char *name;
    char *address;

// bit-field doesnt work with any data type except integers


}s[x];


int print_struct(struct student_info student[x]){
    printf("Students Info:\n");

    for(int i = 0; i < x; i++){
        printf("The Name Is: %s\n", student[i].name);
        printf("The Address Is:  %s\n", student[i].address);
        printf("The Roll Number = %d\n", student[i].roll_number);
        printf("The Age Is: %d\n", student[i].age);
        printf("The Marks = %d\n", student[i].marks);
        printf("--------------------------------------------------------\n");
    }
}


int main(){

    printf("The Total Size Of Struct Is: %d\n", sizeof(struct student_info));

//  

    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    
    s[0].roll_number = 1;
    s[0].name = "ali";
    s[0].age = 15;
    s[0].address = "zagazig";
    s[0].marks = 19.5;

    s[1].roll_number = 2;
    s[1].name = "hany";
    s[1].age = 14;
    s[1].address = "zagazig";
    s[1].marks = 14.5;

    s[2].roll_number = 3;
    s[2].name = "saad";
    s[2].age = 12;
    s[2].address = "zagazig";
    s[2].marks = 15.5;

    s[3].roll_number = 4;
    s[3].name = "hasan";;
    s[3].age = 15;
    s[3].address = "zagazig";
    s[3].marks = 14.5;

    s[4].roll_number = 5;
    s[4].name = "norhan";
    s[4].age = 14;
    s[4].address = "zagazig";
    s[4].marks = 10.9;

    s[5].roll_number = 6;
    s[5].name = "yasser";
    s[5].age = 15;
    s[5].address = "banha";
    s[5].marks = 19.5;

    s[6].roll_number = 7;
    s[6].name = "nansy";
    s[6].age = 15;
    s[6].address = "zagazig";
    s[6].marks = 17.2;

    s[7].roll_number = 8;
    s[7].name = "boruto";
    s[7].age = 15;
    s[7].address = "konoha";
    s[7].marks = 19;

    s[8].roll_number = 9;
    s[8].name = "hinata";
    s[8].age = 11;
    s[8].address = "konoha";
    s[8].marks = 11;

    s[9].roll_number = 10;
    s[9].name = "zyad";
    s[9].age = 16;
    s[9].address = "cairo";
    s[9].marks = 15.1;

    s[10].roll_number = 11;
    s[10].name = "kakashi";
    s[10].age = 15;
    s[10].address = "konoha";;
    s[10].marks = 20;

    s[11].roll_number = 12;
    s[11].name = "maryam";
    s[11].age = 15;
    s[11].address = "zagazig";
    s[11].marks = 19;

    s[12].roll_number = 13;
    s[12].name = "ali";
    s[12].age = 15;
    s[12].address = "zagazig";
    s[12].marks = 14;

    s[13].roll_number = 14;
    s[13].name = "ali";
    s[13].age = 15;
    s[13].address = "zagazig";
    s[13].marks = 15;

    s[14].roll_number = 15;
    s[14].name = "abdo";
    s[14].age = 13;
    s[14].address = "zagazig";
    s[14].marks = 13;

    print_struct(s);

}