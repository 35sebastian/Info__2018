#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(){

  pid_t pid;
  int FD[2];
  char str01[20]="HolaPipe";
  char str02[20];

    pipe(FD);
    pid= fork();

  if(!pid) printf("Soy Luke y mi PID es: %d\n", getpid() );
      else printf("Soy su padre y mi PID es: %d\n", getpid() );

  write(FD[1],str01,20);

  read (FD[0],str02,20);

  printf("\n El string por pipe es: %s \n", str02);

  return 0;

}
