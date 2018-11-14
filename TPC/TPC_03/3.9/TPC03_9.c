#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrxtr(const char *str01, const char *str02){

  int dif,i,j, count=0;

    for (i = 0; str01[i]!='\0'; i++)         //Recorro ambos vectores para controlar su length
      printf("\nLa dirección de str01[%d] es: %p \n", i, &str02[i]);
    for (j = 0; str02[j]!='\0'; j++)
      printf("\nLa dirección de str02[%d] es: %p \n", j, &str02[j]);

        if (i<j){
          printf("\n\t No se puede realizar la busqueda porque el string a buscar es más grande que el objetivo \n");
          return NULL;}
          else{
            i--; j--;      //los pongo en el último caracter encontrado
              while(i){
                  if (j>0 && i==j){
                    dif= str01[i]-str02[j];
                      if (dif==0) count++;
                    j--; //retrocede str02
                  }
                  i--;  //retrocede str01
                  printf("\nDIF:%d\n", dif);
                }
            if(count){
              printf("\n El string no fué encontrado en el objetivo\n");
              return NULL;}
            else return &str01;
          }
}
