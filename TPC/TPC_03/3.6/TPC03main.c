#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 20
/*Tengo que corregir este main*/
int main(){
	char str01[MAX]="HolaQueTal";
	const char str02[MAX]="Cómoestás";
	int  opc;
	char *resul=NULL;

	printf ("ingrese la opcion \n\t0.Cantidad de caracteres a copiar (debe ser menor a 20) \n\t1.Copiatodo\n");
	scanf("%d",&opc);
  getchar();

	resul= xtrcpy (str01, str02, opc);

	if (resul) printf("\nEl string fué copiado exitosamente: %s \n\n",resul);
	       else printf("\nEl string no pudo ser copiado\n");

	return 0;
}
