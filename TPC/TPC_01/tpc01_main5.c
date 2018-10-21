#include <stdio.h>
#include "func.h"

int main ()
{
	int x,y,z,maximo;
	
	printf("ingrese el 1° numero entero:");
	scanf("%d", &x);
	printf("ingrese el 2° numero entero:");
	scanf("%d", &y);
	printf("ingrese el 3° numero entero:");
	scanf("%d", &z);
	
	maximo=max_valor(x,y,z);
	
	if(maximo!=0){
	printf("El valor más alto es: %d\n", maximo);
	}
	else{
		printf("Hay valores ingresados iguales");
		}
	
	return 0;	
	
	}
