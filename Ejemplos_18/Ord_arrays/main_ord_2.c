#include "ordenar.h"
#include "arr_aux.h"
#include <sys/time.h>

#include <stdio.h>
#include <string.h>

#define SZ_ARR 10000

#define TT_CALC_SEG(t1,t2) (int)(((t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec))/1000000)
#define TT_CALC_USEG(t1,t2) (int)(((t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec))%1000000)


int main ()
{
mi_tipo Arr[SZ_ARR];
mi_tipo Arr_aux[SZ_ARR];
struct timeval ti,tf;

	printf ("\n Start Test - Array Size: %d",SZ_ARR);
	printf ("\n Making Array");	fflush(stdout);
	
	//! armamos el array base u original.
	make_array (Arr,SZ_ARR,0);
	
	//! testeamos metodo de intercambio
	//! Copiamos array base sobre array de prueba
	memcpy (Arr_aux,Arr,sizeof(Arr));
	printf ("\n Inicia Metodo de Intercambio:");fflush(stdout);

	gettimeofday(&ti, NULL);
	ord_intercambio (Arr_aux,SZ_ARR);
	gettimeofday(&tf, NULL);

	printf (" %2d.%06d seg.",TT_CALC_SEG(ti,tf),TT_CALC_USEG(ti,tf));

	//! testeamos metodo de burbujeo
	//! Copiamos array base sobre array de prueba
	memcpy (Arr_aux,Arr,sizeof(Arr));
	printf ("\n Inicia Metodo de burbujeo 1 :");fflush(stdout);

	gettimeofday(&ti, NULL);
	ord_burbujeo (Arr_aux,SZ_ARR);
	gettimeofday(&tf, NULL);

	printf (" %2d.%06d seg.",TT_CALC_SEG(ti,tf),TT_CALC_USEG(ti,tf));

	//! testeamos metodo de burbujeo
	//! Copiamos array base sobre array de prueba
	memcpy (Arr_aux,Arr,sizeof(Arr));
	printf ("\n Inicia Metodo de burbujeo 2 :");fflush(stdout);

	gettimeofday(&ti, NULL);

	ord_burbujeo_2 (Arr_aux,SZ_ARR);
	gettimeofday(&tf, NULL);
	printf (" %2d.%06d seg.",TT_CALC_SEG(ti,tf),TT_CALC_USEG(ti,tf));

	//! testeamos metodo de quicksort
	//! Copiamos array base sobre array de prueba
	printf ("\n Inicia Metodo QuickSort     :");fflush(stdout);
	memcpy (Arr_aux,Arr,sizeof(Arr));

	gettimeofday(&ti, NULL);
	ord_qsort (Arr_aux,SZ_ARR);
	gettimeofday(&tf, NULL);

	printf (" %2d.%06d seg.",TT_CALC_SEG(ti,tf),TT_CALC_USEG(ti,tf));

	printf ("\n\n");

return 0;
}
