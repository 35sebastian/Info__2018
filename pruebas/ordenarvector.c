/* 
ordenar de menor a mayor un vector


como tarea ordenar un array de string con la funcion qsort arr[]= {colectivo, telefono, teclado,sube}
*/

#include <stdio.h>

int comparador(int *a, int *b);
void pnt(int *p, int c);

int main (){
    
    int arr[20];
    int i;
    
    for(i = 0; i < 20; i++){
        
        arr[i] = rand()%1000;
        
        
    }
    printf("\n");
    
    printf("%d",arr[i]);
    
    printf("\n");
    
    
    /*  void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *)); */

    qsort(arr,20, sizeof(int),comparador);      //qsort(arr,20, sizeof(int),int(*) (const void *, const void *)); asi lo casteo
    
    
    
//     printf("%d %d\n",arr);
    
    return 0;
}
/*
int comparador(int *a, int *b){
    
    if(*a > *b){
        
        return *a - *b;
    }
    
    return (-1);
    
}*/

void pnt(int *p, int c){
    
    int i;
    
    for(i = 0; i < c ; i++){
        
        printf("%4d %c", p[i], !(i%4)? '\n': '-');
        
    }
    printf("\n\n");
    
    
}

int comparador(const void *a, const void *b){
    
    return *(int *) a) - *((int *) b);
}
