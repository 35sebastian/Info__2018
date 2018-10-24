#include <stdio.h>
#include <stdlib.h>


int func_arr_f(int * arr){

	int i;

	for (i=0;arr[i]!='\0';i++){
		if(arr[i]!='0'){
				printf("El elemento n°%d contiene el valor:%d \n",(i+1),arr[i]);
				}
		}
		return 0;
}
