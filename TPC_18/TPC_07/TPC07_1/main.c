#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include "header.h"
#include <string.h>

int main (){

		char str[100];
    memset(str,0,100);
		int cont =0, i=0;

		void (*funccont)(int);
		funccont=&contador;
		funccont(cont);

    signal (SIGUSR1, contador);
    signal (SIGUSR2, imprimir);


    	while (1){
        	printf (" %3d) %5d\n",i++,(int)getpid());
        	sleep (1);
    	}
printf ("%d", cont);
  		while(cont != '\0'){
        	*(str + i ) = (cont%10) + '0';
        	cont = cont/10;
        	i++;
    	}
			//write (0,cont,6);
    puts(" ");

    return 0;
}
