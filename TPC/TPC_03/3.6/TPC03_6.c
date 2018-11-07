#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrcpy  (char * str01, const char * str02, int opc){

      int cant,i,j,k;

      for(k=0;str02[k]!='\0';k++);
        k++;

    if (!opc){  //Evalua si la copia tiene que ser parcial, en ese caso cumple el if. Caso distinto de cero hara la copia completa de str02
      printf("ingrese la cantidad de caracteres a copiar, max lenght del string %d(debe ser menor a 20):", k);
      scanf ("%d", &cant);
      getchar();
      if(cant<MAX){       //no va a poder desbordar str01
        for (i = 0, j = 0; str01[i]!='\0'; i++, j++) {    //recorre
            if (j<cant) str01[i]=str02[j];                //copia
              else if(j==cant) str01[i]=str02[j];         //copia \0
            //putchar(str01[i]);                            // para controlar la función de copia parcial
            }
            return str01;
        }
    }else if(opc==1 && k<MAX){        // me aseguro que el string a copiar sea menor que el de destino
      for (i = 0, j = 0; str01[i]!='\0'; i++, j++) {    //recorro
        if (j!='\0' && j<MAX) str01[i]=str02[j];                  //copio
          else if(j=='\0') str01[i]=str02[j];           //copio \0
        }
        return str01;
      }
  }
