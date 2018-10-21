#include <stdio.h>

int es_impar (int num)
{
	num%=2;			//Realiza la division del número ingresado por dos y num toma el valor del resto
	if(num==0)
	{
		num=0;
		}
		else
			num=1;
			
	return num;		//La función retornará 1 si es impar y 0 en caso contrario.
		}
	
