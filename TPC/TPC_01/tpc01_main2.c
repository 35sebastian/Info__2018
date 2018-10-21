#include <stdio.h>
#include "func.h"
	
int main()
{
	int a;
	
	printf("ingrese un numero entero:");
	scanf("%d", &a);
	
	if(es_primo(a)==1){
	printf("El numero ingresado es par\n");
	}else
	printf("El numero ingresado es impar\n");
	
	
	return 0;
}
