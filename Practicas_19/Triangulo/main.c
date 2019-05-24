/*este main está referido al programa Triangulo, el cual solicita el ingreso de los lados de un triángulo y determina si fué ingrsado correctamente*/

#include <stdio.h>
#include <math.h>
#include "header.h"
#define EQUILATERO 1
#define ISOCELES 2
#define ESCALENO 3

int main(int argc, char const *argv[]) {

  int ladoA, ladoB, ladoC, resultado=1, rect=0, tipo=0;

    /*Ingreso de datos*/

  printf("ingrese los lados de un triángulo\n");
  printf("\t Ingrese la longitud del primer lado:");
  scanf("%d",&ladoA);
  printf("\t Ingrese la longitud del segundo lado:");
  scanf("%d",&ladoB);
  printf("\t Ingrese la longitud del tercer lado:");
  scanf("%d",&ladoC);

    /*Llamados a funciones para obtener sus respuestas*/

    while(resultado==1){                                      //Este while será la condición que determine si los valores ingresados son válidos o no.
    resultado = valores_positivos (ladoA,ladoB,ladoC);        //comprueba que los valores ingresados sean mayores que cero.

    resultado = es_triangulo (ladoA,ladoB,ladoC);             //comprueba que los valores ingresados correspondan a un triángulo.

    resultado=0;
    }
    if (resultado==0) {                                       //Si los valores ingresados son correctos solo queda el clasificar que tipo de triángulo es.
      rect = es_rectangulo (ladoA,ladoB,ladoC);               //comprueba que el triángulo definido es rectángulo.
      if (rect==1) printf("El triángulo es rectangulo\n");
         else if (rect==-1) printf("El triángulo no es rectángulo\n");

      tipo = tipo_triangulo (ladoA,ladoB,ladoC);              //determina que tipo de triángulo es el ingresado (Equilatero, isoceles, escaleno).
          switch (tipo) {
            case 1: printf("El triangulo es equilatero\n");
                    break;
            case 2: printf("El triangulo es isoceles\n");
                    break;
            default: printf("El triángulo es escaleno\n");
          }
    }

    switch (resultado) {                                      //Este switch se utilizará para imprimir en pantalla los mensajes de error según los datos ingresados.
      case -1:
          printf("¡alguno de los valores ingresados es negativo o cero!\n");
          break;
      case -2:
          printf("¡Los valores ingresados no forman un triángulo!\n");
          break;
    }

  return 0;
}
