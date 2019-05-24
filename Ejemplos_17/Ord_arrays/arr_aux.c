
#include "ordenar.h"
#include "arr_aux.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int is_in_array (mi_tipo * vec,int cant,mi_tipo valor)
{
int i;

	for (i=0; i<cant;i++)
		if (vec[i]==valor)
			return i;
return -1;
}





// en rigor tipo int --
void make_array (mi_tipo * vec,int cant,mi_tipo rango)
{
int i=0;
mi_tipo aux;

	srand (time(NULL));

	
	
	while (i<cant)
	{
		aux=(rango>cant*5)?rand()%rango:rand();
		
		if (is_in_array(vec,i,aux)<0)
		{
			vec[i]=aux;
			i++;
		}
	}	
}

void prt_array_int (int * vec,int cant)
{
int i;

	for ( i=0 ; i<cant ; i++)
		printf (" %3d)%6d%c",i,vec[i],((i+1)%PRT_LN)?' ':'\n');
	
	printf ("\n\n");
}


