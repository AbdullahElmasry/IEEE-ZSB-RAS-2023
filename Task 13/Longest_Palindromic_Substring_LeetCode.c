#include <stdio.h>
#include <string.h>

int main(){
    int counter=0;
    int max_len = 0;
    char s[] = "abcabcb";
    int s_len = strlen(s);
    for(int i=0; i < s_len; i++)
    {
        for(int j= i + 1; j < s_len; j++)
        {
            if(s[i] != s[j])
            {
                counter++;
            }
            else
            {
                counter = max_len;
                counter = 0;
            }
        }
    }
    printf("the max length is : %d",max_len);

    return 0;
}