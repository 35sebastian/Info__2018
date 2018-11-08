#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 20

int main(){
	char str01[MAX]="HolaQueTal";
	const char c='a';
	int  opc;
	char *resul=NULL;

		resul= xtrrchr(str01, c);

	if (resul) printf("\nEl string fué copiado exitosamente: %p \n",	resul);
	       printf("\nEl string no pudo ser copiado\n");

	return 0;
}
