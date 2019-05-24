/*
Realice una función que reciba un string y un carácter e informe la cantidad de veces que éste se repite en el string.
			int xtr_qtty (const char *, char);
*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "cabecera.h"

int main()
{
	char string[20] ="HolaQueTal";
	char a;
	a= 'a';
	int i=xtr_qtty (string, a);
	printf("\n El la letra '%c' se repite:%d veces en el string \n",a, i);

	return 0;
}
