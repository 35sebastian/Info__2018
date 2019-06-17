#include <stdio.h>
#include <stdlib.h>


int get_num(void)
{
	int numero;
	char str[MAX];

	printf("Ingrese el valor a comparar:");
	fgets(str,MAX, stdin);

	numero = atoi(str);

	return numero;
}
