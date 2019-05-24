/*
 * Parte 5
 *      determinamos cuantos dígitos coincidentes en valor
 *      pero distinta posición hay entre dos nros de 4 digitos 
 *  
 * version 1
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

int check_digit_reg(int num,int pos,int dig)
{
int sum=0;	
	// check digito x digito menos la posicion coincidente

	//---------------------- 0
	if (pos != 0)
		if (get_digit(num,0)==dig)
			sum++;

	//---------------------- 1
	if (pos != 1)
		if (get_digit(num,1)==dig)
			sum++;
	//---------------------- 2
	if (pos != 2)
		if (get_digit(num,2)==dig)
			sum++;
		
	//---------------------- 3
	if (pos != 3)
		if (get_digit(num,3)==dig)
			sum++;

return sum;
}


int cant_digit_reg (int num1,int num2)
{
int i=0;
int sum=0;

	while (i<4)
	{
		sum+=check_digit_reg(num1,i,get_digit(num2,i));
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

	printf ("\n hay %d coincidencia/s\n\n",cant_digit_reg(a,b));
		
return 0;	
}