#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void primos (int limite, char separador){

  int i , n_primo, count;

  for(n_primo = 1 ; n_primo <= limite ; n_primo++){       //Hasta que número calcular los numeros primos
    count=0;
    for (i = 2; i < n_primo; i++) {                       //este for con if va a identificar los números NO primos y primos
      if(n_primo%i==0){                                   //si el resto de la division es cero quiere decir que este número NO es primo
        count++;
        break;
      }
    }
    if (count == 0) {                                     //se imprimirán solo los números que NO sean divisibles por otros enteros menores a él
      printf("%d", n_primo);
    if (i < limite-1) {
      printf("%c", separador);
    }
    }
  }
  printf("\n");
}
