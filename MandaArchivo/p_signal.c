#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main (){

int i= 0, mh;
  mh=fork();

while(1){
    printf("%d -- %d\n ", getppid(), i++);
      sleep (1);
    }
  if(mh==0 && i<10){
    wait(&mh);
    printf("me morì %d -- %d\n ", getpid(), i);

    }

  return 0;
}
