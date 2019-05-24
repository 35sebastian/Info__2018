
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Terminar, cuando devuelve resultado 1 en la función main le pone resultado =0

int xtr_cmp (const char * str01, const char * str02, int resultado){

	int i,z,res,conteq=0,contmen=0,contmay=0, resultado;

		for(i=0,z=0;str01[i]!='\0' && str02[z]!='\0';i++,z++){			//recorre ambos strings

	printf ("\n\t-\tLa cadena S1[%d] vale: %c = '%d'\n\t-\tLa cadena S2[%d] vale: %c = '%d'", i, str01[i] ,str01[i],z, str02[z], str02[z]);
				res=str01[i]-str02[z];

					switch (a){
							case 0:{
								if (res==0 )
									conteq++;
								else if(res>0)
									contmay+=res;
								else
									contmen+=res;
								}
							case 1:
								{
									res+=32;
								if (res==32 )
									conteq++;
								else if(res>32)
									contmay+=res;
								else
									contmen+=res;
								}
					 }
			}
		if (contmay>contmen)
			resultado=contmay;
			else if(contmen>contmay)
				resultado=contmen;
				else
					resultado = 0;


	return resultado;
}
