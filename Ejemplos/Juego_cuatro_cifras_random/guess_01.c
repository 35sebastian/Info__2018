
// Adivina los 4 dígitos
// Version 1
// conocimmientos reducidos

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

//---------------------------------------- digitos bien ubicados

int check_digit_ok(int num,int pos,int dig)
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

//---------------------------------------- digitos mal ubicados

int check_digit_reg(int num,int pos,int dig)
{
int sum=0;	
int i=0;
// check digito x digito menos la posicion coincidente

	while( i<4 )
	{
		if (pos != i)
			if (get_digit(num,i)==dig)
				sum++;

		i++;
	}
	
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


//---------------------------------------- Generador de numero

int generar_numero()
{
int x;
int flag=1;

	srand(time(NULL));
	while (flag)
	{
		x=rand()%10000;
		
		flag = cant_digit_reg (x,x);
	}

	return x;
}


//---------------------------------------- el main

int main ()
{
int num;	
int val;
int bb=0,rr;
int cont=1;

	num=generar_numero();
			
	printf ("\n ========== Adivina el numero ==========\n");
	printf ("\n        Ingrese nros de 4 dígitos\n");
		
	while (bb!=4)
	{
		printf ("- %02d ->",cont);
		scanf ("%d",&val);
			
		bb=cant_digit_ok(num,val);
		rr=cant_digit_reg(num,val);
		printf ("\t\t-> %d B / %d R\n",bb,rr);
		cont++;
			
	}

	printf ("\n\n Felicitaciones !!!\n adivinaste en %d intentos\n\n",cont);

		
return 0;	
}