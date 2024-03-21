#include <stdio.h>

int main() {
    int n;

    printf("Enter any number up to 1000 : ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n < 0 || n > 1000) {
        printf("INPUT IS NOT VALID\n");
        return 1;
    }

// the output >> 
    if (n == 1) {
        printf("1\n");
    } else if (n >= 2) {
        for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                int min;
                if (i < j) {
                    min = i;
                } else {
                    min = j;
                }
                if (2 * n - 1 - i - 1 < min) {
                    min = 2 * n - 1 - i - 1;
                }
                if (2 * n - 1 - j - 1 < min) {
                    min = 2 * n - 1 - j - 1;
                }
                printf("%d ", n - min);
            }
            printf("\n");
        }
    }

    return 0;
}