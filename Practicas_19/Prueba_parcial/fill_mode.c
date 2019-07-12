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

char fill_mode(int NumArgs){
  if(NumArgs == 2){
    return CONTINUE;
  }
  if( NumArgs == 3 ){
    return SINGLE;
  }

}
