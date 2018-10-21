#include "tpc5_soporte.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
#define LINEAS 10
#define MAX_LEN 1000


char * memo_text (char * sx, int *xx, char *stext)
{
	//char *sx=NULL;
	int i=0;
	long int cont=0;
		
	sx=(char *)malloc(sizeof(char)*MAX);
	 if(!sx)
	 return 0;
	 	
	*ssTp = (char*) malloc (LINEAS * sizeof(int)); 
		if(!ssTp[i])
		return NULL;
		 
			for(i=0;ssTp[i]!=NULL;i++)			//Utilizo un contador para saber la cantidad de datos a ingresar 
				cont+=strlen(ssTp[i]);	
		
		if(cont<(sizeof(char)* MAX)){
		for(i=0;ssTp[i]!=NULL;i++)
			{
				printf("%s ", ssTp[i]);
				sx=ssTp[i];
			}
		}else 
			{
			printf("\n\n ¡¡¡ memoria insuficiente !!!\n\n");
			return 0;
			}
	return sx;
	
}	
