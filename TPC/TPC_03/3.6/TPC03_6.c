#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrcpy  (char * str01, const char * str02, int opc){

      int cant,i,j,k;

      for(k=0;str02[k]!='\0';k++);
        k++;

    if (!opc){
      printf("ingrese la cantidad de caracteres a copiar, max lenght del string %d(debe ser menor a 20):", k);
      scanf ("%d", &cant);
      getchar();
      if(cant<MAX){
        for (i = 0, j = 0; str01[i]!='\0'; i++, j++) {
        if (j<cant) str01[i]=str02[j];
            else if(j==cant) str01[i]=str02[j];
            putchar(str01[i]);
            }
        }
    }else if(k<MAX){
      for (i = 0, j = 0; str01[i]!='\0'; i++, j++) {
        if (j<cant) str01[i]=str02[j];
          else if(j==cant) str01[i]=str02[j];

        }
      }
    return str01;
  }
