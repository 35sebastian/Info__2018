#include <stdio.h>
#include <math.h>
/* Definición de la estructura */
struct coordenadas{
    float x;
    float y;
    float z;
};

/* Definición de función que calcula la distancia entre dos puntos */
float distancia(struct coordenadas a, struct coordenadas b){      //se pasa como parametros las estructuras
    return sqrtf(pow(a.x - b.x, 2.0) +
                 pow(a.y - b.y, 2.0) +
                 pow(a.z - b.z, 2.0));
}

int main()
{
    /* Declaración e inicialización de dos variables */
    struct coordenadas punto_a = { 3.5e-120, 4.5, 0.5 };
    struct coordenadas punto_b = { 2.3e-120, 7.1, 6.3 };
    float d; /* Almacenar el resultado */

    /* Llamada a la función con las dos estructuras */
    d = distancia(punto_a, punto_b);
    /* Imprimir el resultado */
    printf("%f\n", d);

    return 0;
}
