#include <stdio.h>

int max_valor (int a,int b, int c)
{
	int max=0;
	
	if(a!=b && b!=c && a!=c)
	{
	if(a>b && a>c){
					max=a;
					}
					else{
						if(b>c && b>a){
										max=b;
										}
										else{
											max=c;
											}	
						}
			return max;
	}else {
		return 0;
	}
}
	

	
