#include <stdio.h>
/* Definición de la estructura */
struct coordenadas
{
    float x;
    float y;
    float z;

};
struct segunda
{
    float nombre;
    float apellido;
    float edad;
};

int main()
{
    /* Declaración de dos estructuras */
    struct coordenadas location1, location2;
    /* Declaración de dos punteros */
    struct coordenadas *ptr1, *ptr2;

    struct segunda loc1, loc2;

    struct segunda *nombre, *apellido;
    /* Asignación de direcciones a los punteros */
    ptr1 = &location1;
    ptr2 = &location2;
    nombre= &loc1;
    apellido= &loc2;
    /* Asignación de valores a la primera estructura */
    ptr1->x = 3.5;
    ptr1->y = 5.5;
    ptr1->z = 10.5;

    /* Copia de valores a la segunda estructura */
    ptr2->x = ptr1->x;
    ptr2->y = ptr1->y;
    ptr2->z = ptr1->z;

    /* Copia de valores a la segunda estructura */
    nombre->nombre = ptr2->x;
    nombre->apellido = ptr2->y;
    nombre->edad = ptr2->z;

    apellido->nombre = ptr2->x;
    apellido->apellido = ptr2->y;
    apellido->edad = ptr2->z;

    printf("%.1f -- %.1f\n", ptr1->y, ptr1->x);
    printf("%f -- %f -- %f\n", apellido->nombre, apellido->apellido, apellido->edad);

    return 0;
}
