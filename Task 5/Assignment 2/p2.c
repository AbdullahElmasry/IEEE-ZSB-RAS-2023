#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int unique[256] = {0};
    char stop_code[] = "!!";

    while (1) {
        printf("Enter a string (or enter '!!' to stop): ");
        fgets(input, sizeof(input), stdin);

        if (strstr(input, stop_code) != NULL) {
            printf("Program stopped due to stop code.\n");
            break;
        }

        int new_arr_size = 0;
        for (int i = 0; i < strlen(input); i++) {
            if (unique[(int) input[i]] == 0) {
                unique[(int) input[i]] = 1;
                new_arr_size++;
            }
        }
        char new_arr[new_arr_size + 1];
        int j = 0;
        for (int i = 0; i < strlen(input); i++) {
            if (unique[(int) input[i]] == 1) {
                new_arr[j] = input[i];
                unique[(int) input[i]] = 0;
                j++;
            }
        }
        new_arr[j] = '\0';

        printf("New array: %s\n", new_arr);
        memset(unique, 0, sizeof(unique));
    }

    return 0;
}