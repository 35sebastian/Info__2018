
#include <stdio.h>
#include <stdlib.h>
//#define COLOR "\n el color seleccionado es el :"

//da Warning por la comparación a NULL

int func_arr(int arr[], int t)
{	
	int i=0;
	while (arr[i]!=NULL)
	{
		if(arr[i]!='0')
			{
				printf("El elemento n°:%d contiene el valor:%d \n",i,arr[i]);
				printf("%d", arr[i]);
			}
				i++;
		}
	
	return 0;
}

