#include <stdio.h>

int min_valor (int a,int b, int c)
{
	int min=0;
	
	if(a!=b && b!=c && a!=c)
	{
	if(a<b && a<c){
					min=a;
					}
					else{
						if(b<c && b<a){
										min=b;
										}
										else{
											min=c;
											}	
						}
			return min;
	}else {
		return 0;
	}
}
	
