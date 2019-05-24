#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_MAX   3

void init_array( int *array, int size);

void print_array( int *array, int size);

void fill_random_array( int *array, int size, int min, int max);

int find_value_from_array( int *array, int size, int value  );

int main(void){

    int vector[ARRAY_MAX];
    int posicion_buscado = -1;
    int buscado = 0;
    int salir = 0;

    // inicializo cada valor del array con 0
    // init_array( vector, ARRAY_MAX );

    // inicializo con numeros aleatorios
    fill_random_array( vector, ARRAY_MAX, 1 , 100);

    // muestro en pantalla el array
    print_array ( vector, ARRAY_MAX);


   while( salir == 0 ){

        printf("Ingrese un numero a buscar != 0:");
        scanf ("%d", &buscado);

        if (buscado != 0){
            posicion_buscado = find_value_from_array(vector, ARRAY_MAX, buscado);
            if ( posicion_buscado != -1 )
                printf("Numero ENCONTRADO en la posicion %d\n", posicion_buscado );
            else
                printf("Numero NO ENCONTRADO!\n");
        }
        else{
            salir = 1;
        }
    }


    return 0;


}


void init_array( int *p, int size){
    int i;


    for ( i = 0; i <size;i++){

        // notacion de punteros
        *(p + i)= 0;

        //notacion de vector
        //p[i] = 20;

    }

}


void print_array( int *p, int size){
    int i;

    for ( i = 0; i <size;i++){

       printf("%d -> %d\n", i, *(p+i));


    }

}

void fill_random_array( int *p, int size, int min , int max){

    int i;

    srand(time(NULL));

    for (i=0;i<size;i++){
        p[i] = min + rand()%(max+1-min);
    }

}


int find_value_from_array( int *p, int size, int value  ){

    int i;

    for(i = 0; i<size; i++)
        if(p[i] == value)
            return i;

    return -1;

}
