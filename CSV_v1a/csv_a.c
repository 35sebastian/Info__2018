
/**
	\file csv_a.c
	\brief Implementación de las funciones para el manejo de archivos en formato CSV (comma separated values) 
	\version csv.a
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "csv_a.h"


#define prt_err(y,z)    fprintf (stderr,"%04d - Error en %s de archivo:\n\t %s - (%d) %s\n",__LINE__,y,z,errno,strerror(errno));
#define prt_err2(y,z,n) fprintf (stderr,"%04d - Error en %s de archivo %s (codigo: %d)\n",__LINE__,y,z,n);

static int verificar_formato (FILE *fp, char sep)
{
char sLine [SZ_LINE];
char flag_end_line=0;
char *q,*s;
int c_col; // contador de columnas
int c_ln=0; // contador de lineas
int aux;

	while (fgets(sLine,SZ_LINE,fp))
	{

	// ---- verifica si el ultimo carcater es '\n'
	// ---- se debe tener en cuenta que el archivo puede o no terminar la última linea con '\n'

		if (flag_end_line)//error de formato
			return -1;
		
		aux=strlen(sLine);
		if (!aux || sLine [aux-1] != '\n')
			flag_end_line=1; 	// si ingresa nuevamente al while sería un error
	
	// ---- verifica la cantidad de separadores en la linea
		c_ln++;
		s=sLine;
		c_col=1; //inicia con una columna

		while( (q=strchr(s,sep)))
		{
			if (q-s < MIN_BYTES_COL)
				return -3;	// error en formato - cantidad de caracteres insuficientes

			c_col++;
			s=q+1;
		}
		
		if (c_col!= N_COL)
			return -2; // error de formato - nro de columans

		if (strlen(s) < MIN_BYTES_COL)
			return -4;	// error en formato - cantidad de caracteres insuficientes
	}
	
return c_ln;	
}



FILE * Abrir_Archivo (char *s, char sep,int *lineas)
{
FILE * fp;
int ln;

	fp=fopen (s,"rt");

	if (!fp)
	{
		prt_err("apertura",s);
		return NULL;
	}
	
	if (sep)
	{
		ln=verificar_formato (fp,sep);
		if (ln<=0)
		{
			fclose (fp);
			prt_err2("formato",s,ln);
			return NULL;
		}
		if (lineas)	// si lineas <> NULL se copia la cantidad de lineas del archivo csv
			*lineas=ln;
	}
	// se deja el archivo preparado para su lectura desde el inicio
	fseek (fp,0,SEEK_SET);
	
return fp;
}


int Leer_Dato_Archivo ( ST_DATA* sp,FILE *fp,char sep)
{
char sLine [SZ_LINE];
char sAux[120];
int aux;

	if(!fgets(sLine,SZ_LINE,fp))
		return 0;	// se asume fin de archivo
		
	aux=strlen(sLine);
	if (aux && sLine [aux-1] == '\n')
		sLine [aux-1]=0; //se elimina el enter
	
	// arma el string de lectura de archivo segun el separador a utilizar 
	sprintf (sAux,"%%[^%c]%c%%[^%c]%c%%[^%c]%c%%[^%c]",sep,sep,sep,sep,sep,sep,sep);
	aux=sscanf (sLine,sAux,sp->sTitulo,sp->sAutor,sp->sEditorial,sp->sPrecio);

	// Verifica cantidad de parametros leidos 
	if (aux!=N_COL)
		return 0;

return 1;
}

