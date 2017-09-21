#include <stdio.h>

int main(){
int i, j, change = 1;
int array[10] = {48,62,35,77,55,14,35,98,22,40};
printf("排序前的数组：\n");
for(i = 0; i < 10; i++){
	printf("%d\t",array[i]);
}
printf("\n");
for(i = 0; i < 10 && change; i++){
  change = 0;
  for(j = 0; j < 10 - i -1; j++){
	change = 0;
        if(array[j] > array[j + 1]){
  		int temp = array[j];
		array[j] = array[j+1];
		array[j+1] = temp;
		change = 1;
   	}
  }
}

printf("排序后的数组为：\n");
for(i = 0; i < 10; i++){
	printf("%d\t",array[i]);
}
}
