/**
	\file PaF-busqueda.c
	\brief implementacion de una funcion para busqueda dentro de
			un array a traves de puntero a funcion
	\details Permite realizar busquedas de cualquier elemento en cualquier 
			tipo de array. Solo hay que pasar la forma de hacer la comparacion
	\date 2015.07.10
	\version 1.0.0
*/


#ifndef __PAF_BUSQUEDA__
#define __PAF_BUSQUEDA__

/**
	\fn int buscar (void *key,void *px,short n, short sz,int (*f_cmp)( void *, void *))
	\brief función generica para busqueda de elementos dentro de un array cualquiera

	\param [in] key: ptr al elemento a buscar dentro del array
	\param [in] px: direccion de inicio del array 
	\param [in] n: cant. de elementos del array
	\param [in] sz: tamaño de cada elemento/nodo del array
	\param [in] f_cmp: función de comparacion que compara cada nodo con el elemento de busqueda key-
					si la funcion devuelve cero (0) no hay coincidencia, caso contrario si.
	
	\return >=0 posición dentro del array (primer coincidencia)
			<0 elemento no encontrado
	
	\note 	En lugar del la posición dentro del array, se podría develver la dirección del nodo
	
	\author R1093 - Info I
	\date 2015.09.10
	\version 1.0.0
*/

int buscar (void *key,void *px,short n, short sz,int (*f_cmp)( void *, void *));

#endif
