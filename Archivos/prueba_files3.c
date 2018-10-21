#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tpc5_soporte.h"

#define LOOP 100000

int main ()
{
 int i;
 char a='X';
 
 T_INI();
 for(i=0;i<LOOP;i++)
     putchar(a);
 
 putchar('\n');
 putchar('\n');
 
 
 T_FIN();
 
        
    return 0;
   
}
