#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

int xtr_cmp (const char * str01, const char * str02, int opc){

    int cant,i,j, parcial, resultado;

    printf("ingrese la cantidad de datos a leer (debe ser menor a 20):");
    scanf ("%d", &cant);
    fflush(stdin);

    for (i = 0, j = 0; str01[i]!='\0' && str02[j]!='\0' && i <=cant && j <= cant; i++, j++) {
      if (opc)  parcial=toupper(str01[i])-toupper(str02[j]);
        else parcial=str01[i]-str02[j];

      if(parcial) resultado=+parcial;
    }
  return resultado;
}
