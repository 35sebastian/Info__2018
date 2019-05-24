#include <stdio.h>
 
int main ( ) {
  char buffer[] = "CAFE\n";
  int res, pos = 0;
  unsigned int byte;
  printf( "Scanning %s", buffer );
  while ( (res=sscanf( &buffer[pos], "%2x", &byte )) == 1 ) {
    printf( "res=%d, byte=%d(%02x)\n", res, byte, byte );
    pos += 2;
  }
  return 0;
}
