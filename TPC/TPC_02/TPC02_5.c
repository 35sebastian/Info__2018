
#include <stdio.h>
#include <stdlib.h>
//#define COLOR "\n el color seleccionado es el :"



int func_arr(int arr[])
{	
	int i=0;
	do
	{
		if(arr[i]!='0')
			{
				printf("El elemento n°%d contiene el valor:%d \n",(i+1),arr[i]);
				
			}
				i++;
		}while (arr[i]!='\0');
	
	return 0;
}

