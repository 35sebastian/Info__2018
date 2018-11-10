#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>


void imprimir (){

    signal (SIGUSR2, imprimir);
    	enbucle=0;  /* Salir del bucle */
    printf ("Hice m i trabajo y bien hecho. Entonces me voy!\n");
}
