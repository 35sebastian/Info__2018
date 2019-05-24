#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int func_arr_dw(int * arr){

	int i=0;

		do{
				if(arr[i]!='\0'){
						printf("El elemento n°%d contiene el valor:%d \n",(i+1),arr[i]);
						}
				i++;
			}while (i!=MAX);

			return 0;
}
