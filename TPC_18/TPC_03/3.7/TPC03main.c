#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 20

int main(){
	char str01[MAX]="HolaQueTal";
	const char c='a';
		char *resul=NULL;

		resul= xtrchr(str01, c);

	if (resul) printf("\nEl caracter tiene su primer coincidencia en la dirección: %p \n",	resul);
			else printf("\n El caracter no se encuentra en el string\n");
	return 0;
}
