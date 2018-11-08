#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

char *xtrrchr(const char *str, int c){

    int i;

        for (i = 0; str[i]!='\0'; i++){
            if (c==str[i]) return &str[i];

            printf("%p \n\n", str[i]);
  }
  printf("%p\n\n", str);
}
