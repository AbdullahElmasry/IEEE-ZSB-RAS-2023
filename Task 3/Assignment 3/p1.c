#include <stdio.h>

struct test {
    
    int id;
    char name;
    char class_id;

}t;

struct Test {
    
    char name;
    int id;
    char class_id;

}t2;

int main() {
    
    printf("First Case Size Is >> %d\n\n",sizeof(t));
    printf("as we know that the size of int are 4 bytes and char is 1 byte , and in case of the 32bit processor so the cycle of reading data in memory are 4 bytes so due to padding we get 4 + 1 + 1 + 2 => 'for the rest of the cycle of 4 bytes' so we get 8 bytes size\n\n");
    printf("---------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("Second Case Size Is >> %d\n\n",sizeof(t2));
    printf("in this case the the memory will store this members of struct in different way ,so we get 1 + 3'Empty' + 4 + 1 + 3'Empty' again that happens due to padding in memory , so we get 12 bytes (for 32bit processor)");

    return 0;
}