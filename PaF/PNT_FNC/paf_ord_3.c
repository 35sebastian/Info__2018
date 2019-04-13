/*******************************************
*                                          *
*           funcion como argumento         *
*                paf_ord_3.c               *
*                                          *
*******************************************/

/*
	Funcion de ordenamiento Simple 

	- Ordena Vector de estructuras

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 5000

#define SEP1 "-----------------------------------------------------------"
#define SEP2 "==========================================================="

typedef struct
{
	int leg;
	char edad;
	long dni;
	char sNom[31];
	char sApp[21];
} ST_DATA;


void imprimir (ST_DATA* ,short,char *);
void set_data (ST_DATA* ,short);
int f_cmp_1(const void *, const void *);
int f_cmp_2(ST_DATA *, ST_DATA *);
int f_cmp_3(const void *,const void *);


void ordena (void *px,short n, short size,int (*pnt)( const void *, const void *));
#define PRESS_KEY printf("\npress ENTER to continue");while(getchar()!='\n');


int main(void)
{
ST_DATA vec[N];


//	srand(time(NULL));
	//---- Genero el Vector en forma aleatorea
	set_data (vec,N);

	imprimir (vec,N," sin Orden");
	PRESS_KEY;

	//---- 1er. Ordenamiento ----
	qsort ((void *)vec,N,sizeof(ST_DATA),f_cmp_1);
	imprimir (vec,N,"x legajo");
	PRESS_KEY;
	
	//---- 2do. Ordenamiento ----
	qsort ((void *)vec,N,sizeof(vec[0]),(int (*) (const void *,const void *))f_cmp_2);
	imprimir (vec,N,"x DNI");
	PRESS_KEY;
	
	//---- 3er. Ordenamiento ----
	qsort ((void *)vec,N,sizeof(vec[0]),f_cmp_3);
	imprimir (vec,N,"x App & Nom");
	PRESS_KEY;
	

	printf ("\n%s\n",SEP2);

return  0;
}

/*---------------------------------------------------------------------------
Funcion: set_data
	Genera un Vector en forma aleatoria

	px: ptr. al vector a imprimir.
	n: cant. de elementos del vector
---------------------------------------------------------------------------*/

void set_data( ST_DATA * px,short n)
{
char * sNom[]={"Pedro","Juan","Pablo","Jose","Diego","Carlos","Martin","Claudio","Edu","Sergio","Walter","Daniel","Abel",};
char * sApp[]={"Trono","Pan","Gil","Rolo","Toto","Pato","Diez","Berti","Perez","Caco","Nu¤ez","Aras","Cordo","Pirex","Zaneti"};

int c1= sizeof(sNom)/sizeof(char *);
int c2= sizeof(sApp)/sizeof(char *);


	for ( ; n>0;n--,px++)
	{
		px->leg=100+rand()%5000;
		px->edad=18+rand()%50;
		px->dni=rand()+1000000;
		sprintf (px->sNom,"%s %s",sNom[rand()%c1],sNom[rand()%c1]);
		strcpy(px->sApp,sApp[rand()%c2]);
	}
}


/*---------------------------------------------------------------------------
Funcion: imprimir
	imprime el vector de tipo estructura.

	px: ptr. al vector a imprimir.
	n: cant. de elementos del vector
---------------------------------------------------------------------------*/

void imprimir ( ST_DATA * px,short n,char *str)
{

	printf ("\n%s %s\n",SEP1,str);

	n=5;
	for ( ; n>0;n--,px++)
	{
		printf("Legajo: %5d  Edad:%2d DNI:%10ld - ",px->leg,px->edad,px->dni);
		printf("App y Nom: %s, %s\n",px->sApp,px->sNom);
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
	return  ((ST_DATA*)a)->leg-((ST_DATA*)b)->leg;
}

int f_cmp_2 (ST_DATA *a, ST_DATA *b)
{
	if ( a->dni > b->dni)
		return 1;
	return  0;
}

int f_cmp_3 (const void *a,const void *b)
{
char f;

	f=strcmp(((ST_DATA*)a)->sApp , ((ST_DATA*)b)->sApp);
	if (f)
		return f;

	return strcmp(((ST_DATA*)a)->sNom , ((ST_DATA*)b)->sNom);
}

