/*
* Escriba un programa el cual imprima una serie deseada en funcion de los argumentos recibidos.
* en caso de no especificarse algun switch, el primer argumento será la cantidad de elementos y la serie por defecto sera la de fibonacci.
* el programa deberá imprimir todos los valores en formato CSV por pantalla.
* es necesario verificar todos los errores posibles de ingreso y/o ejecucion.
* el switch "-c" permitirá cambiar la cantidad de elementos.
* el switch "-s" permitirá especificar el tipo de serie deseada.
* Los valores posibles serán:
* "FIB": Fibonacci
* "POT": el cual debera estar acompañado a continuación de la base de la serie de potencias
* "FACT": el cual estará acompañado a continuación del numero del cual se quiere calcular el factorial
* "PRIM": números primos
* el switch "-m" permitirá acceder al programa en modo "menu"; mediante el cual se debe permitir al usuario ejecutar el programa en modo continuo.
* el switch "-sep" permitirá elegir el separador elegido para el CSV. por defecto se considera ";"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
// argumento -c por default 0 ya que es obligatorio
#define CANTIDAD_ELEMENTOS  0


// tipos de serie -s
#define SERIE_DEFAULT   1
#define SERIE_FIB       1
#define SERIE_POT       2
#define SERIE_FACT      3
#define SERIE_PRIM      4

// modo de ejecucion -m
#define MODE_UNDEFINED      0
#define MODE_MENU           1
#define MODE_COMMAND_LINE   2

// separador CSV, default ; -sep
#define CSV_SEPARATOR   ';'

#define ERROR   -1
#define OK       1

int main(int argc, char *argv[]){

  // cantidad de elementos de la serie
  int q = CANTIDAD_ELEMENTOS;

  // modo de ejecucion, default MODE_UNDEFINED
  int mode = MODE_UNDEFINED;

  // serie default FIB
  int serie = SERIE_DEFAULT;

  // char separador CSV default ';'
  char separador = CSV_SEPARATOR;

  if ( my_getopt( argc, argv, &q, &mode, &serie, &separador ) == ERROR ){
    usage();
  }

  if ( mode == MODE_COMMAND_LINE){
    print_serie ( q, serie, separador);
    return 0;
  }

  menu(q, serie, separador);


  return 0;
}


void serie_fib(int n, int qmax, char csv_sep){
  int first = 0, second = 1, next, c;

  for (c = 0; c < n; c++){
    if (c <= 1)
    next = c;
    else {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d%c", next, csv_sep);
  }
  printf("\n");
}

void serie_pot(int q, int qmax, char csv_sep){

  printf("Pendiente desarrollar esta serie\n");


}

void serie_fact(int q, int qmax, char csv_sep){

  printf("Pendiente desarrollar esta serie\n");

}

void serie_prim(int q, int qmax, char csv_sep){

  printf("Pendiente desarrollar esta serie\n");
}
