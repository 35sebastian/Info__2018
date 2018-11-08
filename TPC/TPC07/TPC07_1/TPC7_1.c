#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

void sigsusr1_counter(int );
void sigsusr2_counter(int );

int main (){
int i=0;

		signal(SIGUSR1,sigsusr1_counter);
		signal(SIGUSR2,sigsusr2_counter);

write(1,signal(SIGUSR1,sigsusr1_counter),12);

	while (1){
		printf (" %3d) %5d\n",i++,(int)getpid());
		sleep (1);
	}

return 0;
}

void sigsusr1_counter(int sig){

		 (void)sig;
	//	 int *contusr1=0;
		 write(1,"SIGUSR1\n",10);

}

void sigsusr2_counter(int sig){

		 (void)sig;
		// int *contusr2=0;
		 write(1,"SIGUSR2\n",10);

}
