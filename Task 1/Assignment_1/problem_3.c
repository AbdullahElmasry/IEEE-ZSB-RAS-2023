#include <stdio.h>

int repeat(int arr[]){
    int c = 0;
    int freqArr[10];

    for(int i = 0; i < 10; i++){
        c++;

        if(arr[i] != -1){

            for (int j = i + 1; j < 10; j++){
                if(arr[i] == arr[j]){
                    c++;
                    arr[j] = -1;
                }
        }
    }

    freqArr[i] = c;
    c = 0;

    }

    for(int i = 0; i < 5; i++){
        if(arr[i] != -1){
            printf("no of %d is %d\n", arr[i],freqArr[i]);
        }
    }

}

int main(){
    int arr[] = {1, 2, 3, 4, 4, 3, 2, 1, 1, 4};
    repeat(arr);
}