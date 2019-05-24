#include <stdio.h>
#include <stdlib.h>
typedef char u8_t;

void* memo_fill (int sz, u8_t data);

int main(void)
{
    int sz= 100000000;
    char * pointer;
    
//     typedef char u8_t;
    u8_t data='e';
    pointer= memo_fill (sz, data);
    
    printf("la direccion de memoria es:%p", pointer);
//     free(p);
    return 0;
}
