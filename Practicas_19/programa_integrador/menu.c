#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void menu (){
  printf("para consultar al programa ingrese los siguientes parámetros (a continuación del ./main):\n" );
  printf("-c permite cambiar la cantidad de elementos.\n");
  printf("-s permite especificar el tipo de serie deseado.\n");
  printf("-m despliega nuevamente el menú de opciones.\n");
  printf("-sep permite especificar el separador deseado.\n");
  printf("POT <n> <i>; donde P llama a la función potencia y n es la cantidad base de la potenciación.\n");
  printf("FIB <n>; donde F llama a la función Fibonacci y n es la cantidad de elementos de la serie que quiere que se muestre.\n");
  printf("PRIM <n>; donde p llama a la función primos y n es el número hasta el que se quieren averiguar los números primos.\n");
  printf("FACT <n>; donde f llama a la función factorial y n es el número al que se le quiere calcular el factorial.\n");
  printf("Para salir del ingreso coloque en cualquier argumento -1\n");
}
