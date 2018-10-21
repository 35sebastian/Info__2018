#include <stdio.h>

int es_par (int num)
{
	num%=2;			//Realiza la division del número ingresado por dos y num toma el valor del resto
	if(num==0)
	{
		num=1;		
		}
		else
			num=0;
			
	return num;		//La función retornará 1 si es par y 0 en caso contrario.
		}
	
