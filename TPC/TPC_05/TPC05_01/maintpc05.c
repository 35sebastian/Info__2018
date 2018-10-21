#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tpc5_soporte.h"

//typedef char u8_t;

void* memo_fill (int sz, u8_t data);
void* memo_fill2 (int sz, u8_t data);
void* memo_fill3 (int sz, u8_t data);
void* memo_fill4 (int sz, u8_t data);

int main(void)
{
    int sz= 10000;
    char * pointer;
    T_INI();

    u8_t data='e';
    pointer= memo_fill (sz, data);
    T_FIN();
    
    
    T_INI();
    pointer= memo_fill2 (sz, data);
    T_FIN();
    
    T_INI();
    pointer= memo_fill3 (sz, data);
    T_FIN();
    
    T_INI();
    pointer= memo_fill4 (sz, data);
    T_FIN();
    
    printf("\nla direccion de memoria es:%p\n", pointer);
    
    free(pointer);
    return 0;
}
