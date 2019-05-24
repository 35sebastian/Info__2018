#include <stdio.h>

int es_triangulo(int a, int b, int c){

  if(a+b>c && b+c>a && a+c>b)
  return 1;
  else return -2;   

}
