#include <stdio.h>
#define VERDADERO 5
#define FALSO 3

//void ternario_ptr (int x, int y, int *p);
void ternario_avanzado (int *, int, int, char);             //prototipos de función

int main (){ 

    int a,b,z;
    char cond;                                      //Declaración de variables

    a = 2;
    b = 5;
    z = 0;

    printf("ingrese la condició [ < (menor que) o > (mayor qué)]:");    //solicita que ingrese la condición para comparar
    scanf("\n%c", &cond);


    ternario_avanzado (&a, b,z, cond);
    if (a==2) return 0;
    printf("a es: %d \n",a);

}

void ternario_avanzado (int * p,int x, int y,char cond){        //función que realiza una evaluaciñón de ternarios en función de la condición entregada

    if( cond == '<' || cond == '>'){
        if(cond == '>'){
            if(x > y){

                *p = VERDADERO;
                return;
            }
            else
            *p = FALSO;}

            if(cond == '<'){
                if(x < y){

                    *p = VERDADERO;
                    return;
                }
                else
                *p = FALSO;}
            }
            else
            printf("La condición ingresada no es correcata\n");
    return;
}

/*void ternario_ptr (int x, int y,int * p){

    if(x > y){

        *p = VERDADERO;
    }
    else
        *p = FALSO;

    return;
}
*/
