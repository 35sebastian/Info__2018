
#include <stdio.h>
#define COLOR "\n el color seleccionado es el :"

int color_opc(int color)
{
	if (color==1){
	printf(COLOR "\t Azul\n");
		}
	if (color==2){
	printf(COLOR "\t Verde claro\n");
		}
	if (color==3){
	printf(COLOR "\t Verde oscuro\n");
		}
	if (color==4){
	printf(COLOR "\t Celeste\n");
		}
	if (color==5){
	printf(COLOR "\t Amarillo\n");
		}
	if (color==6){
	printf(COLOR "\t Naranja\n");
		}
	if (color==7){
	printf(COLOR "\t Rojo\n");
	}
	if (color==8){
	printf(COLOR "\t Marrón\n");
		}
	if (color>=9 || color<=0){
	printf(COLOR "\t Blanco\n");
		}
						
	return 0;
}

