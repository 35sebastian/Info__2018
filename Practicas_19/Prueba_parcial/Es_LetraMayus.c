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

char Es_LetraMayus(char Letra){
  if( (Letra >= 'A' && Letra <= 'Z')){
    return TRUE;
  }else
  return FALSE;
}
