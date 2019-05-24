/*este main está referido al programa Triangulo, el cual solicita el ingreso de los lados de un triángulo y determina si fué ingrsado correctamente*/

#include <stdio.h>
#define EQUILATERO 1
#define ISOCELES 2
#define ESCALENO 3

int main(int argc, char const *argv[]) {

  int ladoA, ladoB, ladoC, resultado=1;

    /*Ingreso de datos*/
  printf("ingrese los lados de un triángulo\n");
  printf("\t Ingrese la longitud del primer lado:");
  scanf("%d",&ladoA);
  printf("\t Ingrese la longitud del segundo lado:");
  scanf("%d",&ladoB);
  printf("\t Ingrese la longitud del tercer lado:");
  scanf("%d",&ladoB);

    /*Llamados a funciones*/
    while(resultado==1){
    resultado = valores_positivos (ladoA,ladoB,ladoC);        //comprueba que los valores ingresados sean mayores que cero

    resultado = es_triangulo (ladoA,ladoB,ladoC);             //comprueba que los valores ingresados correspondan a un triángulo

    resultado=0;
    }
    if (resultado==0) {
      rect = es_rectangulo (ladoA,ladoB,ladoC);            //comprueba que el triángulo definido es rectángulo

      tipo = tipo_triangulo (ladoA,ladoB,ladoC);           //determina que tipo de triángulo es el ingresado (Equilatero, isoceles, escaleno)
    }

    switch (resultado) {                                      //Este switch se utilizará para determinar el error en los datos ingresados
      case -1:
          printf("¡alguno de los valores ingresados es negativo o cero!\n");
          break;
      case -2:
          printf("¡Los valores ingresados no forman un triángulo!\n");
          break;
    }

  return 0;
}
