#include <stdio.h>
#include "network.h"

void servidor(char ** argv){
	
//		printf("%s \n", argv[1]); //MODO

		int fd, len;
		char st[100]; //buffer donde recibe el mensaje del cliente

		printf(">Esperando conexiones...\n");

		fd = OpenServer(23456); //parametro le paso el puerto
		if(fd<0)
		{
			printf("Error al inciar el servidor\n");
			exit(0);
		}

		printf(">Se conectó un cliente...\n>Esperando mensaje...\n");

		// Leo largo del mensaje a recibir
		read(fd,&len,sizeof(int));
	
		printf(">Se recibió largo de paquete: %d caracteres\n", len);

		// Leo mensaje
		read(fd,st,len);


		//estos dos read los uso, uno para recibir el largo del mensaje, el otro el mensaje, esto es un protocolo definido a nivel programador
		//puedo optar por enviar el mensaje derecho, o enviar un codigo, luego el byte con el largo y luego el mensaje.
		//El servidor y el cliente deben seguir ese protocolo para que funcione ok.

		printf(">Mensaje recibido:\n%s\n>Cerrando conexión...\n", st);	

		CloseServer(fd);

		printf(">Desconectado!\n");
	
	}
