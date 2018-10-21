/**
	\file rutinas.c
	\brief rutinas utilizadas dentro del programa de arrays asociados - Info I.
	\version 1.0
*/

#include "rutinas.h"
#include "comun.h"


/*!
	\fn int ing_datos(int leg[], int s[],char N[],int cant)

	\brief Ingreso de datos
	\details Se ingresa el valor de legajo y nota correspondiente.
	si el legajo ya existe, suma la nota al sumador de notas e incrementa la
	cantidad de examenes.
	si el legajo no existe - lo ingresa al array e inicializa el sumador de notas
	con la nota ingresada y el contador de notas en 1.

	\param[out] leg - array en donde se almacenan los legajos
	\param[out] s - array en donde se acumulan las notas
	\param[out] N - array en donde se guarda la cantidad de notas acumuladas en "s"
	\param[in] cant - capacidad máxima de los arrays
	
	\return cantidad de datos ingresados

*/ 

int ing_datos(int leg[], int s[],char N[],int cant)
{
int i=0,aux,pos;


	//! loop de ingreso de datos - finaliza con legajo 0

	while(1)
	{
	
		//! ingreso legajo - si legajo es 0, finaliza ingreso
		if((aux=ing_legajo())==0)
			break;
	
		//! busco si el legajo ya existia
		pos=buscar(i,leg,aux);

		//! si el legajo es nuevo lo inserto e inicializo arrays asociados
		if(pos<0)
		{
			//! Al insertar verifico contra con espacio
			if(i == cant)
				{
					printf("Buffer Lleno, no se pueden ingresar mas datos \n");
					continue;
				}

			pos=i;
			leg[pos]=aux;
			s[pos]=0;
			N[pos]=0;
			i++;	
		}

		//! ingreso nota y actualizo los datos
		s[pos]+=ing_nota();
		N[pos]++;
	}


return i;
}


/*!
	\fn void imp_mejor_prom(int leg[], int s[],char N[],int cant)

	\brief determinación e informe del mejor promedio
	\details Se determina el mejor promedio y se informa el o los estudiantes
	que poseen ese promedio.

	\param[in] leg - array con los legajos
	\param[in] s - array con la sumatoria de notas
	\param[in] N - array con cantidad de notas acumuladas
	\param[in] cant - cantidad de elementos en el array
	
	\note 1 para ser considerado dentro del mejor promedio, se debio haber 
	dado al menos una cantidad de examenes definida en MIN_EXAM_TO_PROM.
	\note 2 debido a las condiciones para ser mejor promedio, puede existir
	el caso que no exista mejor promedio.
*/ 
void imp_mejor_prom(int leg[],int s[],char N[],int cant)
{
float max_prom=-1,aux;
int i;

	printf("\n\n>> Listado de estudiantes con mejor promedio:");

	//! se determina mejor promedio - verificando las clausulas enunciadas
	for(i=0;i<cant;i++)
	{
		if(N[i]<MIN_EXAM_TO_PROM)
			continue;

		aux = (float)s[i]/N[i];
		if(aux > max_prom)
			max_prom=aux;	//se actualiza mejor promedio
	}

	//! si no existe mejor promedio, se informa y termina funcion
	if(max_prom<0)
	{
		printf("\nNingun estudiante alcanzo los requisitos para ser mejor promedio\n\n");
		return;
	}

	//! se informa mejor promedio
	printf("\n\tMejor Promedio %f \n - legajos :",max_prom);

	//! se imprimen los legajos de los estudianetermina con mejor promedio - verificando las clausulas enunciadas
	for(i=0;i<cant;i++)
	{		
		if(N[i]<MIN_EXAM_TO_PROM)
			continue;

		aux = (float)s[i]/N[i];	// auxiliar necesario
		if(max_prom == aux)
			printf("%d\t",leg[i]);
	}

	printf("\n\n");
}
		

/*!
	\fn void listar1 (int leg[],char N[],int cant)

	\brief listado de estudiantes que dieron pocos examenes
	\details se listan si dieron más de MIN_EXAM_TO_LIST

	\param[in] leg - array con los legajos
	\param[in] N - array con cantidad de notas acumuladas
	\param[in] cant - cantidad de elementos en el array
	
*/ 

void listar1 (int leg[],char N[],int cant)
{
int i; // indice
int k; // bandera 

	printf("\n\n>> Listado de alumnos con pocos examenes:\n\n\t");

	for(k=i=0;i < cant;i++)
	{
		if(N[i]<=MIN_EXAM_TO_LIST)
		{
			printf("L:%d,%d\t",leg[i],N[i]);
			k=1;
		}
	}

	if(!k)
		printf("No hay estudiantes en esta condicion\n");

	printf("\n\n");

}

/*!
	\fn void listar2 (int leg[], int s[],char N[],int cant)

	\brief listado de estudiantes con sus respectivos promedios

	\param[in] leg - array con los legajos
	\param[in] s - array con la sumatoria de notas
	\param[in] N - array con cantidad de notas acumuladas
	\param[in] cant - cantidad de elementos en el array
	
*/ 

void listar2(int leg[],int s[],char N[],int cant)
{
int i,k; // indices

	printf("\n\n>> Listado de estudiantes y sus promedios:\n\n");


	printf(" Legajo | promedio | Cant. Examenes\n--------+----------+----------------");

	for(i=0;i<cant;i++)
	{
		printf("\n %6d |",leg[i]);
		printf("   %6.2f |",(float)s[i]/N[i]);
		printf(" %3d",N[i]);
	}

	printf("\n\n");
}
