#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO_NAME "test_fifo"
int main()
{
	char s[300];
	int num, fd;

	if (mknod(FIFO_NAME, S_IFIFO | 0666, 0)<0)
		perror ("mknod");
        
	printf("esperando lectores...\n");
	if ((fd = open(FIFO_NAME, O_WRONLY))<0)
	{
        perror ("\n **** Error Fatal **** \n");
        exit (0);
    }

	
    printf("tengo un lector—tipee algo\n");
	while (fgets(s, sizeof s, stdin), !feof(stdin)) 
	{
		if ((num = write(fd, s, strlen(s))) == -1)
			perror("write");
		else
			printf("speak: wrote %d bytes\n", num);
	}

	close (fd);
return 0;
}