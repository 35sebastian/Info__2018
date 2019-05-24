/* 
Practicar y buscar la funcion qsort


apt-get install kdbg

para llamarlo al programa debageador

kdbg punteros.o

*/

#include <stdio.h>

void swap(int *x, int *y);

int main (){
    
    int a,b;
    
    a = 2;
    b = 5;
    
    printf("a es:%d \t b es: %d\n",a,b);
    
    puts("");
    
    printf("Intercambiar\n");
    
    puts("");
    
    swap(&a,&b);
    
    printf("a es: %d \t b es: %d \n",a,b);

    
}

void swap(int *x, int *y){
    
    int aux;
    
    aux = *x;
    *x = *y;
    *y = aux;
    
}
