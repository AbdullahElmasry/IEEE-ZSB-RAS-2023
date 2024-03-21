#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    //Write your logic to print the tokens of the sentence here.
    
    char *m = strtok(s, " "); 
    while (m != 0) 
    {
    printf("%s\n", m);
    m = strtok(0, " "); 
    }
    return 0;
}