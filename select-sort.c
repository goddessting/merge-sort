#include <stdio.h>

int main(){
int i, j, temp;
int array[10];
for(i = 0; i < 10; i++){
 scanf("%d",&array[i]);
}

printf("排序前的数组：\n");
for(i = 0; i < 10; i++){
  printf("%d\t",array[i]);
}

for(i = 0; i < 9; i++){
 int k = i;
 for(j = i + 1; j < 10; j ++){
   if(array[k] > array[j]){
	k = j;	
   }
 }
   if(k != i){
     temp = array[i];
     array[i] = array[k];
     array[k] = temp;
   }
}  

printf("排序后的数组：\n");
for(i = 0; i < 10; i++){
  printf("%d\t",array[i]);
}
}
