#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tpc5_soporte.h"


int main ()
{
  int x1,x2,x3,x4;
 x1=  printf("+1 - yo soy de alto nivel");
 x2=  write (1,"*2-SOY DE BAJO NIVEL -",50);
 fclose(stdout);
 x3=  printf("+3 - chau, me voy");
 x4=  write (1,"4 - YO NO -",53);

      fprintf(stderr, "\n\n %d %d %d %d \n\n", x1, x2, x3, x4 );
    return 0;

}
