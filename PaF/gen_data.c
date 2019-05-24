/**
	\file gen_data.c
	\brief implementación de las funciones para la generación de datos en forma aleatoria
	\date 2015.07.10
	\version 1.0.0
*/


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// permite calcular el dimensionamiento de un array
#define SZ_ARR(x) (sizeof(x)/sizeof(x[0]))


int genNombre (char *s,char fm,char n)
{
char * sNomM[]={"Pedro","Juan","Pablo","Jose","Diego","Carlos","Martin",\
					"Claudio","Edu","Sergio","Walter","Daniel","Abel","Victor","Hector","Octavio"};

char * sNomF[]={"Liliana","Juana","Silvia","Maria","Malena","Sofia","Carla",\
					"Viviana","Carolina","Vanina","Lucia","Daniela","Marta",};
char **sn;
int a,b,sz;

	//---- definición del genero
	// definición del genero si el mimso es al azar
	if (fm!=0 && fm!=1)
			fm=rand()%2;
	
	// ajustes de variables segun genero
	sn= fm? sNomM:sNomF;
	sz= fm? SZ_ARR(sNomM):SZ_ARR(sNomF);
	
	// definición de nombre segun cantidad
	if (!n)	// 1 nombre
		strcpy (s, *(sn+rand()%sz));
	else	// 2 nombres
	{
		a=rand()%sz;
		b=rand()%sz;
		if (a==b) b=(a+1)%sz;
	
		sprintf (s,"%s %s",*(sn+a),*(sn+b));
	}
	
	return strlen (s);
}




int genApellido (char *s,char n)
{
char * sApp[]={"Trono","Pan","Gil","Rolo","Toto","Pato","Diez","Berti",\
					"Perez","Caco","Nu€ez","Aras","Cordo","Pirex","Zaneti"};
	
	// definición de nombre segun cantidad
	if (!n)	// 1 nombre
		strcpy (s, *(sApp+rand()%SZ_ARR(sApp)));
	else	// 2 nombres
		sprintf (s,"%s %s",*(sApp+rand()%SZ_ARR(sApp)),*(sApp+rand()%SZ_ARR(sApp)));
	
	return strlen (s);
}

int genNumero (int inf,int sup)
{
	return inf+rand()%(sup-inf);
}


void genInicio (int val)
{
	if (val<0)
		return;
	
	if (!val)
		srand (time (NULL));
	else
		srand (val);
}

