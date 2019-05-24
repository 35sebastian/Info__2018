/**
	\file main.c
	\brief codigo para prueba de lectura de archivos en formato CSV  
	\details
		Se prueba la prier version de funciones denominada csv.a
	\version 1.csv.a
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "csv_a.h"

#define PRESS_KEY printf ("Presione ENTER para continuar ...");getchar();
#define CHAU(x) PRESS_KEY;exit(x);


void prt_data ( const ST_DATA* sp);


#define X_SEP ';'


int main(int argc, char *argv[])
{
FILE *fp;
ST_DATA st;
int lineas;


	// verifica que al menos se haya pasado un 2do parametro (que sería el nombre del archivo a procesar)
	if (argc<2)
	{
		fprintf (stderr,"Error en Argumentos de la aplicacion.\n");
		fprintf (stdout,"Ejecute Aplicacion \"Nombre de Archivo\".\n");
		return 0;
	}


	// -  Apertura de Archivo - con verificacion de formato
	if ((fp=Abrir_Archivo (argv[1],X_SEP,&lineas))==NULL)
	{
		CHAU(0);
	}
	fprintf (stdout,"\n Formato de archivo ok - cantidad de líneas: %d n",lineas);


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
	printf("Titulo: %s\n",sp->sTitulo);
	printf("Autor: %s\n",sp->sAutor);
	printf("Edit: %s\n",sp->sEditorial);
	printf("Precio: %s",sp->sPrecio);

	printf ("\n ========================================================= \n");


	
	if (++cont==4)
	{
		cont=0;
		printf ("Presione ENTER para continuar ...");
		getchar();
	}
}
