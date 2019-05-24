#include "ordenar.h"
#include "arr_aux.h"

#include <stdio.h>
#include <string.h>

#define SZ_ARR 100
#define ARR_DATA_RANGE 10000


int main ()
{
mi_tipo Arr[SZ_ARR];
mi_tipo Arr_aux[SZ_ARR];

	//! armamos el array base u original.
	make_array (Arr,SZ_ARR,ARR_DATA_RANGE);
	printf ("\n Test de Ordenamiento - Array original\n");fflush(stdout);

	prt_array_int (Arr,SZ_ARR);

	printf ("\n =========================================\n");
	printf ("\n Press Enter para Comenzar...");getchar();
	
	
	//! testeamos metodo de intercambio
	printf ("\n Start - Test Metodo de Inetrcambio\n");fflush(stdout);

	//! Copiamos array base sobre array de prueba
	memcpy (Arr_aux,Arr,sizeof(Arr));
	ord_intercambio (Arr_aux,SZ_ARR);
	prt_array_int (Arr_aux,SZ_ARR);

	printf ("\n =========================================\n");
	printf ("\n Press Enter para continuar...");getchar();


	//! testeamos metodo de burbujeo 1
	printf ("\n Start - Test Metodo de Burbujeo 1\n");fflush(stdout);

	//! Copiamos array base sobre array de prueba

	memcpy (Arr_aux,Arr,sizeof(Arr));
	ord_burbujeo (Arr_aux,SZ_ARR);
	prt_array_int (Arr_aux,SZ_ARR);

	printf ("\n =========================================\n");
	printf ("\n Press Enter para continuar...");getchar();

	//! testeamos metodo de burbujeo 2
	printf ("\n Start - Test Metodo de Burbujeo 2\n");fflush(stdout);

	//! Copiamos array base sobre array de prueba

	memcpy (Arr_aux,Arr,sizeof(Arr));
	ord_burbujeo_2 (Arr_aux,SZ_ARR);
	prt_array_int (Arr_aux,SZ_ARR);

	printf ("\n =========================================\n");
	printf ("\n Press Enter para continuar...");getchar();

	
	//! testeamos metodo de quicksort
	printf ("\n Start - Test Metodo de quicksort\n");fflush(stdout);

	//! Copiamos array base sobre array de prueba
	memcpy (Arr_aux,Arr,sizeof(Arr));
	ord_qsort (Arr_aux,SZ_ARR);
	prt_array_int (Arr_aux,SZ_ARR);

	printf ("\n =========================================\n");
	printf ("\n Press Enter para FINALIZAR...");getchar();

return 0;
}
