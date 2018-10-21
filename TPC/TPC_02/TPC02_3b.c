
#include <stdio.h>
#define COLOR "\n el color seleccionado es el :"

int color_opc(int color)
{
	printf(COLOR"\t");
	
switch( color )
	{
	case 1: printf("Azul \n");
			break;
	case 2: printf("Verde claro \n");
			break;
	case 3: printf("Verde oscuro \n");
			break;
	case 4: printf("Celeste \n");
			break;
	case 5: printf("Amarillo \n");
			break;
	case 6: printf("Naranja \n");
			break;
	case 7: printf("Rojo \n");
			break;
	case 8: printf("Marrón \n");
			break;
	default: printf("Blanco \n");
			break;
	}
			
			
	return 0;
}

