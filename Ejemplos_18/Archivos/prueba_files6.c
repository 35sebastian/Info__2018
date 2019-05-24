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
  char sx[20];

  fd=open("./alfa.dat",O_RDWR);

  if(fd<0)
  {
    fprintf(stderr, "ERROR de apertura\n");
    return 0;
  }
  lseek(fd,0,SEEK_END);

  for(i=0;i<10;i++){
  sprintf(sx,"%d-",i);
  write(fd,sx,strlen(sx));
  }
  return 0;

}
