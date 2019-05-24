#include <stdio.h>
#include <string.h>

int EliminaCaracter(char * DataPtr, char c){

  int cantCar=0, i,len;

  len=strlen(DataPtr);

  for (i = 1; i < len; i++) {
    if(DataPtr[i]==c){
            cantCar++;
            DataPtr[i]=DataPtr[i+1];
            }
    }
    /*if(DataPtr[len-1]=='\n')
        DataPtr[--len] = '\0';*/
  return cantCar;
}

int main (){

  int coincidencias;
  char caracter='s';
  char * String=0;

  scanf("%s", String);
  coincidencias = EliminaCaracter(String, caracter);

  printf("La cantidad de coincidencias es:%d \n", coincidencias );

  return 0;
}
