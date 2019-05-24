#include <stdio.h>
#include <stdlib.h>

#define NOTA1 	"Los valores recibidos son todos mayores a cero\n"
#define NOTA2 	"Los valores recibidos son todos negativos\n"
#define NOTA3 	"Hay dos de los valores recibidos que son iguales\n"
#define NOTA4	"Los tres valores recibidos son iguales\n"
#define NOTA5	"Que lindos números!\n"

int cmp (int a, int b,int c)
{
    int flag=0;							// Utilizo flag para avisarme si pudo realizar la función cmp

    if(a>0 && b>0 && c>0){
        printf(NOTA1);
        flag=1;
		}
		if(a<0 && b<0 && c<0){
			printf(NOTA2);
			flag=2;
			}
			if((a==b && b!= c) || (b==c && c!=a) || (c==a && a!=b)){
				printf(NOTA3);
				flag=3;
				}
				if(a==b && b==c){
					printf(NOTA4);
					flag=4;
					}
					if(flag==0){
						printf(NOTA5);
						}
        return 0;
}
