#include <stdio.h>
#include <math.h>

float distancia (int x, int y);

int main (int argc, char **argv)
{
	int x, y;


	printf("Ingrese los valores de x: \n");
	scanf("%d",&x);

	printf("Ingrese los valores de y: \n");
	scanf("%d",&y);

	printf("La distancia es: %f", distancia(x,y));
	return 0;

}

float	distancia (	x,  y){

	float res;

	x=pow(x,2);
	y=pow(y,2);

	res=sqrt(x+y);
	return res;

}
