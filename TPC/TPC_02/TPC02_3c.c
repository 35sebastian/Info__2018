
#include <stdio.h>
#include <stdlib.h>
#define COLOR "\n el color seleccionado es el :"

int color_opc(int color)
{
	
	int vec[]= {0xAzul,0xVerdeClaro,0xVerdeoscuro,0xCeleste, 0xAmarillo, 0xNaranja, 0xRojo, 0xMarrón, 0xBlanco};
	
		if (color<=8 && color>=0)
		{
		printf("%d", vec[color]);
				}else
				printf("%d", vec[8]);
	
	return 0;
}

