#include <stdio.h>
#include <sys/time.h>
#include "tpc5_soporte.h"


#define TT_CALC_SEG(t1,t2) (int)(((t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec))/1000000)
#define TT_CALC_USEG(t1,t2) (int)(((t2.tv_sec-t1.tv_sec)*1000000+(t2.tv_usec-t1.tv_usec))%1000000)



void tt_calc_tiempo( int modo) 
{
static struct timeval ti={0,0};
static int cnt=-1;

struct timeval taux;

	gettimeofday(&taux,NULL);
	
	if (!modo)	// inicializacion
	{
		ti=taux;
		cnt=0;
	}
	else		// calculo e informe de 
	{
		if (cnt<0)
		{
			fprintf(stdout,"\n calculo temporal inválido\n");
			return;
		}
		cnt++;
		
		fprintf(stdout,"\n\ttiempo - lapso %2d: %2d.%06d s\n",cnt,TT_CALC_SEG(ti,taux),TT_CALC_USEG(ti,taux));
	}
	
}

char *ssTp[]={"Las funciones open","y close se usan para abrir","y cerrar ficheros,",\
	         "respectivamente","Sus prototipos son los siguientes:\n",\
			"int open(const char *camino, int flags);\n",\
			"int open(const char *camino, int flags, mode_t modo);\n",\
			"int close(int fd);\n",\
			"La función open devuelve","un número entero que","identifica a un descriptor,",\
			"de fichero o -1 en caso de error,","y tiene como","parámetros un puntero a,",\
			"la ruta del fichero","que queramos abrir","y unas banderas (flags)","que,",\
			"indican la forma de apertura:","sólo lectura","(O_RDONLY),","sólo,",\
			"escritura (O_WRONLY), lectura/escritura","(O_RDWR) u otros","(O_CREAT, O_EXCL, O_NOCTTY, O_TRUNC,",\
			"O_APPEND,","O_NONBLOCK u O_NDELAY,","O_SYNC, O_NOFOLLOW,","O_DIRECTORY, O_DIRECT,","O_ASYNC y",\
			"O_LARGEFILE).","Se puede","leer más información sobre","las banderas en el","manual de open.\n\n",\
			"En la función","open podemos especificar","un tercer parámentro,","el modo, que se usa","para",\
			"especificar los permisos en caso","de que se esté creando","el archivo. Dichos","permisos o modos",\
			"pueden ser","S_IRWXU","(el usuario puede leer, escribir","y ejecutar (rwx)), S_IRUSR (el","usuario",\
			"puede leer (r)),","S_IWUSR (el usuario puede escribir (w)), S_IXUSR (el usuario","puede ejecutar",\
			"(x)), S_IRWXG,","S_IRGRP, S_IWGRP,","S_IXGRP, S_IRWXO, S_IROTH,","S_IWOTH y S_IXOTH.\n",\
			"La función","close cierra el descriptor","de fichero que le","pasemos como parámetro. Devuelve",\
			"0 en caso de éxito y -1","en caso de error.\n",\
			"Las funciones read","y write se usan para leer","y escribir en un descriptor","de fichero que",\
			"previamente hayamos abierto. Sus prototipos","son los siguientes:\n\n",\
			"\tssize_t read(int fd, void *buf, size_t nbytes);\n",\
			"\tssize_t write(int fd, const void *buf, size_t num);\n",\
			"Como véis,","ambas funciones son iguales","y los parámetros que","reciben son el descriptor",\
			"de fichero que devolvía la función open, un puntero a un buffer de memoria y un tamaño que",\
			"indica el número de bytes del buffer que queramos leer o escribir. Ambas funciones devuelven",\
			"el número de bytes","leídos o escritos, o -1 en caso de error.\n\n",\
			NULL};

