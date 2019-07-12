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

char Validate(char *StrArgs[], int NumArgs){
  unsigned char flagA, flagB; flagA = flagB = FALSE;

  if( NumArgs == 1)
  return FALSE;

  if( (NumArgs == 2) ){
    if( ValidPatente(StrArgs[1]) ){
      return TRUE;
    }
    else
    return FALSE;
  }
  if( (NumArgs == 3) ){
    if( !(strcmp("-c", StrArgs[1])) )
    flagA = TRUE;
    if( ValidPatente(StrArgs[2]) )
    flagB = TRUE;
    if( flagA && flagB)
    return TRUE;
    else
    return FALSE;
  }
  else
  return FALSE;
}
