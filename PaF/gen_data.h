/**
	\file gen_data.h
	\brief funciones para la generación de datos en forma aleatoria
	\details
		permite generar numeros dentro de determinado rango, nombres y apellidos.
		Su objetivo es simular el ingreso de datos dentro de un codigo
		mas extenso
	
	\date 2015.07.10
	\version 1.0.0
*/


#ifndef __GEN_DATA__
#define __GEN_DATA__



/**
	\fn int genNombre (char *s,char fm,char n)
	\brief genera un nombre en forma aleatoria

	\param [out] s: buffer de salida donde se guarda el nombre generado 
	\param [in] fm: indica si el nombre es femenino (0) o masculino (1). Otros valores
					el genero es aleatorio
	\param [in] n: si el valor generado se compone de solo un nombre (0) 
					o dos nombres (<>0)
	\return largo del texto
	
	\note 	Se considera que no pueda repetirse el nombre
	
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/

int genNombre (char *s,char fm,char n);


/**
	\fn int genApellido (char *s,char n)
	\brief genera un apellido en forma aleatoria

	\param [out] s: buffer de salida donde se guarda el apellido generado 
	\param [in] n: si el valor generado se compone de solo un Apellido (0) 
					o dos (<>0)
	\return largo del texto
	
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/

int genApellido (char *s,char n);

/**
	\fn int genNumero (int inf,int sup)
	\brief genera un numero en forma aleatoria entre [inf,sup)

	\param [in] inf: limite inferior del numero a generar 
	\param [in] sup: limite superior del numero a generar 
	\return numero generado
	
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/

int genNumero (int inf,int sup);


/**
	\fn void genIncio (int val)
	\brief inicialización del sistema de generación aleatoria

	\param [in] val: modo de generar los valores
					<0 - la semilla no se modifica
					=0 - la semilla se modifica en forma aleatoria
					>0 - la semilla se define segun val
	
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/

void genInicio (int val);

#endif
