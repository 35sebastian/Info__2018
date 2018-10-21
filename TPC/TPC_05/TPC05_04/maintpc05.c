#include "tpc5_soporte.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

char * memo_text (char * , int *, char *);

int main(void)
{
	
    char *sx=0, *stext=0, *p_res=0;	//apunto los punteros a NULL para evitar que apunten a lugares de la memoria indeseados
    int  *xx=0; 
  				
    p_res= memo_text (sx, xx, stext);
    
    printf("el resultado es:%s", p_res);
	free(p_res);
	free(*ssTp);
   
    return 0;
}
