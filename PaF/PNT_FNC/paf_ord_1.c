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


#define N1 30
#define N2 10

#define SEP1 "-----------------------------------------------------------"
#define SEP2 "==========================================================="


void imprimir ( char , void *,short);


void ordena (void *px,short n, short size,int (*pnt)( void *, void *));
int f_cmp_1(void *a, void *b);
int f_cmp_2(void *a, void *b);


int main(void)
{
char c_vec[N1];
float f_vec[N2];
short i;

	srand(time (NULL));

	//---- Genero los Vectores en forma aleatorea
	for (i=0;i<N1;i++)
	{
		c_vec[i]=(rand()%2-1)?'A':'a';
		c_vec[i]+=(rand()%26);
	}
	for (i=0;i<N2;i++)
		f_vec[i]=(float)rand()/100;

	//---- Imprime los vectores desordenados
	imprimir (0,c_vec,N1);
	imprimir (1,f_vec,N2);

	//---- Ordena los vectores ----
	ordena ((void *)c_vec,N1,sizeof(char),f_cmp_1);
	ordena ((void *)f_vec,N2,sizeof(float),f_cmp_2);

	//---- Imprime los vectores Ordenados
	imprimir (0,c_vec,N1);
	imprimir (1,f_vec,N2);

	printf ("\n%s\n",SEP2);
	
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
}



/*---------------------------------------------------------------------------
Funcion: ordena

	Funcion de ordenamiento generica.

	px: ptr. al vector a ordenar.
	n: cant. de elementos del vector
	sz: tamano en bytes de cada elemento del vector.
	f_cmp: ptr. a la funcion de comparacion

---------------------------------------------------------------------------*/

void ordena (void *px,short n, short sz,int (*f_cmp)( void *, void *))
{
short i,k,x;	// Indices
int   f;		// flag auxiliar
void  *p1,*p2;	// punteros auxiliares
char  aux;		// variable auxiliar


	for (i=0 ; i<n ; i++)
		for (k=i+1 ; k<n ; k++)
		{
			p1=((char*)px+(i*sz));
			p2=((char*)px+(k*sz));

			f=f_cmp ((void*)p1,(void*)p2);
			if (f>0)
				for (x=0;x<sz;x++)
				{
					aux=* ((char*)p1+x);
					*((char*)p1+x)=* ((char*)p2+x);
					* ((char*)p2+x)=aux;
				}
		}

}

/*---------------------------------------------------------------------------
Funcion: f_cmp_x

	a,b - ptr. genericos a los elementos del vector
---------------------------------------------------------------------------*/


//--- Compara variables tipo char ---
int f_cmp_1(void *a, void *b)
{
int x,y;

	x= *((char *)a);
	y= *((char *)b);

	return  x-y;
}

//--- Compara variables tipo float ---
int f_cmp_2(void *a, void *b)
{
float x,y;

	x= *((float *)a);
	y= *((float *)b);

	if (x>y)
		return 1;
return 0;
}
