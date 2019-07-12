#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define SERIE_DEFAULT   1
#define SERIE_FIB       1
#define SERIE_POT       2
#define SERIE_FACT      3
#define SERIE_PRIM      4

void print_serie ( int q, int serie, char csv_sep){


  //printf("DEBUG::q=%d, serie=%d, csv_sep=%c\n", q, serie, csv_sep);

  switch (serie ){

    case SERIE_FIB:
    serie_fib(q, serie, csv_sep);
    break;

    case SERIE_FACT:
    serie_fact(q, serie, csv_sep);
    break;

    case SERIE_POT:
    serie_pot(q, serie, csv_sep);
    break;

    case SERIE_PRIM:
    serie_prim(q, serie, csv_sep);
    break;

  }


}
