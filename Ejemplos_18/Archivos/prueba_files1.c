#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tpc5_soporte.h"


int main ()
{
 printf("+1 - yo soy de alto nivel");
 write (1,"*2-SOY DE BAJO NIVEL -",50);
 printf("+3 - chau, me voy");
 write (1,"4 - YO NO -",53);

    return 0;

}
