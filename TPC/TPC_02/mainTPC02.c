/*!
 * \mainpage Trabajo Práctico de Clase N°2 - Control de Flujo
 * \section Files
 * \details - En esta pestaña se encuntra el listado de los archivos referidos al TPC
 * \note Para correr el programa debe compilarse con el comando make en consola. Luego correr con el comando: ./TPC02
 * \author Sebastian A. Vega
 * \version 1.0
*/

/*!
 * \file mainTPC02.c
 * \brief Funcion principal: recibira los datos ingresados por el usuario.
 * \fn TPC02_1a.c
 * \return devuelve cero '0' si finalizó correctamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include "TPC02.h"

int main ()
{
	int x,y, z,opc,color,subn;
	char sub;

    printf("\n¿Qué ejercicio quiere consultar?:");
		printf( "\n\t 1. compara numero \n\t 2. Color\n\t 3. Array\n\n");
    scanf("%d",&opc);

    switch(opc){
		case 1:{
		printf("Señeccione una opción:");
		printf("\n - a. compara dos números");
		printf("\n - b. compara tres números\n");
		getchar();				//toma el retorno de carro que queda en el stdin a causa del primer scanf
		scanf("%c", &sub);
		getchar();

			if(sub=='a'){
				printf("\nIngrese el primer valor:");
				scanf("%d",&x);
				printf("\nIngrese el segundo valor:");
				scanf("%d",&y);
				compara (x,y);
//				compara_ternario (x,y);
			}else if(sub=='b'){
				printf("\nIngrese el primer valor:");
				scanf("%d",&x);
				printf("\nIngrese el segundo valor:");
				scanf("%d",&y);
				printf("\nIngrese el tercer valor:");
				scanf("%d",&z);
				cmp (x , y , z);
			}else{
				printf("\nEl valor ingresado no es una opción válida\n");
				return 0;
				}
		}break;

		case 2:{
			printf("\n¿Qué ejercicio quiere consultar?:");
			printf( "\n\t 1. Con else-if \n\t 2. Con switch-case\n\t 3. Array\n\n");
			getchar();
			scanf("%d",&subn);
			getchar();
			printf("\n Seleccione un color:\n \t 1 - Azul \n \t 2 - Verde claro \n \t 3 - Verde oscuro \n \t 4 - Celeste \n \t 5 - Amarillo \n \t 6 - Naranja \n \t 7 - Rojo \n \t 8 – Marrón \n \t Otro – Blanco \n");
			scanf("%d",&color);
			getchar();

			switch(subn){
					case 1:	{
							color_opc_elseif (color);
							break;
							}

					case 2:{
							color_opc_switch (color);
							break;
							}

					case 3:{
							color_opc_array (color);
							break;
							}
					}
				}
			}
/*
	 if(opc==3)							// Selecionada la opción Imprime array
    {
		int arr[]={25,78,19,63,25,41,78,52,44,33,0,45,0,85,-1};
		int t= sizeof(arr)/ sizeof(int);

		func_arr (arr);
		func_arr (arr+10);
	}*/
    return 0;

}
