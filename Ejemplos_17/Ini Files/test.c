#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gen_file.h"

#define PATH "../ej_file_ini/"
#define NAME "file1"

#define MAX_PATH 256


int main (int argc, char *argv[])
{
char sFileIni[MAX_PATH];
int x;
char sBuff[32];	

	//------------- verifica argumentos -----

	if (argc<3)
	{
		printf ("\n Error de parametros\n");
		return 1;
	}
	//------------- Arma el nombre del archivo -----
	sprintf (sFileIni,"%s%s.ini",PATH,NAME);
	printf ("\n [%s]",sFileIni);
	


    x=GetProfileString(argv[1],argv[2], sBuff, 32, sFileIni);
	
	if (x==GF_OK)
		printf ("\n texto encontrado:(%s)\n\n",sBuff);
	else
	{
		printf ("\nError en busqueda de Sec: %s Key: %s - %s\n",argv[1],argv[2],GenErrorStr (x));
	}

return 0;	
}


