#include<stdio.h>

int main(){

	int i,j,aux,cn,n[100];

	printf("Dimension del Vector: ");	//indicar la cantidad de ingresos a evaluar
	scanf("%d",&cn);

		for(i=0;i<cn;i++){
			printf("Ingrese el Elemento : ");
			scanf("%d",&n[i]);						//ingresar los elementos a evaluar, deben ser números porque está usandosé la variable int
			}

		for(i=1; i<cn; i++){						//recorre el vector
			for(j=0; j<cn-1; j++){				//recorre pero con un elemento de diferencia
					if(n[j]>n[j+1]){					//comparacion y ordenamiento
						aux    = n[j+1];				//su es decreciente guarda el contenido del elemento posterior en aux
						n[j+1] = n[j];					//se le asigna el valor de anterior a posterio
						n[j]   = aux;						//se coloca el valor que estaba en posterior en aterior
						}
					}
				}

		for(i=0;i<cn;i++){							//imprime todos los elementos ingresados ordenados por Burbuja
			printf("\n%d",n[i]);
			}

	return 0;
}
