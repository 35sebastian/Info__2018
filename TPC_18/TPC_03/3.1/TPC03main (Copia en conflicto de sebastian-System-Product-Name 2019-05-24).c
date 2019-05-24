#include <string.h>
#include <stdio.h>
#include "cabeceras.h"

int main()
{
	int i;
	const char string[20]="Holaquetal";
	i= xtr_len (string);
	printf("la cantidad de caracteres es:%d\n ", i);

	return 0;
}
