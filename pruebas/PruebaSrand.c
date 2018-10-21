//DE MENOR A MAYOR (Ascendente)
#define TAM 4

#include <stdio.h>

int main (){

int i,j, temp;
int lista[]= {12,0,1,79,5,3};

			for (i=1; i<TAM; i++)
			for (j=0 ; j<TAM - 1; j++){
			if (lista[j] > lista[j+1])
				{
				temp = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = temp;
				}
			 printf("La lista ordenada es: %d\n", lista[i]);
			}
				
      

return 0;
}

