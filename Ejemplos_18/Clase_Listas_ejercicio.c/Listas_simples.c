
#include <stdio.h>

//include "datos.h"

struct nodo{

	struct datos dato;
	struct nodo *sig;
	
};

struct nodo*INI=NULL;

struct datos{
	int nota;
	}

//include "lsitas.h"
void insertar(struct datos aux){
	
	struct nodo*p;
	p=(struct nodo*)malloc (sizeof(struct nodo));
	
	p->dato=aux;
	
	if(INI==NULL)									//Entonces apunta al primer nodo
	{						
	INI=p;
	p->sig=NULL;						
	
	}else
	{
	p->=INI;
	INI=p;
	}
	
}

/* for (q=INI; aux < q->dato || q!=NULL ; q=q->sig);		//recorre la lista de menor a mayou con nuestro aux
{		¡¡¡nunca olvidar esta sentencia del medio!!! sino no sale de listas
* 
	q=INI;
	while (aux < q->dato)
	{
	q = q->sig;	
	}
		
}

if (q==INI)		*principio*
{
	principio ()
	
	else
	{
		if (q==NULL) 			*final*
		{
			final(
			* 	r->sig=p;
			* 	p->sig=NULL;
			 )
		}else 					*medio*
		{
			medio(
			*  	p->sig=q;
			* 	r->sig=p;)
		}
		
	}
}

int comparar_Datos(struct A, struct dato B);

	> 0 despues
	= 0 ==
	< 0 antes


	3:00:00
	* 
	* principio
	* 		
	* 	p->sig=INI;
	* 	INI=p
	* 
	* final
	* 	
	* (guardar q en r)
	* 
	* for (q=INI; aux < q->dato || q!=NULL ; (r=q;) q=q->sig);
	* 
	* 	r->sig=p;
	* 	p->sig=NULL;
	* 
	* medio
	* 
	* 	p->sig=q;
	* 	r->sig=p;
	* 
	* 




*/

int main(int argc, char **argv)
{
			
	
	return 0;
}

