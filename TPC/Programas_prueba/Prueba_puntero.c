#include <stdio.h>

void suma (int, int, int *);

int main (){

    int x = 10;
    int y = 20;
    int * z = 0;

  //  z = &x;
  //  scanf("%d %d", &x, &y);

    suma (x, y, &z);
    printf("El valor de x es: %d, el valor de y es: %d. La suma de los numeros es: %d, se encuentra en %p", x, y, * z, &z);

  return 0;
}

void suma (int a, int b, int * p){

   * p = a + b;
  return;
}
