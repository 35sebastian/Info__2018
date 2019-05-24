/**
	\file TPC03_1.c
	\brief trabajo práctico N°3 punto 2 - Info I.
	\details Ejercicio:	Realizar una función que reciba un string y devuelva la cantidad de caracteres que posee.

	\note esto también es para evaluar el comportamiento de Doxygen

	\version 1.0
*/
#include "cabeceras.h"
#include <string.h>
#include <stdio.h>

int xtr_len (const char * string){

	int i;
	char a;

	for(i=0; i<20; i++){
			a=string[i];
			if (a == '\0') break;
	}
		if(i) return i;
	return 0;
}
