#include <stdio.h>
#include <math.h>
#define EQUILATERO 1
#define ISOCELES 2
#define ESCALENO 3

int tipo_triangulo(int a, int b, int c){

  if((a==b) && (b==c))
    return EQUILATERO;
  else if((a!=b) && (a!=c) && (c!=b))
    return ESCALENO;

  return ISOCELES;
}
