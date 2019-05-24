/**
	\file TPC03_3.c
	\brief trabajo práctico N°3 punto 3 - Info I.
	\details Ejercicio: Realizar una función que reciba un string y convierta todos sus caracteres a mayúscula, a minúscula o que cada palabra inicie con mayúscula y continúe con minúscula.
	\note ojo! cuando ingresa a la funcion cambia el valor de la variable opcion a 1

	\version 1.0
*/

/*!	\fn int main ()
	\brief Función principal
	\details retorna la cantidad de coincidencias que tuvo el caracter ingresado en el string.
	\return  retorna un int de la cantidad de coincidencias o 0 en caso que no la haya.
*/
#include <stdio.h>
#include <ctype.h>

char * xtr_chg_case (char * string, int opcion){

	int i=0;
	char c;

	switch(opcion){
			case 1:{																	//En este caso muetra todo en mayúsculas
						while (string[i]){
							c=string[i];											//Recorre el string letra por letra
								if  (islower(c)) c=toupper(c);	//controla si esa letra es minúscula
							putchar (c);
							i++;
						}
				break;
			}
			case 2:{
							while (string[i]){								//En este caso muetra todo en minúscula
								c=string[i];
							if (isupper(c)) c=tolower(c);
							putchar (c);
								i++;
							}
				break;
			}

			case 3:{
							while (string[i]){								//Solo imprime el primer caracter en mayúscula
								if (i==0){
										if(string[i]>=97 && string[i]<=122)	c=string[i]-32;
											else	c=string[i];
											putchar (c);
												i++;
								}
								c=string[i];
									if (isupper(c)) c=tolower(c);
									putchar (c);
										i++;
									}
				}
			}
	return string;
}
