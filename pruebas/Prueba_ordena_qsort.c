#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 8

//recibo un array (es void ya que puede ser un array de enteros, de float, de estructuras de lo que sea).
//recibo la cantidad de elementos del array int cantidad
//recibo el tamano de cada elemento int sz

//	void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));

void prt(int *p, int c){      // La función se encargara de mostrar en pantalla los array y la cantidad de elementos

	int i;

	printf("\n");
	for(i=0; i<c; i++){

		printf("%d - %d",i,p[i]);
		printf("\n");

		}

	}

int comparador(const void *a, const void *b){   //puntero a funcion

	return *(int *)a-*(int *)b;

	}

int main (int argc, char ** argv){

	int arr[CANTIDAD];
	int i;
//  int (*pnt) (int, int);

//	pnt=comparador;

	for(i=0;i<CANTIDAD;i++)
		arr[i]=rand()%100;
	prt(arr,CANTIDAD);

	             //llamo a ordenar
	qsort(arr, CANTIDAD, sizeof(int),comparador);

	printf("\nDespues de qsort\n");

							//da waring aca lo resuelvo modificando el prototipo de la funcion, tiene que ser igual a la que pide la funcion
	prt(arr,CANTIDAD);

	return 0;

	}
