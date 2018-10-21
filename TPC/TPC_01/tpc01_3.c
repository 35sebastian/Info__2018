#include <stdio.h>

int es_primo (int num)
{	
	int aux, cont=0;				// Establesco el flag "cont" para saber si el el valor consultado fué divisible alguna vez por algun valor menor a él 
	
	for (aux=2; aux<num;aux++)		//	Comienza un bucle para realizar la división por todos los valores enteros menores al n° ingresado
	{
		num=num%aux;
		printf("el num es: %d el aux es: %d", num, aux);				//	Realiza el cociente entre el n° ingresado y los valores enteros menores a él
		if(num==0)					//	Si en algún caso fué divisible incrementa el flag 
		cont++;

	}
	
	if(cont==0)						//	Caso que no haya sido divisible el flag quedaría en cero, por lo tanto es primo.
			num=1;
		else
			num=0;					//	El flag habría incrementado y el valor sería divisible por uno menor, no es primo.
			
	return num;						//	La función retornará 1 si es primo y 0 en caso contrario.
		}
	

