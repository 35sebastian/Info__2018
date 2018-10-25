#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

/*struct{
	int legajo;
	short verif, edad, categoria;
	char coment;
}datos;
*/
int read_line(int, char *, int);

int main (void)
{

	int fd1;

	char string[2000];

	fd1=open("tpc_datain1.txt",O_RDONLY);
 	//fd2=open("tpc_out.txt",O_RDWR);

	if(fd1<0)
		{
			printf("No se pudo abrir el archivo");
			return 0;
		}

		while(read_line(fd1,string,1999)){
			printf("%d - [%s] \n", atoi(string), string);
		}

  //	status1=read	(fd1,string,2000);
  //  status2=write(fd2,string,200);

	close(fd1);
  //close(fd2);
return 0;

}


int read_line(int fd1, char * string, int i){

	char c;
	int h;
	i=0;

	while ((h=read(fd1,&c,1))>0) {
		string[i]=c;
		{
			if(c=='\n'){
				string[i]=0;
				return i;
			}
			i++;
		}
	}
	return i;
}
