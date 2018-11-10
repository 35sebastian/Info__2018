#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include "header.h"

int main (){

/*	    char str[100];
    memset(str,0,100);	*/
		int cont =0;

		(int)(*funccont)(void);
		funccont=&contador;
		funccont(cont);

    signal (SIGUSR1, contador);
    signal (SIGUSR2, imprimir);

    	while (1){
        	printf (" %3d) %5d\n",i++,(int)getpid());
        	sleep (1);
    	}

    	while(count != '\0'){
        	*(str + i ) = (count%10) + '0';
        	count = count/10;
        	i++;
    	}
    puts(" ");

    return 0;
}
