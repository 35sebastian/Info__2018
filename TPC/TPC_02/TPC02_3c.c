#include <stdio.h>
#include <stdlib.h>
#define COLOR "\n el color seleccionado es el :"

int color_opc(int color){

	char *vec[]= {"Blanco","Azul","Verde claro","Verde oscuro","Celeste", "Amarillo", "Naranja", "Rojo", "Marrón", "Blanco"};

		if (color<=8 && color>=0)
		{
		printf(COLOR "%s", vec[color]);
				}else
				printf("%s", vec[8]);

	return 0;
}
