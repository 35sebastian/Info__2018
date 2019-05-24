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
     write(1,&a,1);
 write (1,"\n\n",2);
 
 T_FIN();
 
        
    return 0;
    
}
