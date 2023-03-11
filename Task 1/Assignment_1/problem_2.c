// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i=5;
    int arr[] = {1, 2, 3, 4, 5, 6, 3, 4, 1, 8, 9, 7, 8, 4, 8};
    int arrLen = sizeof arr / sizeof arr[0];
    

  for (i = 0 ; i<arrLen; i++)
  {
      int counter = 0;
      for (int x = 0 ; x<arrLen; x++){
          
            if(arr[i] == arr[x]  && i != x){
                counter = 1;
                
            }
          
      }
       
       if (counter == 0){
           printf("%d",arr[i]);
       }
  };
    
    return 0;
}
