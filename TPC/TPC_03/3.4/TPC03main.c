#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "cabecera.h"

int main(){
	const char str01[20]="HolaQueTal";
	const char str02[20]="HolaqueTal";
	int resul;

	resul= xtr_cmp (str01, str02);

	if (resul ==0)
				printf("\nlos strings son iguales\n");
	if(resul!=0)
				printf("\nlos strings son distintos y su relacion es: %d\n", resul);

	return 0;
}
