/**
	\file TPC03_2.c
	\brief trabajo práctico N°3 punto 2 - Info I.
	\details Ejercicio: Realizar una función que reciba un string y un carácter e informe la cantidad de veces que éste se repite en el string.

	\note esta es una nota

	\version 1.0
*/

/*!	\fn int main ()
	\brief Función principal
	\details retorna la cantidad de coincidencias que tuvo el caracter ingresado en el string.
	\return  retorna un int de la cantidad de coincidencias o 0 en caso que no la haya.
*/
#include <stdio.h>

int xtr_qtty (const char * string, char a){

	int i=0, coincide=0;

	while (string[i]){
					if(a ==string[i]){
								coincide++;
							}
					i++;
		}
		if (i!=0)	return coincide;
				else
					return 0;
}
