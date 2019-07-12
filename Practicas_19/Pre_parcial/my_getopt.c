#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define MODE_UNDEFINED      0
#define MODE_MENU           1
#define MODE_COMMAND_LINE   2

#define ERROR   -1
#define OK       1

int my_getopt(int argc, char *argv[], int *q, int *mode, int *serie, char *separador ){

  // se esperan 2 argumentos


  // -c obligatorio, cantidad de elementos de la serie
  // -m obligatorio, linea de comandos ( el enunciado no dice nada, lo asumo )
  // -s opcional, serie default FIB
  // -sep opcional, separador CSV default ';'

  // con estas definiciones, la cantidad minima de argumentos que esperamos es: 5 y la maxima 9
  // nombre_programa -c 10 -m 1 [-s 1 -sep ,]


  // asumo que si el usuario ingresa dos veces el mismo argumento, elijo el ultimo
  // ejemplo -m 1 -m 2


  int i;

  //printf("DEBUG::argc=%d\n", argc);

  if (argc > 9 && argc < 5){
    usage();
    //printf("DEBUG:: End Program\n");
    exit(0);
  }


  for (i=0; i<argc;i++){

    if ( strcmp(argv[i], "-c") == 0){
      *q = atoi(argv[i+1]);
      // pendiente validar que no supere el maximo de elementos
      // ...
      i++;
    }

    if ( strcmp(argv[i], "-m") == 0){
      *mode = atoi(argv[i+1]);
      // pendiente validar que solo sea alguno de los modos posibles
      // ...
      i++;
    }


    if ( strcmp(argv[i], "-s") == 0){
      *serie = atoi(argv[i+1]);
      // pendiente validar que solo sea alguno de las series posibles
      // ...
      i++;
    }


    if ( strcmp(argv[i], "-sep") == 0){
      *separador = argv[i+1][0];
      // pendiente validar longitud, etc...
      // ...
      i++;
    }

    // las opciones no validas las descarto
    // quizas deberias elegir por ejemplo mostrar algun mensaje de error y finalizar
    // ...
  }

  //printf("DEBUG::q=%d, mode=%d\n", *q, *mode);

  // si no se ingresaron los mandatorios, es un error
  if ( *q == 0 || *mode == MODE_UNDEFINED )
  return ERROR;


  return OK;
}
