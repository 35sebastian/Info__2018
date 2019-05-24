#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define sx "abcdefghijklmnopqrstuvwxyz1234567890"

void ign_signal (int);

int main (int argc, char **argv)
{
char sBuf[256];
int pfds[2];
int n;
pid_t p_id;


	if (pipe(pfds) == -1) 
	{
		perror("pipe");
		exit(1);
	}

	printf ("\n ---- START ---- \n");
	
	
    if ((p_id=fork ())<0)
    {
        perror ("\n **** Error Fatal **** \n");
        exit (0);
    }

	if (p_id)
	{
		ign_signal(SIGCHLD);
		
		printf ("\n ---- PADRE - Reader ---- ");

		printf("P RD - fd[0]: %d\n", pfds[0]);
		n=read(pfds[0], sBuf, 10);
		sBuf[n]=0;
		printf("P RD - read %d bytes [%s]\n",n, sBuf);

		n=read(pfds[0], sBuf, 10);
		sBuf[n]=0;
		printf("P RD - read %d bytes [%s]\n",n, sBuf);

		printf ("P RD*\n ---- Fin del PADRE ---- ");
	}
	else
	{
//		sleep(5);
		printf ("\n ---- HIJO - Writer --- ");
		
		printf("H WR - text: %s\n", sx);
		write(pfds[1], sx, strlen (sx)+1);
#if 0
		printf("H RD - fd[0]: %d\n", pfds[0]);
		n=read(pfds[0], sBuf, 20);
		sBuf[n]=0;
		printf("H RD - read %d bytes [%s]\n",n, sBuf);
#endif 
		printf ("H WR* \n ---- Fin del HIJO ---- ");

	}
	
	close (pfds[0]);
	close (pfds[1]);
	
	
return 0;    
}

void ign_signal (int sig)
{
	struct sigaction sa;

	sa.sa_handler = SIG_IGN;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);

	if (sigaction(sig, &sa, NULL) == -1) {
		perror("sigaction");
		exit(1);
	}

}