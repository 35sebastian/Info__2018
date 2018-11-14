#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrrchr(const char *str, char c){

    int i;

        for (i = 0; str[i]!='\0'; i++)
          //printf("%p \n\n", &str[i+2]);  //Lo uso para corroborar que la posición de memoria devuelta sea la última.
          if (str[i]=='\0'){
          while (i){
          if (c==str[i]) return &str[i];

          i--;
            }
          }
}
