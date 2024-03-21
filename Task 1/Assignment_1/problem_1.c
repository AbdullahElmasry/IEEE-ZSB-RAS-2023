#include <stdio.h>


int size = 6;
//505

void main(){
    int arr[] = {0, 1, 0, 2, 0, 5, 8, 0};
    int count = 0;

    for(int i = 0; i < size; i++){
        for(int j = i +  1; j < size; j++){
            if(arr[j] == arr[i]){
                count++;
                break;
            }
        }
    }

    printf("%d", count);
}
