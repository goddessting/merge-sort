#include<stdio.h>
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int right, int m);

void main(){
	int arr[8] = {46, 12, 33, 72, 68, 19, 80, 33}, i;
	mergeSort(arr, 0, 7);
	 //int arr[8] = {12, 33, 46, 72, 19, 33, 68, 80}, i;
	//merge(arr, 0, 7, 3);
	for(i = 0; i < 8; i++){
		 printf("%d\t", arr[i]);	
	}  
}

void mergeSort(int arr[], int left, int right){
	 int middle;
	 if(left < right){
		middle = (left + right)/2;
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);
		merge(arr, left, right, middle);
	}	
}

void merge(int arr[], int left, int right, int m){
	int j, l = left, r = m + 1, arrCopy[8];
	for(j = left; j <= right; j++){
		arrCopy[j] = arr[j];
	}
	j = left;
	while(l <= m && r <= right){
		if(arrCopy[l] <= arrCopy[r]){
			arr[j] = arrCopy[l];
			l++;
		}else{
			arr[j] = arrCopy[r];
			r++;
		}
		j++;	
	}
	
	while(l <= m){
		arr[j] = arrCopy[l];
		l++;
		j++;
	}
	while(r <= right){
		arr[j] = arrCopy[r];
		j++;
		r++;
	}
}
