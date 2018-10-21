#include <stdio.h>
#include "func.h"

int main()
{
	int x,y,z, minimo, maximo,max=0,min=0; 
	
	printf("ingrese el 1° numero entero:");
	scanf("%d", &x);
	printf("ingrese el 2° numero entero:");
	scanf("%d", &y);
	printf("ingrese el 3° numero entero:");
	scanf("%d", &z);
	
	maximo=max_valor(x,y,z);
	minimo=min_valor(x,y,z);
	
	max_min_valor(x,y,z, &max, &min);
	
	if(minimo!=0 && maximo!=0){
	printf("El valor más bajo es: %d\n", min);
	
	printf("El valor más alto es: %d\n", max);
	}
	
			else{
				printf("Hay valores ingresados iguales");
				}
		
	return 0;	
}

