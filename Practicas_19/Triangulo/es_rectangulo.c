#include <stdio.h>
#include <math.h>
#define OK 1
#define ERROR -3

int es_rectangulo(int a, int b, int c){

  float modulo;

    if((a>b) && (a>c))
    modulo = sqrt((b*b)+(c*c));
    if(modulo==a) return OK;

    if((b>c) && (b>a))
    modulo = sqrt((a*a)+(c*c));
    if(modulo==b) return OK;

    if((c>a) && (c>b))
    modulo = sqrt((a*a)+(b*b));
    if(modulo==c) return OK;

  return ERROR;
}
