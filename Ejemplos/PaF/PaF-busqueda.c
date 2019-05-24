/**
	\file PaF-busqueda.c
	\brief implementacion de una funcion para busqueda dentro de
			un array a traves de puntero a funcion
	\details Permite realizar busquedas de cualquier elemento en cualquier 
			tipo de array. Solo hay que pasar la forma de hacer la comparacion
	\date 2015.07.10
	\version 1.0.0
*/



int buscar (void *key,void *px,short n, short sz,int (*f_cmp)( void *, void *))
{
short i;	// Indice auxiliar
char *pz;	// puntero auxiliar


	for (i=0 ; i<n ; i++)	// se recorre el array
		{
			pz=((char*)px+(i*sz));	//pz se posiciona en el nodo[i] del array.
			
			//se invoca a la función recibida para comparar key con el nodo correspondiente.
			if (f_cmp (key,(void*)pz))
				return i;
		}

	return -1;	// elemento no encontrado
	
}

