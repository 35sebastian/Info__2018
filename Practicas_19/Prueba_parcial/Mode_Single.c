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

void Mode_Single(char *StrArgs[]){
  char LetrasANum[7];
  char TotalPatenNum[9];
  int D;
  int V;
  D=V=0;

  LetterToNUm(StrArgs[2], LetrasANum);
  get_DV(StrArgs[2], TotalPatenNum, LetrasANum, &D, &V);
  Print_DV(&D, &V);
}
