#include "tpc5_soporte.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* memo_fillx (int sz, u8_t *data, int nn);

int main(void)
{
    int sz= 500;
    char * pointer;
    int nn; 
    
    u8_t data[]="holaesteesunstringdeprueba";
    nn=(sizeof(data));
    
    T_INI();
    pointer= memo_fillx (sz, data, nn);
    T_FIN();
    
       
//     printf("\nla direccion de memoria es:%s\n", pointer);
    
    free(pointer);
    return 0;
}
