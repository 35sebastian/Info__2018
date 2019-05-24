#include <stdio.h>
#include "func.h"


int main ()
{
	int x,y,z, minimo;
	
	printf("ingrese el 1° numero entero:");
	scanf("%d", &x);
	printf("ingrese el 2° numero entero:");
	scanf("%d", &y);
	printf("ingrese el 3° numero entero:");
	scanf("%d", &z);
	
	minimo=min_valor(x,y,z);
	
	if(minimo(x,y,z)!=0){
	printf("El valor más bajo es: %d", minimo);
	}
	else{
		printf("Hay valores ingresados iguales");
		}
	
	return 0;	
	
	}
