#include <stdio.h>

struct info {
    
    char *name;
    int age;

}object,*pointer = &object;

int main() {
    
    object.name = "naruto";
    object.age = 31;
    
    printf("Object Name Is >> %s\n Object Age Is >> %d", (*pointer).name, (*pointer).age);

    return 0;
}