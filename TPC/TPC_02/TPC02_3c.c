#include <stdio.h>
#include <stdlib.h>
#define COLOR "\n el color seleccionado es el :"

int color_opc_array(int color){

	char *vec[]= {"Blanco","Azul","Verde claro","Verde oscuro","Celeste", "Amarillo", "Naranja", "Rojo", "Marrón", "Blanco"};

		if (color<=9 && color>=0)
		{
		printf(COLOR "%s", vec[color]);
				}else
				printf("%s", vec[9]);

	return 0;
}
