#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define TRUE 1
#define FALSE 0
#define SINGLE 1
#define CONTINUE 2
#define CANTCARACTERESxPATEN 6
#define CANTLETRASxPATEN 3
#define NUM_LETRAS 26

void messageError(void){
  printf("\n\n\tNo se ingreso ninguna Patente o se ingreso uno invalido\n");
  printf("\tUna Patente valida consta de tres letras MAYUSCULAS seguido de tres digitos\n\t\tEnd Process\n\n");
}
