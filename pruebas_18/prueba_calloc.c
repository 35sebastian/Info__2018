#include <stdio.h>
#include <stdlib.h>
#define N 1000
#define M 1000

int main( void )
{
   void *p;
   p=calloc(N,M);
   

   printf( "p: %p - %p \n", p ,&p );
   
   if(!p)
   return 0;
   
   printf("pres any key to continue...");
   getchar ();
   
   free (p);

	printf("press a key to end ...");
	getchar ();
	return 0;
}
