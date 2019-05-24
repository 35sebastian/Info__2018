/*
Realice una función que reciba un string y convierta todos sus caracteres a mayúscula, a minúscula o que cada palabra inicie con mayúscula y continúe con minúscula.
	char * xtr_chg_case (char *, int);
*/

#include <stdio.h>
#include <ctype.h>
#include "cabecera.h"

int main(){
	char string[20] ="HolaQueTal";
	//int a;

	int opcion;

	printf ("ingrese una opcion: \n 1)Todo mayusculas \n 2)Todo minusculas \n 3)Empice con mayuscula y siga con minusculas \n\n");
	scanf("%d", &opcion);
	getchar();														//absorbe el caracter que queda en el Buffer stdin

	xtr_chg_case (string, opcion);

	printf("\n" );
	return 0;
}
