#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tpc5_soporte.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#define LOOP 1000

typedef struct {
  int code;
  int val;
}ST_DAT;

int main ()
{
  int fd;
  int i;
  char sx[200];
  ST_DAT st;

  memset(sx,'X',50);
  fd=open("./alfa.dat",O_RDWR);   //  fd=open("./alfa.dat",O_RDWR|O_TRUNC); | es un OR a nivel de bits

  if(fd<0)
  {
    fprintf(stderr, "ERROR de apertura\n");
    return 0;
  }

  for(i=0;i<LOOP;i++)
      {
        st.code=i;
        st.val=i*4
        write(fd,&st,sizeof(st));
      }


/*  while ((i=read(fd,&st,sizeof(st)))>0 ) {
    sx[i]=0;
    printf("%d %d\n"st.code, st.val );
  }*/

  return 0;

}
