#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void factorial (int ingreso,char separador){

  int c, fac;
  fac=1;
  for(c=1;c<=ingreso;c++){
    fac=fac*c;
    printf("%d", fac );
    if (c < ingreso) {
      printf("%c", separador);
    }
  }
  printf("\n");
}
