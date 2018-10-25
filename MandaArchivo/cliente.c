#include <stdio.h>
#include <string.h>
#include "network.h"

void cliente(char ** argv){

//		printf("%s \n", argv[1]); // MODO
//		printf("%s \n", argv[2]); // IP

		int fd;
		char st[100];
		int len;

		fd = ConnectToServer(argv[3],23456);

		if (fd == 0)
		{
			perror("Error al conectar con el servidor");
		}

		printf(">Conectado con el Servidor...\n");

			printf(">Leyendo archivo\n> ");

		printf(">Ingrese una cadena de texto para enviar al servidor\n> ");

		fgets(st,100,stdin);
		len = strlen(st);
		len ++;	// Agrego para enviar el '/0'

		// Envío largo del mensaje
		write(fd,&len,sizeof(int));

		// Envío mensaje
		write(fd,st,len);

		printf(">Mensaje enviado...\n");

		sleep(2);

		printf(">Desconectando...\n");

		DisconnectFromServer(fd);

		printf(">Desconectado!\n");

	}
