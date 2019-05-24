/*******************************************
*                                          *
*              puntero a funcion           *
*                pnt_fnc_4.c                *
*                                          *
*******************************************/

/*
Ejemplo de Vector de Puntero a Funcion
Simulacion de detector de Alarma
*/
#include <stdio.h>

#define PORT_IN 0x200
#define DBG 1

void alm1();
void alm2();
void alm3();
void alm4();
void alm5();
void alm6();
void alm7();
void alm8();

int main(void)
{
void (*p[]) (void)={alm1,alm2,alm3,alm4,alm5,alm6,alm7,alm8};
unsigned char in,msc;
int i;

	while (1)
	{
#if !DBG
		in=leer_port(PORT_IN);	// no implementado
#else
		fprintf (stdout,"\n 0x");
		fscanf(stdin,"%x",&i);
		in=i;	// se queda con los 8bits menos significativos
#endif

		for (i=0,msc=1;i<8;i++,msc<<=1)
			if(in &msc)
				p[i]();
	}
	
return 0;
}

void alm1()
{
printf ("1 ");
}
void alm2()
{
printf ("2 ");
}
void alm3()
{
printf ("3 ");
}
void alm4()
{
printf ("4 ");
}
void alm5()
{
printf ("5 ");
}
void alm6()
{
printf ("6 ");
}
void alm7()
{
printf ("7 ");
}
void alm8()
{
printf ("8 ");
}



