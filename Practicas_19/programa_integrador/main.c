#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "header.h"

#define MENU 1
#define FIBONACCI 2
#define POTENCIA 3
#define FACTORIAL 4
#define PRIMOS 5

int main(int argc, char const *argv[]) {

  char sep = ',';
  // char *new_in = 0;
  int i = 0,opc = 0; /*Fchg = 0 (Habilitar en caso que tenga la solucion para el -c)*/

  if (argc<2) {
    printf("debe ingresar argumentos a continuación del ./main!\n");
    return 0;}     //comprueba que se hayan ingresado parametros posibles de leer.

    while (argc>=2 && i<argc){              //Dentro de este While recorro los argumentos ingresados y compruebo las opciones seleccionadas
      if(!(strcmp("-m",argv[i]))){
        opc=1;
        break;
      }
      if (!(strcmp("-sep",argv[i]))) sep = *argv[i+1];    // En caso que le quiera cambiar el separador
      if(!(strcmp("-s",argv[i]))){
        i++;
        if (!(strcmp("POT",argv[i]))) {
          opc = POTENCIA;
          break;
        }
        if (!(strcmp("FACT",argv[i]))) { //En caso que haya coincidencia strcmp devuelve 0 "cero" que es logicamente FALSO, por eso lo niego
        opc = FACTORIAL;
        break;
      }
        if (!(strcmp("PRIM",argv[i]))) {
        opc = PRIMOS;
        break;} // de la misma forma que las comprobaciones anteriores
        if (!(strcmp("FIB",argv[i]))) {
          opc = FIBONACCI;
          break;}      // Solo una vez que esté especificado -s

       }
      // if (!(strcmp("-c",argv[i]))) Fchg=1;
      i++;
      // printf("el valor de i w es: %d\n", i);
    }

    // if (Fchg==1 && (opc == 2 || opc == 4 || opc == 5)) {
    //   printf("coloque la nueva cantidad de elementos a mostrar:\t" );
    //   scanf("%s", new_in);
    //   strcpy(argv[i], new_in);
    // }

    switch (opc) {
      case 1:              /*  MENU  */
      menu();
      break;
      case 2:              /*  FIBONACCI  */
      fibonacci (atoi(argv[i+1]),sep);
      break;
      case 3:              /*  POTENCIA  */
      potencia(atoi(argv[i+1]),atoi(argv[i+2]),sep);
      break;
      case 4:              /*  FACTORIAL  */
      factorial(atoi(argv[i+1]),sep);
      break;
      case 5:              /*  PRIMOS  */
      primos(atoi(argv[i+1]),sep);
      break;
      default:             /* En caso que -s no sea especificado en los argumentos*/
      fibonacci (atoi(argv[i-1]),sep);    // en este caso es i-1 porque no encuentra flags
      break;
    }

    return 0;
  }
