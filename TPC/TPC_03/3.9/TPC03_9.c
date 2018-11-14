#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrxtr(const char *str01, const char *str02){

  int dif;
  int i,j;

  /*  for (i = 0; str01[i]!='\0'; i++)         //Recorro ambos vectores para controlar su length
      printf("\nLa dirección de str01[%d] es: %p \n", i, &str02[i]);
    for (j = 0; str02[j]!='\0'; j++)
      printf("\nLa dirección de str02[%d] es: %p \n", j, &str02[j]);
*/
        if (i<j){
          printf("\n\t No se puede realizar la busqueda porque el string a buscar es más grande que el objetivo \n");
          return NULL;}

          for (i = 0; str01[i]!='\0'; i++) {
            for (j = 0; str02[j]==str01[i] && str02!=''\0'; j++) {
              dif=str02[j]-str01[i]
            }
            if(str02[j]!=str01[i]) j=0;
          }
            if(j){
              printf("\n El string no fué encontrado en el objetivo\n");
              return NULL;}
            else return &str01;
          }
}
