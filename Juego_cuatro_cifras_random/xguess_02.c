/*
 * Parte 2
 *      generamos un numero aleatorio de 4 dígitos
 *      
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generar_numero()
{
int x;

//	srand(time(NULL));

		x=rand()%10000;
		
return x;
}

int main ()
{
int i;

//	srand(time(NULL));

	while(i<10)
	{
		printf ("--- num: %04d \n",generar_numero());
		i++;
	}
	
return 0;	
}