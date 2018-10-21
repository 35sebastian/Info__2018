
#include <stdio.h>

void prt (int x, int y, int z)
{
	printf("A:%d\nB:%d\nC:%d\n\n" ,x,y,z);
	}
	
void func (int *x, int*y, int*z)
{
	//printf("A:%d\nB:%d\nC:%d\n\n" ,x,y,z);
	*x=1;
	*y=2;
	*z=3;
	}

void func (int *, int *, int *);	
void prt (int, int, int);

int main()
{
	
	int a,b,c;
	a=b=c=0;
	
	// printf("A:%d\nB:%d\nC:%d\n\n" ,a,b,c);
	prt(a,b,c);
	
	/*	a=1;
		b=2;
		c=3;*/
	func(&a,&b,&c);
	
	prt(a,b,c);
	// printf("A:%d\nB:%d\nC:%d\n",a,b,c);
	
	return 0;
}
