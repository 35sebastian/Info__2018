
#include <stdio.h>
#include <stdlib.h>


int func_arr_break_cont(int arr*)
{
	int i=0;
	do
	{
		if(arr[i]<'0')
			break;
			else if(arr[i]=='0')
				continue;
		if(arr[i]>'0'){
				printf("El elemento n°%d contiene el valor:%d \n",(i+1),arr[i]);
				}
			i++;
		}while (arr[i]!='\0');

	return 0;
}
