/**
 * \file TPC02_1a.c
 * \brief determinara cual es mayor de los números ingresados 
 * \details Ejercicio:	Realizar una función que reciba dos números e imprima el mayor de ellos (si son iguales puede imprimir cualquiera de los dos)
 * \note esto también es para evaluar el comportamiento de Doxygen
 * \param a, b
 * \author Sebastian A. Vega
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int compara (int a, int b)
{
    if (a>b)
    {
        printf("El mayor valor ingresado es: %d ", a);
        }else if(b>a){
			printf("El mayor valor ingresado es %d\n ", b);
				}else{
					printf("Los Valores ingresados son iguales \n");
				}
			    
    return 0;
}
