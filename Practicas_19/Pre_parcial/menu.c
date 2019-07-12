#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int menu(int q, int serie, char separador){

  int menu_option;

  printf("\n");
  printf("        EJERCICIO PRE-PARCIAL!!!\n");
  printf("------------------------------------------\n\n");


  do{
    printf("Menu Principal\n");
    printf("1. Configurar la Cantidad de Elementos de la Serie.\n");
    printf("2. Elegir la Serie.\n");
    printf("3. Elegir Separador CSV.\n");
    printf("4. Imprimir la Serie.\n");
    printf("5. Salir.\n");
    printf("  Por favor ingrese una opcion del menu principal: ");

    scanf("%d",&menu_option);
    my_fflush();



    switch(menu_option){

      case 1:
      printf("Ingrese la cantida de elementos de la serie:");
      scanf("%d", &q );
      my_fflush();

      break;

      case 2:
      printf("Ingrese la serie [1:Fibonacci; 2:Potencia; 3:Factorial; 4:Primo]:");
      scanf("%d", &serie );
      my_fflush();

      break;


      case 3:
      printf("Ingrese el separador:");
      scanf("%c", &separador );
      my_fflush();

      break;

      case 4:
      printf("----------------------------------------------------\n");
      print_serie (q, serie, separador);
      printf("----------------------------------------------------\n");
      my_fflush();

      break;

      case 5:
      exit(0);
      break;


      default:
      printf("invalid input");
      my_fflush();

      break;
    }

  } while(menu_option != 5);


  return 0;
}
