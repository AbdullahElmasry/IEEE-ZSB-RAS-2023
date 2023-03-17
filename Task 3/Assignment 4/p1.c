#include <stdio.h>

union database {
    
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
    
    printf("the size of this union are >> %d\n\n", sizeof(size));
    printf("becuase the size of the union equals the largest member's size");

    return 0;
}