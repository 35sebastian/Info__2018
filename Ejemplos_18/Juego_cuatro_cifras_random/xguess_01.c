/*
 * Parte 1
 *      Extraemos un digito determinado de un numero
 */

#include <stdio.h>
#include <math.h>


int get_digit(int num,int pos)
{
int ret;

	ret= num/pow(10,pos);
	ret%=10;
	
return ret;
}

int main ()
{
int num=4527;	

		printf (" número: %d \n",num);
		
		printf ("\t\t  d0: %d  - d1: %d ",get_digit(num,0),get_digit(num,1));
		printf ("- d2: %d  - d3: %d \n",get_digit(num,2),get_digit(num,3));
	
	
return 0;	
}