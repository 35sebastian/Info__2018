#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// series
void serie_fib(int q, int qmax, char csv_sep);
void serie_pot(int q, int qmax, char csv_sep);
void serie_fact(int q, int qmax, char csv_sep);
void serie_prim(int q, int qmax, char csv_sep);

// gestión de los de Argumentos de Linea de Comandos
int my_getopt(int argc, char *argv[], int *q, int *mode, int *serie, char *separador );

void usage(void);

void print_serie ( int q, int serie, char separador);

int menu ( int q, int serie, char separador);

//limpiar el buffer del teclado
void my_fflush(void);
