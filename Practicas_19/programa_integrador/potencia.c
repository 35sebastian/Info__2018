#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void potencia (int base, int elementos, char separador){

  int i, base_aux;

  for ( i = 0; i < elementos; i++){
    base_aux = pow(base,i);
    printf("%d", base_aux);

    if (i < elementos-1) {
      printf("%c", separador);
    }
  }
  printf("\n");
}
/*  Tienen que ser bien ingresados los argumentos, flata compensar errores de ingreso*/
