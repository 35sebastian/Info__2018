/**
	\file PaF-main.c
	\brief prueba de la funcion para busqueda generica en arrays
	\date 2015.07.10
	\version 1.0.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gen_data.h"
#include "PaF-busqueda.h"

// Cantidad de elementos que poseera el array
#define N 10 

#define SEP1 "-----------------------------------------------------------"
#define SEP2 "==========================================================="

#define S_APP_TXT "Apellido"
#define S_LEG_TXT "Legajo"



//Estructura de pruebas
typedef struct
{
	int leg;
	char edad;
	int dni;
	char sNom[31];
	char sApp[21];
} ST_DATA;


void imprimir (const ST_DATA*,int n );
void set_data (ST_DATA* ,short);
int f_cmp_app(void *, void *);
int f_cmp_leg(void *, void *);
int f_cmp_edad(void *, void *);

int selector ();

int main(void)
{
ST_DATA vec[N];
int (*f_cmp)(void *, void *);
int aux,nx,op,pos;
char sAux[20],*s;

	//---- Genero el Vector en forma aleatorea
	set_data (vec,N);

	while (	(op=selector ())!=3)
	{
		imprimir (vec,N);

		// una de las ideas del switch es usar también un PaF como variable
		switch (op)
		{
			case 0://Apellido
				s=S_APP_TXT;
				f_cmp=f_cmp_app;
				break;

			case 1://Legajo
				s=S_LEG_TXT;
				f_cmp=f_cmp_leg;
				break;
				
			case 2://mayores de
				break;
				
			default:
				printf ("\nError grosero\n");
				exit (0);
		}

		
		if (op <2)
		{
			printf ("\nIngrese %s:",s);
			scanf ("%s",sAux);
			pos=buscar ((void*)sAux,(void *)vec,N,sizeof(vec[0]),f_cmp);
			if (pos>=0)
			{
				printf ("\n elemento encontrado - pos: %d\n",pos);
				imprimir (vec+pos,1);
			}
			else
				printf ("\n elemento NO encontrado \n");		
		}
		else
		{
			aux=0;
			printf ("\nIngrese edad inferior:");
			scanf ("%d",&op);

			while ((N-aux>0) &&(pos=buscar ((void*)&op,(void *)(vec+aux),N-aux,sizeof(vec[0]),f_cmp_edad))>=0)
			{
				aux+=pos;
				imprimir (vec+aux,1);
				aux++;
			}
			if (!aux)
				printf ("\n ningun elemento cumple con lo solicitado\n");		
		}

		
		getchar();
		
	}	
	
	return 0;
}

/**
	\fn void set_data( ST_DATA * px,short n)
	\brief se genera el array con valores aleatorios

	\param [in,out] px: array completado
	\param [in] n: tama#o del array
	
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/

void set_data( ST_DATA * px,short n)
{
	//genInicio (0);
	for ( ; n>0;n--,px++)
	{
		px->leg=genNumero (100,9000);
		px->edad=genNumero (18,70);
		px->dni=genNumero (100000,8000000);
		genNombre (px->sNom,2,1);
		genApellido(px->sApp,0);
	}
}
/*---------------------------------------------------------------------------
Funcion: imprimir
	imprime el vector de tipo estructura.

	px: ptr. al vector a imprimir.
	n: cant. de elementos del vector
---------------------------------------------------------------------------*/

/**
	\fn void imprimir ( const ST_DATA * px, int n )
	\brief imprime el vector de tipo estructura

	\param [in] px: array a imprimir
	\param [in] n: cantidad de elementos
	
	\note Si px es la dirección de un elemento dentro del array y n vale 1
	      se imprime solo el elemento en lugar de todo el array
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/


void imprimir ( const ST_DATA * px, int n )
{

	printf ("\n%s\n",SEP1);
	for ( ; n ; n--, px++)
	{
		printf("Legajo: %5d  Edad:%2d ",px->leg,px->edad);
		//impresion de DNI formateado
		if (px->dni/1000000)
			printf("DNI:%2d.",px->dni/1000000);
		else
			printf("DNI:   ");
		printf("%03d.%03d -",(px->dni/1000)%1000,px->dni%1000);
		
		printf("App y Nom: %s, %s\n",px->sApp,px->sNom);

	}
	printf ("\n%s\n",SEP1);

	
}

/**
	\fn int f_cmp_leg (void *key, void *b)
	\brief función de comparación para el campo appellido

	\param [in] key: elemento buscado
	\param [in] b: celda a contrastar dentro del array
	\return 0- elemento no encontrado / <>0 - elemento encontrado
	
*/
int f_cmp_leg (void *key, void *b)
{
//	printf(" \n --> %d",((ST_DATA*)b)->leg);
//	printf(" \n --> %d",atoi((char *)key));
	
	
	if ( atoi((char *)key)==((ST_DATA*)b)->leg)
		return 1;
	return 0;
}

/**
	\fn int f_cmp_app (void *key, void *b)
	\brief función de comparación para el campo appellido

	\param [in] key: elemento buscado
	\param [in] b: celda a contrastar dentro del array
	\return 0- elemento no encontrado / <>0 - elemento encontrado
*/
int f_cmp_app (void *key, void *b)
{
//	printf(" \n --> %s",((ST_DATA*)b)->sApp);
//	printf(" \n --> %s",(char *)key);
	
	return ! strcmp( (char *)key , ((ST_DATA*)b)->sApp);
}

/**
	\fn int f_cmp_app (void *key, void *b)
	\brief función de comparación para el campo edad

	\param [in] key: elemento buscado
	\param [in] b: celda a contrastar dentro del array
	\return 0- edad menor a la buscada / <>0 - edad >= a la buscada
*/
int f_cmp_edad (void *key, void *b)
{
	//printf(" \n --> %d",((ST_DATA*)b)->leg);
	//printf(" \n --> %d",*((int*)key));
	
	
	if ( *((int*)key)<=((ST_DATA*)b)->edad)
		return 1;
	return 0;
}





int selector ()
{
char op;

	do{
		printf ("\n Seleccione elemento a buscar:");
		printf ("\n\t 1- Apellido");
		printf ("\n\t 2- Legajo");
		printf ("\n\t 3- mayores de ...");
		printf ("\n\t 4- SALIR\n->");
		op=getchar()-'1';
	}while (op<0 || op>4);

return op;
}