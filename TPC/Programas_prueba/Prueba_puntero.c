#include <stdio.h>

void suma (int a, int b, int * r);

int main (){

    int x = 10;
    int y = 20;
    int * z = 0;


  //  scanf("%d %d", &x, &y);
    suma (x, y, &z);
    printf("La suma de los numeros es: %d, se encuentra en %p", *z, z);
  return 0;
}

void suma (int a, int b, int * r){

  * r = a + b;

  return;
}
