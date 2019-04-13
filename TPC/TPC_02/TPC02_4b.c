#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int func_arr_f(int * arr){

	int i;

	for (i=0;i!=MAX;i++){
		if(arr[i]!='\0'){
				printf("El elemento n°%d contiene el valor:%d \n",(i+1),arr[i]);
				}
		}
		return 0;
}
