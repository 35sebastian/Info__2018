#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fibonacci(int elementos, char separador){

  int i = 0, aux, primero = 1, segundo = 1;

  while(i < elementos){
    if(i <= 1){
      aux = 1;
    }else{
      aux = primero + segundo;
      segundo = primero;
      primero = aux;
    }

    printf("%d", aux);
    if (i < elementos-1) {
      printf("%c", separador);
    }
    i++;
  }
printf("\n");
}
