/*******************************************
*                                          *
*           funcion como argumento         *
*                paf_ord_2.c               *
*           ordenamiento de stings         *
*                                          *
*******************************************/

/*
	Funcion de ordenamiento Simple 

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SEP1 "-----------------------------------------------------------"
#define SEP2 "==========================================================="



int f_cmp_1(const void *, const void *);

void imprimir ( char ** px,short n,char *str);

void ordena (void *px,short n, short size,int (*pnt)( const void *, const void *));
#define PRESS_KEY printf("\npress ENTER to continue");while(getchar()!='\n');


int main(void)
{
char * vec[]={"Pedro","Juan","Pablo","Jose","Diego","Carlos","Martin","Claudio","Edu","Sergio","Walter","Daniel","Abel",};

int N=sizeof(vec)/sizeof(char *);

	imprimir (vec,N," sin Orden");
	PRESS_KEY;
	
	//---- 1er. Ordenamiento ----
	ordena ((void *)vec,N,sizeof(char *),f_cmp_1);
	imprimir (vec,N,"ordenado");
	PRESS_KEY;
return 0;
}


/*---------------------------------------------------------------------------
Funcion: imprimir
	imprime el vector de tipo estructura.

	px: ptr. al vector a imprimir.
	n: cant. de elementos del vector
---------------------------------------------------------------------------*/

void imprimir ( char ** px,short n,char *str)
{

	printf ("\n%s %s\n",SEP1,str);

	for ( ; n>0;n--,px++)
	{
		printf(": %s\n",*px);
	}

	printf ("\n");

}


/*---------------------------------------------------------------------------
Funcion: ordena

	Funcion de ordenamiento generica.

	px: ptr. al vector a ordenar.
	n: cant. de elementos del vector
	sz: tamano en bytes de cada elemento del vector.
	f_cmp: ptr. a la funcion de comparacion

---------------------------------------------------------------------------*/

void ordena (void *px,short n, short sz,int (*f_cmp)( const void *, const void *))
{
short i,k,x;	// Indices
short f;       // flag auxiliar
char *p1,*p2;	// punteros auxiliares
char aux;		// variable auxiliar


	for (i=0 ; i<n ; i++)
		for (k=i+1 ; k<n ; k++)
		{
			p1=((char*)px+(i*sz));
			p2=((char*)px+(k*sz));

			f=f_cmp ((void*)p1,(void*)p2);
			if (f>0)
				for (x=0;x<sz;x++)
				{
					aux=* (p1+x);
					*(p1+x)=* ((char*)p2+x);
					*(p2+x)=aux;
				}
		}
}


/*---------------------------------------------------------------------------
Funcion: f_cmp_x

	a,b- apuntan a los elementos del vector
---------------------------------------------------------------------------*/


int f_cmp_1 (const void *a,const void *b)
{

	return strcmp(*(char**)a , *(char**)b);
}

