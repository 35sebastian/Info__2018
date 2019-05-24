/*
 * Parte 3
 *      generamos un numero aleatorio de 4 dígitos
 *      con digitos no repetidos
 *  
 *  version 1  
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int get_digit(int num,int pos)
{
int ret;

	ret= num/pow(10,pos);
	ret%=10;
	
return ret;
}


int aux_generar_numero (int num )
{
int aux;
	// empezamos la odiosa comparación de todos los dígitos

	// comparamos el digito 0 con el resto.
	aux=get_digit(num,0);
		
	if (aux==get_digit(num,1) || aux==get_digit(num,2) || aux==get_digit(num,3))
		return 0;

	if (aux==get_digit(num,2) || aux==get_digit(num,3))
		return 0;

	// comparamos el digito 1 con el resto.
	// menos con el 0 que ya se comparo

	aux=get_digit(num,1);
	if ( aux==get_digit(num,2) || aux==get_digit(num,3))
		return 0;
	
	// finalmente comparamos los digitos 2 y 3
	if ( get_digit(num,2)==get_digit(num,3))
		return 0;
	
return 1;
}



int generar_numero()
{
int x;
int flag=0;


	while (flag==0)
	{
		flag=0;
		// nro aleatorio
		x=rand()%10000;
		flag=aux_generar_numero (x );

	}

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