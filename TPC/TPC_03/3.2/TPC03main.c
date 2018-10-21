#include <string.h>
#include <stdio.h>
#include <ctype.h>
//int xtr_len (const char *);
//int xtr_qtty (const char *, char);
char * xtr_chg_case (char *, int);

int main()
{
	char string[20] ="HolaQueTal";
	//int a;
	char *c=0;
	int opcion;
	
	printf ("ingrese una opcion: \n 1)Todo mayusculas \n 2)Todo minusculas \n 3)Empice con mayuscula y siga con minusculas \n\n");
	scanf("%d", &opcion);
	
	//const char string[20]="Holaquetal";
	//xtr_len (string);
	//a= 'f';
	//xtr_qtty (string, a);
	opcion=1;
	xtr_chg_case (string, opcion);
	printf("\n El resultado es:'%p' \n", c);
	
	return 0;
}

