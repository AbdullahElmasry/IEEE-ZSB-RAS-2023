#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */  

	char arr[50505];
	int x[10] = {0}; 
	int i, lenth;

	// taking input
	scanf("%s", arr);
	// getting lenth of array
	lenth = strlen(arr);

	// GETTING THE FREQUENCY
	for (i = 0; i < lenth; i++) {
	if (arr[i] >= '0' && arr[i] <= '9') {
		x[arr[i] - '0']++;
	}
	}
	
	for (i = 0; i < 10; i++) { printf("%d ", x[i]); }
}


