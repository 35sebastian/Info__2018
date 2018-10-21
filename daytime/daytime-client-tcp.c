#include <stdlib.h>
#include <err.h>
#include <string.h>
#include <unistd.h>

#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int sockfd, n = 0;
    char recvline[1000 + 1];
    struct sockaddr_in servaddr;
	int port = 3000;												/* daytime server, well-know port = 13*/

	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		err(1, "Socket Error");
    }

    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);

    if(inet_pton(AF_INET,argv[1],&servaddr.sin_addr)<=0){
      perror("Inet pton");exit(3);
    }
    if (connect(sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr)) < 0) {
		err(1, "Connect Error");
    }

	while ((n = read(sockfd, recvline, 1000)) > 0) {
	    recvline[n] = 0;
	    fputs(recvline, stdout);
	}

	return 0;
}
