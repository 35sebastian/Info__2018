

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

int main(int argc, char **argv)
{
	int size, i, j;
	
//	int * sx=0;
	
/*	sx=(int *) malloc(sizeof(int)* MAX);
	
	if(!sx){
		printf(" no se pudo otorgar memoria");			//en caso que no se pueda otorgar memoria se finaliza el programa
		return 0;
		} 	
*/	
	if (argc<=2)
		printf("Ingrese al menos un parámetro");
	else
		{		
			for(i=1;i<argc;i++){
				for(j=0;argv[i][j]!='\0';j++){
					if(argv[i][j]==argv[i+1][j]){
						size=argv[i][j];
						}
					}
			}
		printf("Los parámetros coincidentes son : %s -\n", size);
	}					
	//free (sx);
	return 0;
}

