
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void sigsusr1_handler(int sig){
(void)sig;
write(1,"#~{~¬[#]}\n",12);
}

int main (){

int i= 0;

  signal(SIGUSR1,sigsusr1_handler);
  signal(SIGINT,sigsusr1_handler);
while (1){
  sleep(1);
  printf("%d -- %d\n ", getpid(), i++);
}

  return 0;
}
