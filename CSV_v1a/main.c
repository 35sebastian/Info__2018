/**
	\file main.c
	\brief codigo para prueba de lectura de archivos en formato CSV  
	\details
		Se prueba la prier version de funciones denominada csv.b
	\note
		El separador del csv puede ingresarse por argumentos del main
	\version 1.csv.b
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "csv_b.h"

#define PRESS_KEY printf ("Presione ENTER para continuar ...");getchar();
#define CHAU(x) PRESS_KEY;exit(x);


void prt_data ( const ST_DATA* sp);

#define X_SEP ';'


/*==============================================================================
Función: main


Input: No se usan
Output: Archivo de datos actualizado
Return: --
Notas:
==============================================================================*/


int main(int argc, char *argv[])
{
FILE *fp;
ST_DATA st;
int lineas;
char x_sep=X_SEP;


	// verifica que al menos se haya pasado un 2do parametro (que sería el nombre del archivo a procesar)
	if (argc<2)
	{
		fprintf (stderr,"Error en Argumentos de la aplicacion.\n");
		fprintf (stdout,"Ejecute Aplicacion \"Nombre de Archivo\" [separador].\n");
		return 0;
	}
	
	if (argc>=3)	//incluye 3er parametro
	{
		// verificamos que el caracter sea de un byte - no se verifica el caracter en si
		if (argv[2][1]==0)
			x_sep=*argv[2];
		else
			fprintf (stderr,"Error en Argumentos de la aplicacion - separador seleccionado no se aplica.\n");
		fprintf (stdout,"separador a utilizar [%c].\n",x_sep);
		
	}


	// -  Apertura de Archivo - con verificacion de formato
	if ((fp=Abrir_Archivo (argv[1],x_sep,&lineas))==NULL)
	{
		CHAU(0);
	}
	fprintf (stdout,"\n Formato de archivo ok - cantidad de líneas: %d \n",lineas);


	while (!feof (fp))
	{

		// - cargo dato del archivo
		if (!Leer_Dato_Archivo (&st,fp,X_SEP))
			break;

		prt_data(&st);
	}

	fclose (fp);

	PRESS_KEY;

  return 0;
}

/*==============================================================================
Función: prt_data

Impresión de un dato en pantalla

Input:
	sp - dato a imprimir

Return: -
==============================================================================*/
void prt_data ( const ST_DATA* sp)
{
static int cont=0;

	printf ("\n ========================================================= \n");
	printf("Titulo: %s\n",&sp->sBuff[sp->iOffset[ST_TITULO]]);
	printf("Autor: %s\n",&sp->sBuff[sp->iOffset[ST_AUTOR]]);
	printf("Edit: %s\n",&sp->sBuff[sp->iOffset[ST_EDIT]]);
	printf("Precio: %s",&sp->sBuff[sp->iOffset[ST_PRECIO]]);

	printf ("\n ========================================================= \n");


	
	if (++cont==4)
	{
		cont=0;
		printf ("Presione ENTER para continuar ...");
		getchar();
	}
}
