/**
	\file csv_a.h
	\brief Funciones para el manejo de archivos en formato CSV (comma separated values) 
	\details
		Se define las funciones para el manejo de archivos en el formato mencionado
		Se trabaja con una estructura de datos fija data_csv que esta compuesta por arrays estáticos
	\todo
		Mejorar el uso de memoria.
	\version 1.csv.a
*/


/*! 
 \def SZ_LINE  
	maxima cantidad de caracteres que puede poseeruna linea (incluyendo el \0) 
 \def N_COL 
	Cantidad de columnas por linea
\def MIN_BYTES_COL
	Cantidad minima de caracteres por columna, para que se acepte el formato del archivo
 */

#define SZ_LINE 512
#define N_COL    4    // cantidad de parametros de la estructura
#define MIN_BYTES_COL 2	// cantidad minima de caracteres por columna - 


/*!
\struct ST_DATA
\brief estructura armada especificamente para el archivo a procesar
\param sTitulo Titulo del libro
\param sAutor Autor del libro
\param sEditorial Editorial
\param sPrecio Precio

\note Se desperdicia memoria debido a su logica estatica
*/

typedef struct {
	char sTitulo[SZ_LINE];
	char sAutor[SZ_LINE];
	char sEditorial[SZ_LINE];
	char sPrecio[20];
} ST_DATA;



/**
	\fn FILE * Abrir_Archivo (char *s, char sep,int *lineas)
	\brief apertura del archivo en formato csv para su posterior lectura

	\details
		Abre el archivo a procesar y eventualmente verifica el formato e informa el numero de lineas que posee el archivo
		Si se verifica el formato de archivo, se cuenta la cantidad de parametros por línes; que todos tengan al menos MIN_BYTES_COL
		bytes y que terminen con un \n  (menos la ultima linea que puede terminan sin el \n), 
		Si una linea esta vacia, dara error.
		Si se verifica el formato de archivo, la función puede informar la cantidad de lineas del archivo csv

	\param [in] s Path+nombre de archivo.
	\param [in] sep opcional - separador del csv - si su valor es 0 el archivo no es analizado.
	\param [in] lineas opcional - si sep <> 0 y lineas <> NULL se informa cantidad de líneas del archivo.
	\return 	
		NULL error en apertura o formato de archivo.
		<> NULL file pointer.
	
	\author R1093 - Info I
	
*/

FILE * Abrir_Archivo (char *s, char sep,int *lineas);



/**
	\fn int Leer_Dato_Archivo ( ST_DATA* sp,FILE *fp,char sep)
	\brief lee una linea del archivo

	\details Lee una linea del archivo con formato csv y queda preparada para la lectura del proximo.

	\param [out] sp dato leido.
	\param [in] fp file pointer al archivo ya listo para su lectura
	\param[in] sep separador del formato csv
	\return 	
		1 - lectura ok.
		0 - error de lectura.
	
	\author R1093 - Info I
	
*/

int Leer_Dato_Archivo ( ST_DATA* sp,FILE *fp,char sep);

