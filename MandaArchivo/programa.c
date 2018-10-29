#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "network.h"

int main(int argc, char ** argv){

	int retorno;

		if(strcmp(argv[1],"-s") == 0){

				if(argc == 2){
				printf("Ingreso en modo servidor\n");
					servidor(argv);
					retorno = 0;
					}
					else{
						printf("Se han ingresado erroneamente los argumentos\n");
						retorno = -1;
					}
			}
			else if (strcmp(argv[1],"-c") == 0){

				if(argc == 3){
				printf("Ingreso en modo cliente\n");
					cliente(argv);
					retorno = 0;
					}
					else{
						printf("Se han ingresado errroneamente los argumentos\n");
						retorno = -1;
					}
				}

	return retorno;

}
