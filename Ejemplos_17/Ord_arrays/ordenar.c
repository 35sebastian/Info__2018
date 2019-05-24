#include "ordenar.h"

#define SWAP(a,b,c) {a=b;b=c;c=a;}


void ord_intercambio (mi_tipo * vec,int cant)
{
int k,i;
mi_tipo aux;
	
	for ( i=0 ; i<cant-1 ; i++)
		for ( k=i+1 ; k<cant ; k++)
			if (vec[i]>vec[k])
			{
				aux=vec[i];
				vec[i]=vec[k];
				vec[k]=aux;
			}
}



void ord_burbujeo (mi_tipo * vec,int cant)
{
int k,i;
char flag=1;	//desordenado
mi_tipo aux;
	
		i=0;
		while (flag)
		{
			flag=0;	//ordenado?
			i++;
			for ( k=0 ; k<cant-i ; k++)
				if (vec[k]>vec[k+1])
				{
					SWAP (aux,vec[k],vec[k+1]);
					flag=1;// Desordenado
				}
		}
}


void ord_burbujeo_2 (mi_tipo * vec,int cant)
{
int k,i;
char flag=1;	//desordenado
mi_tipo aux;
	
		i=-1;
		while (flag)
		{
			flag=0;	//ordenado?
			i++;
			for ( k=cant-1 ; k>i ; k--)
				if (vec[k-1]>vec[k])
				{
					SWAP (aux,vec[k-1],vec[k]);
					flag=1;// Desordenado
				}
		}
	
}




void quick_sort (mi_tipo * vec,int i,int k)
{
int a,pivot;
mi_tipo valor,temp;

	if (i<k)
	{
		pivot=i;
		valor=vec[i];
		for (a=i+1;a<=k;a++)
			if (vec[a]<valor)
			{
				pivot++;
				SWAP(temp,vec[a],vec[pivot]);
			}

		SWAP(temp,vec[i],vec[pivot]);
			
		
		quick_sort (vec,i,pivot-1);
		quick_sort (vec,pivot+1,k);
		
	}
	
}

void ord_qsort (mi_tipo * vec,int cant)
{

	quick_sort(vec,0,cant-1);
	
}

