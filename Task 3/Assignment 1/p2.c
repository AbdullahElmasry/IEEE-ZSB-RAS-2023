#include <stdio.h>

//  int x = 15; i have no idea why not accepting this declaration ??
#define x 15

struct student_info{
    int roll_number;
    char *name;
    int age;
    char *address;
    float marks;
};

struct student_info s[x];

void student_info(int roll_number, char *name, int age, char *address, float marks){
    
    int counter = 0;
    
    for(int i=1; i<=x; i++){
        roll_number = s[i].roll_number;
        name = s[i].name;
        age = s[i].age;
        address = s[i].address;
        marks = s[i].marks;
        
        printf("Roll Number is >> %d\n", roll_number);
        printf("Student Name Is >> %s\n",name);
        printf("Student Age Is >> %d\n",age);
        printf("Student Address Is >> %s\n",address);
        printf("Studnt Marks Is >> %f\n",marks);
        printf("================================\n");
        
        if (marks<12){counter++;}
    }
    
    printf("the total no. of students with less than 12 marks is >> %d",counter);
    
}

int main() {
    
    // s1
    s[1].roll_number = 1;
    s[1].name = "ali";
    s[1].age = 15;
    s[1].address = "zagazig";
    s[1].marks = 19.5;
    // s2
    s[2].roll_number = 2;
    s[2].name = "hany";
    s[2].age = 14;
    s[2].address = "zagazig";
    s[2].marks = 14.5;
    // s3
    s[3].roll_number = 3;
    s[3].name = "saad";
    s[3].age = 12;
    s[3].address = "zagazig";
    s[3].marks = 15.5;
    // s4
    s[4].roll_number = 4;
    s[4].name = "hasan";
    s[4].age = 15;
    s[4].address = "zagazig";
    s[4].marks = 14.5;
    // s5
    s[5].roll_number = 5;
    s[5].name = "norhan";
    s[5].age = 14;
    s[5].address = "zagazig";
    s[5].marks = 10.9;
    // s6
    s[6].roll_number = 6;
    s[6].name = "yasser";
    s[6].age = 15;
    s[6].address = "banha";
    s[6].marks = 19.5;
    // s7
    s[7].roll_number = 7;
    s[7].name = "nansy";
    s[7].age = 15;
    s[7].address = "zagazig";
    s[7].marks = 17.2;
    // s8
    s[8].roll_number = 8;
    s[8].name = "boruto";
    s[8].age = 15;
    s[8].address = "konoha";
    s[8].marks = 19;
    // s9
    s[9].roll_number = 9;
    s[9].name = "hinata";
    s[9].age = 11;
    s[9].address = "konoha";
    s[9].marks = 11;
    // s10
    s[10].roll_number = 10;
    s[10].name = "zyad";
    s[10].age = 16;
    s[10].address = "cairo";
    s[10].marks = 15.1;
    // s11
    s[11].roll_number = 11;
    s[11].name = "kakashi";
    s[11].age = 15;
    s[11].address = "konoha";
    s[11].marks = 20;
    // s12
    s[12].roll_number = 12;
    s[12].name = "maryam";
    s[12].age = 15;
    s[12].address = "zagazig";
    s[12].marks = 19;
    // s13
    s[13].roll_number = 13;
    s[13].name = "ali";
    s[13].age = 15;
    s[13].address = "zagazig";
    s[13].marks = 14;
    // s14
    s[14].roll_number = 14;
    s[14].name = "ali";
    s[14].age = 15;
    s[14].address = "zagazig";
    s[14].marks = 15;
    // s15
    s[15].roll_number = 15;
    s[15].name = "abdo";
    s[15].age = 13;
    s[15].address = "zagazig";
    s[15].marks = 13;
    
    for (int i=1; i<=x;i++){
        student_info(s[i].roll_number,s[i].name,s[i].age,s[i].address,s[i].marks);
        break;
    }

    return 0;
}