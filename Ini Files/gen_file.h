
#ifndef __GEN_FILE__
#define __GEN_FILE__


#define MAXSTRING	2048

#define GF_ERR_FILE     1
#define GF_ERR_SECC     2
#define GF_ERR_KEY		3
#define GF_ERR_BUFF		4
#define GF_OK        	0


/*------------------------------------------------------------------------------
Funcion: GetProfileString - version 1

	Lee parametros cargados en un archivo de formato .ini estandar

input:
	sSeccion - 	Nombre de la seccion
	sKeyName - 	Nombre de la llave
	sRetStr  - 	buffer donde se almacena la informacion buscada
	nSize -		Tamano del buffer sRetStr
	sFileName - nombre del archivo de entrada

output:
	sRetStr  - 	informacion contenida en la seccion/llave del archivo .ini

return:
		GF_OK - seccion/llave encontrada
		GF_ERR... - Error durante la busqueda

Notas:
		En caso de error, no se escribe sobre el buffer de salida - sRetStr
		Se supone que los datos recibidos no poseen errores

------------------------------------------------------------------------------*/

int GetProfileString(char *sSeccion , char *sKeyName, char *sRetStr, int nSize, char *sFileName);


/*------------------------------------------------------------------------------
Funcion: GenErrorStr

	devuelve una explicacion al nro de error GF_ERR...

input:
	e - Nro de error
output: --

return: string de error
------------------------------------------------------------------------------*/

char * GenErrorStr (int e);






#endif
