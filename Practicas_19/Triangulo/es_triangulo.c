#include <stdio.h>
#include <math.h>
#define OK 1
#define ERROR -2

int es_triangulo(int a, int b, int c){

  if(a+b>c && b+c>a && a+c>b)
  return OK;
  else return ERROR;

}
