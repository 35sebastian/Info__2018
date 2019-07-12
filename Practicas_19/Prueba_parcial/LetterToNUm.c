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

void LetterToNUm(char *StrPaten, char *LetrasANum){
  unsigned char iPaten, jLetras;
  char Index[CANTLETRASxPATEN];
  char Letras[NUM_LETRAS] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *ArrayNum[NUM_LETRAS] = {"14", "01", "00", "16", "05", "20", "19", "09", "24", "07", "21", "08", "04",
  "13", "25", "22", "18", "10", "02", "06", "12", "23", "11", "03", "15", "17"};

  for( iPaten = 0; iPaten < CANTLETRASxPATEN; iPaten++ ){
    for(jLetras = 0; jLetras < NUM_LETRAS; jLetras++){
      if( (*(StrPaten + iPaten)) == (*(Letras + jLetras)) ){
        Index[iPaten] = jLetras;
        break;
      }
    }
  }

  strcpy(LetrasANum, ArrayNum[Index[0]]);
  strcat(LetrasANum, ArrayNum[Index[1]]);
  strcat(LetrasANum, ArrayNum[Index[2]]);
  LetrasANum[6] = '\0';
}
