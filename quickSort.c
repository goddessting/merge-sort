#include<stdio.h>
void quikSort(int arr[], int left, int right);

void main(){
  int i = 0, arr[5] = {5, 1, 2, 4, 3};
  quikSort(arr, 0, 4);
  for(i = 0; i < 5; i++){
	printf("%d\t",arr[i]);
  } 
}

void quikSort(int arr[], int left, int right){
   int i, j, temp;
   if(left < right){
	i = left; //i指向的位置始终可以用来作临界存储单元；
	j = right;
	temp = arr[i];
 	while(i < j){
		while(i < j && arr[j] > temp) j--;
		if(i < j){
			arr[i++] = arr[j];
		}
		while(i < j && arr[i] < temp) i++;
   		if(i < j){
			arr[j--] = arr[i];
		}
	}
	arr[i] = temp;	
  	quikSort(arr, left, i - 1);
	quikSort(arr, i + 1, right);
   	
   }
}
