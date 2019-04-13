#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 20

int main(){
		char str01[MAX]="HolaQueTal";
		char str02[MAX]="laQue";

		char *resul=NULL;

		resul= xtrxtr(str01, str02);

	if (resul) printf("\nEl caracter tiene su última coincidencia en la dirección: %p \n",	resul);
			else printf("\nNo se pudo realizar la comparación\n");
	return 0;
}
