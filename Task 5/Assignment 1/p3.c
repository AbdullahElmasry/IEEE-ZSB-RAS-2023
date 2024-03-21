#include <stdio.h>
#include <string.h>

int main() {
    char name[100], max_len_str[10];
    int max_len, freq[256] = {0}, max_freq = 0;

    // Read the maximum length from the user
    printf("Enter the maximum length of the name: ");
    gets(max_len_str);
    max_len = atoi(max_len_str);

    // Read the name input from the user
    printf("Enter your name: ");
    gets(name);

    // Check if the name exceeds the maximum length
    if (strlen(name) > max_len) {
        printf("Error: Name exceeds the maximum length of %d characters.\n", max_len);
        return 0;
    }

    // Print the name entered by the user
    printf("Name: %s\n", name);

    // Calculate the frequency of each character in the name
    for (int i = 0; i < strlen(name); i++) {
        freq[(int) name[i]]++;
    }

    // Find the frequency of the most repeated character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    // Print the frequency of the most repeated character
    printf("Frequency of the most repeated character: %d\n", max_freq);

    return 0;
}