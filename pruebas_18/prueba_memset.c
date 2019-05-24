
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   char c = 'F';
   char *s;
   int i;

   s = (char*)malloc(5*sizeof(char));
   memset( s, c, 5 );
   for( i=0; i<5; i++ )
     printf( "c[%d]=%c ", i, c );
   printf( "\n" );
   free(s);
   return 0;
}
