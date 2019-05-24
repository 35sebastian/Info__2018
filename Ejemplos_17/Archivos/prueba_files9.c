#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tpc5_soporte.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main ()
{
  int fd;
  int i;
  char sx[200];

  memset(sx,'X',50);
  fd=open("./alfa.dat",O_RDWR);   //  fd=open("./alfa.dat",O_RDWR|O_TRUNC); | es un OR a nivel de bits

  if(fd<0)
  {
    fprintf(stderr, "ERROR de apertura\n");
    return 0;
  }

  while ((i=read(fd,sx,10))>0 ) {
    sx[i]=0;
    printf("%d %s\n",i, sx );
  }

  return 0;

}
