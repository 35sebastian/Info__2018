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
        
	printf("esperando a quien escriba...\n");
	if ((fd = open(FIFO_NAME, O_RDONLY))<0)
//	if ((fd = open(FIFO_NAME, O_RDWR))<0)
	{
        perror ("\n **** Error Fatal **** \n");
        exit (0);
    }

	printf("conseguí un escritor:\n");
	do {
		if ((num = read(fd, s, 300)) == -1)
			perror("read");
		else 
		{
			s[num] = '\0';
			printf("tick: read %d bytes: \"%s\"\n", num, s);
		}
	} while (num > 0);
    	
	close (fd);

return 0;
}