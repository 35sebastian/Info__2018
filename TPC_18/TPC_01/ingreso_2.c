#include <stdio.h>
#include <stdlib.h>
#include "get_num.h"

int get_numr()
{
	int numero_ok,inf,sup,aux;

	numero_ok= get_num();

	printf("INGRESE LA COTA INFERIOR:");
	scanf("%d", &inf);
	printf("INGRESE LA COTA SUPERIOR:");
	scanf("%d", &sup);

	if(inf>sup)
	{
		aux=inf;
		inf=sup;
		sup=aux;
	}

	if(numero_ok>inf && numero_ok<sup){
		printf( "La cadena ingresada es: %d. El valor es valido\n", numero_ok);
	}
	else{
		printf( "El valor es invalido\n");
	}

	return numero_ok;
}
