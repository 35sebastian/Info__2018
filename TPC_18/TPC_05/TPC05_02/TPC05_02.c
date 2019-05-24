

#include "tpc5_soporte.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* memo_fillx (int sz, u8_t *data, int nn)
{
    char *p;
    int i=0,j, z, cont_leng_data=0;								
	  
	     
   p=(char *)malloc(sizeof(char)* sz);		//se pide la memoria y se verifica que fué otorgada
		if (p==NULL)
		return 0;
		
            for(z=0;data[z]!='\0';z++)
			cont_leng_data++;
	  
	  if(cont_leng_data<sz){ 
	  
     for (j=0;i<sz ;i++, j++)			//recorre el bloque de memoria y lo voy completando byte a byte
     {
		 if (data[j]=='\0'){
			j=0;
			i--;
		}
			*(p+i)=data[j];					//como p es *char se va a descplazar byte a byte y completar con cada letra del string que coincida con el subindice
				
     }
   }else{
	printf("\n No se ha logrado asignar el bloque de memoria, el string debe ocupar menos de %d bytes ", sz);
	return 0;
	}
	
     printf("\nllenado el bloque de memoria:%s\n", p);
   return p;
   
}


/*void* memo_fillx (int sz, u8_t *data, int nn)
{
    char *p;
    int i;						//son las cantidades de veces que entra el string en el bloque de memoria
	    
   p= (char *)malloc(sz);		//se pide la memoria y se verifica que fué otorgada
    if (p==NULL)
       return 0;
     for (i=0;i<sz ;i++)		//recorro el bloque de memoria y lo voy completando byte a byte
     {
			strcpy(p,data);		//strcpy pide que sea char (char *dest, const char *orig);
			*(p+i);
	printf("\nllenado el bloque de memoria:%s\n", p);
     }
   return p;
   
}*/



