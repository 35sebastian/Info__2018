/*******************************************
*                                          *
*              puntero a funcion           *
*              pnt_fnc2.c  y 3.c           *
*                                          *
*******************************************/

/*
Ejemplo de Array de Punteros y Puntero a Funcion como Argumento
Basado en pnt_fnc.c
*/
#include <stdio.h>
#include <stdlib.h>

int suma (int,int);
int resta (int,int);
int multi (int,int);
int divi (int,int);

void func (int a, int b,int i,int (*pnt)(int,int));

int main(void)
{
int (*p[]) (int,int)={suma,resta,multi,divi};
int a=10;
int b=5;
int op;

	do
		{
		printf ("\n\n\n Datos- a:%d b: %d",a,b);
		printf ("\n\n1-suma\n2-resta\n3-producto\n4-division");
		printf ("\n\nIngrese Operacion:");
		op=getc(stdin);
		}while ( (op<'1')||(op>'4'));

	op-='1';

	func (a,b,op,p[op]);

return 0;
}

void func (int a, int b,int i,int (*pnt)(int,int))
{
char *str[]={"La suma","La resta","El producto","La division"};

	printf ("\n%s de %d y %d es %d\n",*(str+i),a,b,pnt(a,b));


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
