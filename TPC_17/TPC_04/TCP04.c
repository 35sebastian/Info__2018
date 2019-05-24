


#include <stdio.h>

int main()
{
	int vec[]={0x1234,0x434241,0x11ABCD,0x11223344,0xABCDEF11};
//--------------------------------------------------------------------------------	
/*	int*p=vec+2;
	
	printf("%p", p);	//0x7ffe15905428
	printf("%x", *p);	//0x11ABCD
						//0x7ffe18dd991811abcd
						//0x7ffd27e8995811abcd		Dirección de comienzo del array seguido del contenido del vector[2]
*/
//--------------------------------------------------------------------------------	
/*	unsigned char *r= (unsigned char *)vec+1;
	printf ("%p\n", r);		
	printf ("%p", vec);		//0x7fff93328be1
							//0x7fff93328be0
*/
//--------------------------------------------------------------------------------	
/*	unsigned char *r= (unsigned char *)vec+4;	
	printf ("%x\n", r[1]);		//42
	printf ("%p\n", vec);		//0x7fff3539f1f0
	printf ("%p\n", r);			//0x7fff3539f1f4
*/	
//--------------------------------------------------------------------------------
/*	void *q= (void *)vec+3;
	printf ("%p\n", q);		//0x7fffe9d89293
	printf ("%p\n", vec);	//0x7fffe9d89290
*/
//--------------------------------------------------------------------------------
/*	void *q= (void *)vec;
	printf ("%x\n", *q);		// warning: dereferencing ‘void *’ pointer
								//error: invalid use of void expression
*/
//--------------------------------------------------------------------------------
/*	int *p= vec;
	p+=20;					
	printf ("%p\n", p);		//0x7ffe03418ed0
	printf ("%x\n", *p);	//0
*/
//--------------------------------------------------------------------------------
/*	int i;
	int *p= &(vec[1]);
	char *s=(char *)p;					
	printf ("%s\n", s);		//ABC
	printf ("%s\n", s+1);	//BC
	for(i=0; vec[i]!='\0';i++){
		printf("\n la direccion de vec[%d] es: %p - el contenido es: %x - %s",i, &vec[i], vec[i], s);
	}*/
	return 0;
}

