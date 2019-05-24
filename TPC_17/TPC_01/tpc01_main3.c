#include <stdio.h>
#include "func.h"
	
int main()
{
	int a;
	
	printf("ingrese un numero entero:");
	scanf("%d", &a);
	
	if(es_primo(a)==0){
	printf("El numero ingresado es primo\n");
	}else
	printf("El numero ingresado es no primo\n");
	
	
	return 0;
}



