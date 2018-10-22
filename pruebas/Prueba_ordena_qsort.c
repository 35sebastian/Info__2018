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
/*
➜  pruebas git:(branch_example) ✗ ./Prueba_ordena_qsort

0 - 83
1 - 86
2 - 77
3 - 15
4 - 93
5 - 35
6 - 86
7 - 92

Despues de qsort

0 - 15
1 - 35
2 - 77
3 - 83
4 - 86
5 - 86
6 - 92
7 - 93
*/
