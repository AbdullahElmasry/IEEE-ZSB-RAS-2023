#include <stdio.h>

struct database {
    
    struct shops_of {
        char name;
        char location;
    }shop;//total size are : 1 + 1 = 2 bytes
    
    struct product_info_of {
        int id;
        float price;
        int quantity;
    }product;// total size are : 4 + 4 + 4 = 12 bytes
    
    struct category {
        int id;
        int products_num;
    }category;//total size are : 4 + 4 = 8 bytes
}size;

int main() {
    
    printf("the size of this struct are >> %d\n\n", sizeof(size));
    printf("becuase the size of the struct equals the sum of all members, in this case we have 2 + 12 + 8 + 2'empty' = 24 bytes due to padding");

    return 0;
}