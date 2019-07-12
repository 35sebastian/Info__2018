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

void Mode_Continue(char *StrArgs[]){
  char LetrasANum[7];
  char TotalPatenNum[9];
  int D;
  int V;
  char AuxPaten[7];
  char flagInvalidPaten = TRUE;
  char flagContinue = TRUE;

  D=V=0;

  LetterToNUm(StrArgs[1], LetrasANum);
  get_DV(StrArgs[1], TotalPatenNum, LetrasANum, &D, &V);
  Print_DV(&D, &V);
  do{
    do{
      D = V = 0;
      printf("Ingrese una patente(Formato Valido: 3 letras MYUSCULAS seguidas de 3 digitos)\n");

      printf("Ingrese 0(el caracter cero) para terminar la ejecucion\n");

      if(setString(AuxPaten, 7))
      if( ValidPatente(AuxPaten) ){
        flagInvalidPaten = FALSE;


        LetterToNUm(AuxPaten, LetrasANum);
        //	printf("222 \n");
        get_DV(AuxPaten, TotalPatenNum, LetrasANum, &D, &V);
        Print_DV(&D, &V);
      }else if( ((*(AuxPaten + 0)) == '0') && ((*(AuxPaten + 1)) == '\0') ){
        flagContinue = FALSE;//****************
        break;
      }
    }while( flagInvalidPaten );
  }while(flagContinue);

}
