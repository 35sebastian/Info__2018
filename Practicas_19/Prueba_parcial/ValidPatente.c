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

char ValidPatente(char *StrPaten){
  char flagLetra = FALSE;
  char flagNum = FALSE;
  unsigned char iLetra;
  unsigned jNum;
  unsigned int aux;

  if( (aux = strlen(StrPaten)) == CANTCARACTERESxPATEN ){
    for(iLetra = 0; iLetra < CANTLETRASxPATEN; iLetra++){
      if( Es_LetraMayus(StrPaten[iLetra]) )
      flagLetra = TRUE;
      else
      flagLetra = FALSE;
    }
    for(jNum = 3; jNum < CANTCARACTERESxPATEN; jNum++){
      if( Es_Num(StrPaten[jNum]) )
      flagNum = TRUE;
      else
      flagNum = FALSE;
    }
    if( flagLetra && flagNum )
    return TRUE;
    else
    return FALSE;
  }else
  return FALSE;
}
