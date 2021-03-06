#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir(const char ** nombres, int cant){
	int i=0, j=1;
		while( i < cant ){
			printf("%d -> %s\n",j,nombres[i]);
			i++; j++;
		}	printf("\n");
	}

int comparador(const void *a, const void *b){
	const char *pa = *(const char**)a;
	const char *pb = *(const char**)b;
	return strcmp(pa,pb);
	}

int main (int argc, char ** agcv){

	system("clear");

	const char *nombres[] = {"walter","nicolas","pablo","roberto","mariano","tomas","pedro","manuel","pablo","ariel"};
	int cantNombres;

	cantNombres = sizeof(nombres) / sizeof(char *);		// como funciona Bien este sizeof (char *), no lo toma siempre como 8 bytes?

	imprimir(nombres,cantNombres);										// La función recibe como parámetros los nombres y la cantidad de ellos

    qsort(nombres, cantNombres, sizeof(char *), comparador);	// Quick sort recibe como parámetro: los nombres, las cantidades, el largo del tipo dato, la función comparador(puntero a función))

	imprimir(nombres,cantNombres);

	return 0;

	}
