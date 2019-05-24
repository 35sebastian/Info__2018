#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tpc5_soporte.h"

//typedef char u8_t;

void* memo_fill (int sz, u8_t data)				// llenando con for
{
    char *p;
    int i;

    
   p= (char *)malloc(sz);
		if (p==NULL)
		return 0;
     for (i=0;i<sz;i++)
     *(p+i)=data;
   
    
   return p;
   
}

void* memo_fill2 (int sz, u8_t data)			// llenando con memset
{
    char *p;
    
    p= (char *)malloc(sz);
       if (p==NULL)
       return 0;
    memset(p, data, sz);
  // for(i = 0; i < sz; ++i) printf("%c",p[i]);		//imprime el contenido escrito en el bloque de memoria
   
   return p;
   
}

void* memo_fill3 (int sz, u8_t data)				// llenando con while (terminar)
{
	char *p;
    int i=0;

    
   p= (char *)malloc(sz);
		if (p==NULL)
		return 0;
     while(i<sz){
     *(p+i)=data;
		i++;
    }
   return p;
   
}

void* memo_fill4 (int sz, u8_t data)				// llenando con do while(terminar)
{
    char *p;
    int i=0;

    
   p= (char *)malloc(sz);
		if (p==NULL)
		return 0;
     do{
     *(p+i)=data;
		i++;
	}while(i<sz);
    
   return p;
   
}
