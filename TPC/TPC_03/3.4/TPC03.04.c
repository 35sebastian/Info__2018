
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int xtr_cmp (const char * str01, const char * str02){

	int i,z,resultado,parcial;

		for(i=0,z=0;str01[i]!='\0' && str02[z]!='\0';i++,z++){			//recorre ambos strings
					parcial=str01[i]-str02[z];
						if(parcial)												//en caso que haya diferencia acumular en resultado
							resultado=+parcial;
		}
	return resultado;
}
