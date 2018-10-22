
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

void detect_sigusr1(int);

void sigsusr1_handler(int sig){

    (void)sig;                        //porqye declara (void)sig;? no es necesario

      write(1,"#~{~¬[#]}\n",12);      // Write(salida por pantalla, String, bytes a escribir)
}

int main (){

  int i= 0;

  signal(SIGUSR1,sigsusr1_handler);
  signal(SIGUSR1,detect_sigusr1);
//  signal(SIGINT,sigsusr1_handler);   //usada en clase

    while (1){
      printf("%d -- %d\n ", getpid(), i++);
      sleep(1);

      }
  return 0;
}


void detect_sigusr1(int sig){

  int flag=1;
  if (sig==29){
    flag++;
    if(flag==4)
      return 0;
    }

  if (sig==30){
    flag=1;
  }
}
