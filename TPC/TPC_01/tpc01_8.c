#include <stdio.h>
#include "func.h"

void max_min_valor (int a,int b, int c, int*max, int *min)
{
	int muestro;
	printf("desea ver cuales son los valores maximo y minimo? 1.Si 0.No:");
	scanf("%d", &muestro);	
			if(muestro==1){
					*min = min_valor(a,b,c);
					*max = max_valor(a,b,c); 
					}
					else {
						return;
					}
					
		
}
