#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv){

	int FD[2];
	char str01[20]="Holapipe";
	char str02[20];
	pid_t pid;
	pipe (FD);

	pid= fork();
	write(FD[1],str01,20);
printf("%d\n",pid);
	read(FD[0],str02,20);

	printf("\nlo leido es: %s\n", str02);
	printf("\nel pid es:%d\n", getpid());

	close(fd[0]);
	close(fd[1]);
return 0;
}
