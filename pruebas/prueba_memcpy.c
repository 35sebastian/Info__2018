#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   char a[7] = "abcdefg";
   char * ptr;
   int i;
   ptr=a;

   memcpy( ptr, a, 5 );
   for( i=0; i<7; i++ )
     printf( "a[%d]=%c ", i, a[i] );
   printf( "\n" );
   for( i=0; i<5; i++ )
     printf( "ptr[%d]=%c ", i, ptr[i] );
   printf( "\n" );
	free(ptr);
   return 0;
}
