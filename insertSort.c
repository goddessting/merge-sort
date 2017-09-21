#include <stdio.h>

void insertSort(int arr[]){
  int i,j;
  for(i = 2; i < 9; i++){
    if(arr[i] < arr[i=1]){
 	 arr[0] = arr[i];
         for(j = i - 1; arr[0] < arr[j]; j--){
           arr[j+1] = arr[j];
           arr[j] = arr[0]; 
         }
    }
  }
}

void main(){
  int i, arr[9] = {0, 33, 12, 25, 46, 33, 68, 19, 80};
  insertSort(arr);
  for(i = 1; i < 9; i++){
    printf("%d\t", arr[i]);
  }
}
