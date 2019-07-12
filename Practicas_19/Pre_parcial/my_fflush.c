#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_fflush(void){
  setbuf( stdin, NULL );
}
