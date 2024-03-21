#include <stdio.h>

int main() {
    int hour, minute, second, time;

    // Read the input time from the user
    printf("Enter a time in the format [hh:mm:ss]: ");
    scanf("%d:%d:%d", &hour, &minute, &second);

    // Store the input time in a single integer variable
    time = hour * 3600 + minute * 60 + second;

    // Print the time from the single integer variable
    printf("Time: %02d:%02d:%02d\n", time / 3600, (time % 3600) / 60, time % 60);

    return 0;
}