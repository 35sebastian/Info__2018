
#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int func_arr_break_cont(int * arr)
{
	int i=0;

	printf("ORDEN\t:\tVALOR\n");
	for (i=0; i<MAX; i++){

		if(arr[i]==0)										//continue, si cumple con el if vuelve al principio del for, incrementa y sigue.
			continue;
		if(arr[i]<0)break;							// break en caso que cumpla la sentencia if sale del bucle.
				if(arr[i]>=0)
				printf("%d\t:\t%d \n",i,arr[i]);

				}

	return 0;
}
