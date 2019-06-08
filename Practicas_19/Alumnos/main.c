// // Escriba un programa el cual reciba los nombres, apellidos y calificaciones de hasta 20 alumnos.
// // El ingreso de alumnos finaliza cuando se ingresa como nombre 0. Cada nombre puede tener como máximo 20 caracteres.
// // al finalizar el ingreso, el programa debe presentar en forma ordenada decreciente a los alumnos con sus respectivos promedios.
// // verifique errores de ingreso.


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


//voy a tener que hacer un registro de (vec) + (vec) + (int), apuntar al comienzo de la pricipio de la primer cadena y despla-
//zarme de a lenghts de esos tres elementos para poder comparar los caracteres y ordenar los bloques por sus lenghts
