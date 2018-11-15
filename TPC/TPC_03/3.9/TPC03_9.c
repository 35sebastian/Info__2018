#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrxtr(const char *str01, const char *str02){

       int i=-1;
       char *apuntador,*cad,*cad1;

       apuntador=str01;
       cad=(char*)str01;
       cad1=(char*)str02;

       while(*cad){           //recorro el objetivo

        if(*cad1==*cad) i=0;    //si coinciden pongo i=0
            else cad++;         // sino paso al siguiente

       while(i>=0){             //mientras haya coincidencia
            *(apuntador+i)=*cad;  //desplazo el apuntador al comienzo de la coincidencia
            i++;                  //desplazo al siguiente caracter al apuntador
            cad++;                // paso al siguiente elemento a comparar
          if(*cad=='\0'){         //si se termino el string pongo al final del pujntero el \0
              *(apuntador+i)='\0';
              return apuntador;   //se retorna el comienzo de la cadena coincidente
              }
        }
    }
      return NULL;
}
