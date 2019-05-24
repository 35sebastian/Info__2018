/**
	\file tpc5_soporte.h
	\brief rutinas y definiciones utilizadas dentro del TPC 5 - Info I.
	\version 1.0
*/



/*!
\typedef unsigned char u8_t
\brief  define el tipo de dato byte o natural de 8 bits
*/
typedef unsigned char u8_t;


/*!
	\fn void tt_calc_tiempo( int modo)
	\brief funcion sencilla para calcular la dureación de un proceso
	\details al llamarse a la función con el valor 0, inicializa el reloj.
             con cualquier otro valor, imprime el tiepo transcurrido desde la 
             ultima inicialización y la cantidad de veces que fue invocada, tambien desde
             la última inicialización.
             Si la función no hubiese sido inicializada imprimira unn mensaje de error.
	\param[in] modo - 0: inicializa el reloj
	               otro: imprime el tiempo transcurrido desde la última inicialización

	\return nada
*/ 
void tt_calc_tiempo( int modo);

/*!
	\def T_INI()
	\brief Inicializa el reloj
*/
#define T_INI() tt_calc_tiempo(0)

/*!
	\def T_FIN()
	\brief Calcula el tiempo transcurrido desde la ultima inicializacion del reloj
*/
#define T_FIN() tt_calc_tiempo(1)


/*!
	\def SZ_PLUS
	\brief sub-multiplo del tamaño de la memoria dinamica (N x SZ_PLUS)
	\note  en rigor un valor de 1024 sería más apropiado en un proyecto real
*/
#define SZ_PLUS 64


/*!
	\var char *ssTp[];
	\brief array de string con textos variados para uso general. El último elemento es NULL.
	\note  el parametro extern indica que se encuentra declarado en otro archivo
*/
extern char *ssTp[];

