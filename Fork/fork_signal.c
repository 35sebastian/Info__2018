#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define MSG1 "\n\nXXX - Se murio el hijo\n\n"
int hd;
void handel_child (int x)
{
(void ) x;
		
	write (1, MSG1,strlen (MSG1));
	wait(&hd);
}

int main (int argc, char **argv)
{
char s[256];
int hd;
pid_t p_id;

	strcpy (s,"str:");
	hd=5;
	
	printf ("\n ---- START ---- %d ", getpid());
	printf ("\n aaa) main: (%p)  %s(%p)  int: %d (%p)\n",main,s,s,hd,&hd);
	sleep(5);

	printf ("\n----- * -----\n");    

    if ((p_id=fork ())<0)
    {
        perror ("\n **** Error Fatal **** \n");
        exit (0);
    }

	if (p_id)
	{
		signal(SIGCHLD,handel_child);
		printf ("\n ---- PADRE ---- ");
		printf ("\nProceso Padre (%d) - mi hijo es (%d)",getpid(),p_id);
		printf ("\n bbb) var p_id: %5d  main: (%p)  %s(%p)  int: %d (%p)\n",p_id,main,s,s,hd,&hd);
		
//		wait(&hd);
//		printf("PADRE: Mi hijo dijo: %d - %X\n", WEXITSTATUS(hd), hd);

		getchar();
		printf("PADRE: Mi hijo dijo: %d - %X\n", WEXITSTATUS(hd), hd);
		getchar();
		printf ("\n ---- Fin del PADRE ---- ");
		
		
	}
	else // p_id value 0
	{
		sleep(1);
		printf ("\n ---- HIJO ---- ");
		printf ("\nProceso Hijo (%d) - mi padre es (%d)",getpid(),getppid());
		printf ("\n ccc) var p_id: %5d  main: (%p)  %s(%p)  int: %d (%p)\n",p_id,main,s,s,hd,&hd);
		
		sleep(5);
		printf ("\n ---- Fin del HIJO ---- ");
		return 23;

	}
	
        
return 0;    
}
