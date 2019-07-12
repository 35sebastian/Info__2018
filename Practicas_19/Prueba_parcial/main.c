/*******************************************************************************************************************************************************************************
* Enunciado: Se solicita desarrollar un programa que permita generar el digito verificador DV de una patente de automovil de Argentina. Para genera el digito verificador,
* es necesario reemplazar las letras por numeros de acuerdo a la sgte tabala:
*
* A = 14 B = 01 C = 00 D = 16 E = 05 F = 20 G = 19 H = 09 I = 24 J = 07 K = 21 L = 08 M = 04 N = 13 O = 25 P = 22 Q = 18 R = 10 S = 02 T = 06 U = 12 V = 23 W = 11 X = 03
* Y = 15 Z = 17
*
* Luego, se suman los numeros de derecha a izquierda en forma alternada, sumando uno para el digito D, y otro para el digito V comenzando por D.
* Se deber poder ejecutaar el programa directamente desde la consola utilizando el switch -c y a continuacion una patente valida(compuesta por tres letras y tres numeros).
* Si la patente no fuese valida, se debera imprimir una leyenda de error.
* En caso de no encontrar el switch correspondiente, se debera solicitar al usuario el ingreso de informacion y ejecutar en forma continua has e ingreso de la patente "0"
* Ejemplo:
* 		$mi_programa -c USW621
*
* Se reemplazan las letras por lo numeros:
*
* USW = 120211621
*
* Se suman los numeros de derecha a izquierda, alternados, lo que da:
* 	D = 1+6+1+0+1 = 9
*  V = 2+1+2+2 = 7
*
* 		Se muestra por pantalla, el digito verificador es = DV 97
* ******************************************************************************************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

#define EXIT_SUCCESS 0
#define TRUE 1
#define FALSE 0
#define SINGLE 1
#define CONTINUE 2
#define CANTCARACTERESxPATEN 6
#define CANTLETRASxPATEN 3
#define NUM_LETRAS 26

int main(int NumArgs, char *StrArgs[]){
  char Mode;

  if( Validate(StrArgs, NumArgs) ){
    Mode = fill_mode(NumArgs);

    switch((int)Mode){
      case SINGLE:
      Mode_Single(StrArgs);
      printf("\n\tEnd Process\n\n");
      exit(0);
      break;
      case CONTINUE:
      Mode_Continue(StrArgs);
      printf("\n\tEnd Process\n\n");
      exit(0);
      break;
      default:
      printf("\nSe produjo un error inesperado\n\n");
      break;

    }
  }else
  messageError();
  return EXIT_SUCCESS;
}
