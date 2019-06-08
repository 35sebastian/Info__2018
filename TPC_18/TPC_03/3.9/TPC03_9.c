#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char * xtrxtr(const char *str01, const char *str02){

  int flag=-1,i=0,j=-1;
  char **apuntador,*cad,*cad1;

  cad=(char*)str01;
  cad1=(char*)str02;
  apuntador[j]=cad;

  printf("\nla direcciíon de memoria donde comienza el string es:%p\n",cad);

  while (i!='\0') {
    if (j!='\0') {
      while (j!='\0') {
        if (cad1[j]==cad[i]) {
          flag=0;
          break;
        }
      }
    }
  }
  for (j = 0; *cad='\0' ; j++){     //recorro el objetivo

    if(*cad1==*cad) i=0;            //si coinciden pongo i=0
    else apuntador[j]++;            // sino paso al siguiente

    while(i>=0){                    //mientras haya coincidencia
      if(i==0) apuntador=&cad;      //desplazo el apuntador al comienzo de la coincidencia
      i++;                          //desplazo al siguiente caracter al apuntador
      cad++;                        // paso al siguiente elemento a comparar
      if(*cad=='\0' && i==0)        //si se termino el string pongo al final del pujntero el \0
      *(apuntador)='\0';
      return apuntador;             //se retorna el comienzo de la cadena coincidente
    }

    <<<<<<< HEAD
    =======
    char *xtrxtr(const char *str01, const char *str02){

      int i=-1;
      char *apuntador,*cad,*cad1;

      apuntador=str01;
      cad=(char*)str01;
      cad1=(char*)str02;

      while(*cad){                  //recorro el objetivo

        if(*cad1==*cad) i=0;        //si coinciden pongo i=0
        else cad++;                 // sino paso al siguiente

        while(i>=0){                //mientras haya coincidencia
          *(apuntador+i)=*cad;      //desplazo el apuntador al comienzo de la coincidencia
          i++;                      //desplazo al siguiente caracter al apuntador
          cad++;                    //paso al siguiente elemento a comparar
          if(*cad=='\0'){           //si se termino el string pongo al final del pujntero el \0
            *(apuntador+i)='\0';
            return apuntador;       //se retorna el comienzo de la cadena coincidente
          }
        }
        =======
        >>>>>>> 432052cbc4c9e54dc6a0df477d428fdd4a3b8b7f
      }
      return NULL;
    }
