#include <stdio.h>
#include <math.h>
#define OK 1
#define ERROR -1

int valores_positivos (int a, int b, int c){

  if(a>0 && b>0 && c>0)
  return OK;
  else return ERROR;

}
