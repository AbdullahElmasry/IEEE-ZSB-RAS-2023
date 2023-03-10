#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 3, 4, 1, 8, 9, 7, 8};

    for(int i = 0; i < 13; i++){

        int count = 0;
        
        for(int x = 0; x < 13; x++){
        
            if(arr[i] == arr[x] && i != x){
        
                count = 1;
        
            }
        
        }
        if(count == 0){


            printf("%-4d", arr[i]);
        }
    }
}