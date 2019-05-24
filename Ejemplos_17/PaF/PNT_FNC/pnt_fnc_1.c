/*******************************************
*                                          *
*              puntero a funcion           *
*                pnt_fnc1.c                *
*                                          *
*******************************************/

/*
Ejemplo de Puntero a Funcion Simple
*/


#include <stdio.h>

int suma (int,int);
int resta (int,int);
int multi (int,int);
int divi (int,int);

int main(void)
{
int (*p) (int,int);
int a=10;
int b=5;
int x;

	p=suma;
	x=p(a,b);
	printf ("\n\nLa suma de %d y %d es %d",a,b,x);

	p=resta;
	x=p(a,b);
	printf ("\n\nLa resta de %d y %d es %d",a,b,x);

	p=multi;
	x=p(a,b);
	printf ("\n\nEl producto de %d y %d es %d",a,b,x);

	p=divi;
	x=p(a,b);
	printf ("\n\nLa division de %d y %d es %d\n",a,b,x);

return 0;
}

int suma (int x,int y)
{
	return x+y;
}

int resta (int x,int y)
{
	return x-y;
}

int multi (int x,int y)
{
	return x*y;
}

int divi (int x,int y)
{
	if (!y)
		return 0;

	return x/y;
}
