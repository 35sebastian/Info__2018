#include<stdio.h>

int int main(int argc, char const *argv[]) {

  char nombre, apellido;
  int nota, i=1,* quit;

  /*Solicito datos*/
  while(i<=20 && quit!=0){
  printf("ingrese los datos de los alumnos a continuación(para finalizar el ingreso de datos ingrese el nombre 0(cero)):\n");
  printf("\n\t Ingrese el nombre del %d alumno:", i);
  scanf("%s",&nombre);
  printf("\t Ingrese el apellido del alumno:");
  scanf("%s",&apellido);
  printf("\t Ingrese la nota:");
  scanf("%d",&nota);
  }
  return 0;
}
