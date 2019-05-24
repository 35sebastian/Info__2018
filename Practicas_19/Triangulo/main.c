#include <stdio.h>
#define EQUILATERO 1
#define ISOCELES 2
#define ESCALENO 3

int main(int argc, char const *argv[]) {

  int ladoA, ladoB, ladoC;

  printf("ingrese los lados de un triángulo\n");
  printf("\t Ingrese la longitud del primer lado:");
  scanf("%d",&ladoA);
  printf("\t Ingrese la longitud del segundo lado:");
  scanf("%d",&ladoB);
  printf("\t Ingrese la longitud del tercer lado:");
  scanf("%d",&ladoB);

    /*Llamados a funciones*/

    valores_positivos (ladoA,ladoB,ladoC);

    es_triangulo (ladoA,ladoB,ladoC);

    es_rectangulo (ladoA,ladoB,ladoC);

    tipo_triangulo (ladoA,ladoB,ladoC);


  return 0;
}
