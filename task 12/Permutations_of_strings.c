#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int i, j, k;
    
    for (i = n-2; i >= 0; i--) {
        if (strcmp(s[i], s[i+1]) < 0) {
            break;
        }
    }
    if (i < 0) {
        return 0;
    }
    
    for (j = n-1; j > i; j--) {
        if (strcmp(s[j], s[i]) > 0) {
            break;
        }
    }
    
    char *tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    
    for (k = i+1, j = n-1; k < j; k++, j--) {
        tmp = s[k];
        s[k] = s[j];
        s[j] = tmp;
    }
    return 1; 
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}