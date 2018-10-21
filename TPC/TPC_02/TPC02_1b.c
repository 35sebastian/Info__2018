/**
 * \file TPC02_1a.c
 * \brief determinara cual es mayor de los números ingresados 
 * \details Ejercicio:	Realizar una función que reciba dos números e imprima el mayor de ellos (si son iguales puede imprimir cualquiera de los dos)
 * \note esto también es para evaluar el comportamiento de Doxygen
 * \param a, b
 * \return 0 (cero) en caso de poder realizarse satisfactoriamente
 * \author Sebastian A. Vega
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int compara_ternario (int a, int b)
{
    int c;
    
    c=(a>b)?a:b;

        printf("El mayor valor ingresado es: %d ", c);
    

    return 0;
}
