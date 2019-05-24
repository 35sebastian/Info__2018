/*******************************************
*                                          *
*           funcion como argumento         *
*                paf_ord_1.c               *
*                                          *
*******************************************/

/*
	Funcion de ordenamiento Simple
	- Ordena Vector de char
	- Ordena Vector de float
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>



#define SEP1 "-----------------------------------------------------------"
#define SEP2 "==========================================================="


void imprimir ( char , void *,short);

int f_cmp_1(const void *a, const void *b);
int f_cmp_2(const void *a, const void *b);

#define SZ(n) (sizeof(n)/sizeof(n[0]))

int main(void)
{
char c_vec[]={'q','r','A','e','s'};
float f_vec[]={3.3,2.2,5.5,6.6,1.1};

//---- Imprime los vectores desordenados
	imprimir (0,c_vec,SZ(c_vec));
	imprimir (1,f_vec,SZ(f_vec));

	//---- Ordena los vectores ----
	qsort ((void *)c_vec,SZ(c_vec),sizeof(char),f_cmp_1);
	qsort ((void *)f_vec,SZ(f_vec),sizeof(float),f_cmp_2);

	//---- Imprime los vectores Ordenados
	imprimir (0,c_vec,SZ(c_vec));
	imprimir (1,f_vec,SZ(f_vec));
	
return 0;
}

/*---------------------------------------------------------------------------
Funcion: imprimir
	imprime los elementos de un vector en formato char o float.

	modo: indica el tipo de dato a imprimir
			0 - char / <>0 - float
	px: ptr. al vector a imprimir.
	n: cant. de elementos del vector

---------------------------------------------------------------------------*/

void imprimir ( char modo, void * px,short n)
{
int i;

	printf ("\n%s\n",SEP1);

	for (i=0;i<n;i++)
		if (modo)
			printf ("%.2f ",*((float*)px+i));
		else
			printf ("%c ",*((char*)px+i));

	printf ("\n");
	
		
}


/*---------------------------------------------------------------------------
Funcion: f_cmp_x

	a,b - ptr. genericos a los elementos del vector
---------------------------------------------------------------------------*/


//--- Compara variables tipo char ---
int f_cmp_1(const void *a, const void *b)
{
int x,y;

	x= *((char *)a);
	y= *((char *)b);

	return  x-y;
}

//--- Compara variables tipo float ---
int f_cmp_2(const void *a, const void *b)
{
float x,y;

	x= *((float *)a);
	y= *((float *)b);

	if (x>y)
		return 1;
return 0;
}

