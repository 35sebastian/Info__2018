/**
\file comun.c
\brief funciones comunes utilizadas en Info I.

\version 1.0
*/


#include "comun.h"
#include <stdio.h>

/*!
\fn int ing_legajo (void)

\brief ingreso de legajo
\details Se verifica solamente que el legajo no sea negativo

\return legajo ingresado

\version 2.0 (diferente a la realizada en clase)

\todo agregar un rango de valores posible y numero verificador

*/

int ing_legajo (void)
{
	int leg;

	printf("Ingrese Legajo:");

	while (1)
	{
		scanf("%d",&leg);
		if (leg<0)
		{
			printf("Error de ingreso - Ingrese Legajo:");
			continue;
		}
		break;
	}
	return leg;
}


/*!
\fn int ing_nota (void)

\brief ingreso de notas
\details Se solicita el ingreso de datos y se acepta si el valor
se encuentra entre 0 y 10.

\return nota ingresado

\version 2.0 (diferente a la realizada en clase)

*/
int ing_nota (void)
{
	int nn;

	printf("Ingrese Nota:");

	while (1)
	{
		scanf("%d",&nn);
		if (nn<0 || nn>10)
		{
			printf("Error de ingreso - Ingrese Nota:");
			continue;
		}
		break;
	}

	return nn;
}



/*!
\fn int buscar (int ,int [],int )

\brief buscar un valor dentro de un array

\param[in] cc - canidad de elementos en el array
\param[in] arr - array sobre el cual se realiza la busqueda
\param[in] key - elemento a buscar

\return >=0 : posici�n del elemento dentro del array \
-1 : NO se encontro elemento

\version 0.1

*/

int buscar (int cc,int arr[],int key)
{
	int j;

	for(j=0 ; j<=cc ; j++)
	{
		if(arr[j]==key)
		return j;
	}
	return -1;
}
