#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define TRUE 1
#define FALSE 0
#define SINGLE 1
#define CONTINUE 2
#define CANTCARACTERESxPATEN 6
#define CANTLETRASxPATEN 3
#define NUM_LETRAS 26

unsigned char setString(char *String, unsigned int Length){
  unsigned int index = 0;
  char auxCharacter;

  if ( Length ){
    while( ((auxCharacter = getchar()) != '\n') && (auxCharacter != EOF) ) {
      if( index < (Length - 1)){
        *(String + index) = auxCharacter;
      }
      index++;
    }
    if( index < (Length) ){
      *(String + index) = '\0';
      return TRUE;
    }else
    return FALSE;
  }
}
