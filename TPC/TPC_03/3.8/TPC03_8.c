#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrrchr(const char *str, char c){

    int i;

        for (i = 0; str[i]!='\0'; i++){
            if (c==str[i]) return &str[i];
          //printf("%p \n\n", &str[i+2]);  //Lo uso para corroborar que la posición de memoria devuelta sea la primera.
  }
}
