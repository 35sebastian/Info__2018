/*
 * Parte 4
 *      determinamos cuantos dígitos coincidentes en valor y posición
 *      hay entre dos nros de 4 digitos 
 *  
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

int check_digit_ok (int num,int pos,int dig)
{
	if (get_digit(num,pos)==dig)
		return 1;
	
return 0;
}

int cant_digit_ok (int num1,int num2)
{
int i=0;
int sum=0;

	while (i<4)
	{
		sum+=check_digit_ok(num1,i,get_digit(num2,i));
		i++;
	}
	
return sum;
}



int main ()
{
int a,b;

	printf ("Ingrese 1er numero:");
	scanf("%d",&a);
	
	printf ("Ingrese 2do numero:");
	scanf("%d",&b);

	printf ("\n hay %d coincidencia/s\n\n",cant_digit_ok(a,b));
		
return 0;	
}