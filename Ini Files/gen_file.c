#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "gen_file.h"

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

--- para la version 2 ---- 
agregar una mascara de bits que permita configurar:
	- si hay basura en el nombre de seccion p/ej: [asd] dhs a
	- eliminar espacios 
	- otros...
	
------------------------------------------------------------------------------*/

int GetProfileString(char *sSeccion , char *sKeyName, char *sRetStr, int nSize, char *sFileName)
{
FILE *fi;
char sAux[MAXSTRING];
int iAux;
char sLine[MAXSTRING];
int iRet=GF_OK;

	if((fi  = fopen(sFileName,"r")) == NULL)
	   return GF_ERR_FILE;    // no se puede abrir el archivo
	   
        
    //============== Busca la sección especificada x [sSeccion] ==========
    //---- Arma el string de busqueda
    sprintf (sAux,"[%s]",sSeccion);
    iAux=strlen(sAux);	// largo de la seccion con los []

	while (1)
    {
        if (fgets(sLine,MAXSTRING,fi) == NULL)
        {	//---- Fin de archivo (o error) -----
            iRet=GF_ERR_SECC;
            break;
        }
        if (strncmp(sAux,sLine,iAux)) 
            continue;
        //--- la sección ha sido encontrada
        break;
    }

    if (iRet==GF_OK)  
    {   //-- se encontro la seccion ----
            
        //============== Busca la palabra dentro de la seccion especificada  ==========
        //---- Arma el string de busqueda - se arma de otra manera
        strcpy (sAux,sKeyName);
        strcat (sAux,"=");
        iAux=strlen(sAux);	// largo de la llave con el =
        
    	while (1)
        {
            if (fgets(sLine,MAXSTRING,fi) == NULL)
            {	//---- Fin de archivo (o error) -----
                iRet=GF_ERR_KEY;
                break;
            }

            if (sLine[0]=='[')
            {	//---- Comienza otra seccion -----
                iRet=GF_ERR_KEY;
                break;
            }

            if (strncmp(sAux,sLine,iAux))
                continue;

            //--- la palabra buscada ha sido encontrada
            break;
        }
	}


    if (iRet==GF_OK)
    {   //-- se encontro la palabra buscada ----
        //-- de ser posible, se transfiere la informacion -- 
	
		if (strlen(&sLine[iAux])>=nSize) //--- se considera el '\0'
			iRet=GF_ERR_BUFF;	//--- Buffer pequeño para el traspaso de datos
		else
		{
			strcpy (sRetStr,&sLine[iAux]);	//--- Se traspasan los datoa
			// si existe '\n' al final de la linea se eliminar
			iAux=strlen(sRetStr)-1;
			
			if (iAux>=0 && sRetStr[iAux]=='\n')
			  sRetStr[iAux]=0;
		}
	}	
			

    fclose (fi);    //--- debería verificarse su cierre, 
                    // pero como es solo de lectura, no tiene sentido.
    
    
return iRet; 
}

/*------------------------------------------------------------------------------
Funcion: GenErrorStr

	devuelve una explicacion al nro de error GF_ERR...

input:
	e - Nro de error
output: --

return: string de error
------------------------------------------------------------------------------*/

char * GenErrorStr (int e)
{
	switch (e)
	{
	case GF_ERR_FILE: return strerror(errno);//"No se pudo abrir el archivo";
	case GF_ERR_SECC: return "Seccion no encontrada";
	case GF_ERR_KEY: return "No se encontro la llave dentro de la seccion";
	case GF_ERR_BUFF: return "Buffer pequeño";
	}

return "Error Desconocida";
}
	
