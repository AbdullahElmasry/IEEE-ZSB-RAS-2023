#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, *ptr3;
    int n1 = 5, n2 = 7, n3 = 10;

    // Allocate memory using malloc()
    ptr1 = (int*) malloc(n1 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed for ptr1.\n");
    } else {
        printf("Memory allocation successful for ptr1.\n");
    }

    // Assign values to the memory block
    for (int i = 0; i < n1; i++) {
        ptr1[i] = i + 1;
    }

    // Allocate memory using calloc()
    ptr2 = (int*) calloc(n2, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed for ptr2.\n");
    } else {
        printf("Memory allocation successful for ptr2.\n");
    }

    // Assign values to the memory block
    for (int i = 0; i < n2; i++) {
        ptr2[i] = (i + 1) * 2;
    }

    // Allocate memory using realloc()
    ptr3 = (int*) realloc(ptr1, n3 * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory reallocation failed for ptr3.\n");
    } else {
        printf("Memory reallocation successful for ptr3.\n");
    }

    // Assign new values to the memory block
    for (int i = n1; i < n3; i++) {
        ptr3[i] = (i + 1) * 3;
    }

    // Print the values in each memory block
    printf("Values in ptr1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    printf("Values in ptr2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    printf("Values in ptr3: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", ptr3[i]);
    }
    printf("\n");

    // Free the memory blocks
    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}