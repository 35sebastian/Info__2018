#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#define STR1 "Hola cómo estás"

int main(){
  int fd[2],x;
  char sBuff[16];

    if (pipe(fd)==-1){
      printf("ERROR\n");
    }
    //fork();
      write (fd[1],STR1,strlen(STR1));
  //  write (fd[1],str[1],STR1,strlen(STR1));

  x=read(fd[0],sBuff,100);

printf("bytes leidos %d \n",x);
getchar();          //este getchar es para conrolar quien imprime el buffer en pantalla read o Write
  write (1,sBuff,x);
printf(" \n");

close(fd[1]);
close(fd[0]);

}
