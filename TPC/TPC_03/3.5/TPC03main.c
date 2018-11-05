#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "cabecera.h"
#define MAX 20

int main(){
	const char str01[MAX]="HolaQueTal";
	const char str02[MAX]="HolaqueTal";
	int resul, opc;

	printf ("ingrese la opcion \n0.CaseSensitive \n1.No CaseSensitive\n");
	scanf("%d",&opc);
  getchar();

	resul= xtr_cmp (str01, str02, opc);

	if (resul ==0) printf("\nlos strings son iguales\n");
	       else printf("\nlos strings son distintos y su relacion es: %d\n", resul);

	return 0;
}
