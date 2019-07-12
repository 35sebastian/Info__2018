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

void get_DV(char *StrPaten, char *TotalPatenNum, char *LetrasANum, int *D, int*V){
  unsigned char index;

  strcpy(TotalPatenNum, LetrasANum);
  TotalPatenNum[6] = StrPaten[3];
  TotalPatenNum[7] = StrPaten[4];
  TotalPatenNum[8] = StrPaten[5];
  TotalPatenNum[9] = '\0';

  for(index = 0; index < 9; index++){
    if( !(index%2) ){
      *D += TotalPatenNum[index] - '0';
    }else
    *V += TotalPatenNum[index] - '0';
  }
}
