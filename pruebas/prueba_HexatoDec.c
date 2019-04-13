/*Este ejercicio es el punto uno del primer parcial del 2015*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int HexatoDec(char * dataPtr){
  int c,i,len;

  len=strlen(dataPtr);

  if (strlen (dataPtr)!=4)  return -2;      //Verifica que sea el de 4 dígitos
  for (i = 0; i <len ; i++) {
    printf("%d\n",dataPtr[i]);
    if (!((dataPtr[i]>='0' && dataPtr[i]<='9')||(dataPtr[i] >='A' &&  dataPtr[i] <= 'F')))   //Verifica que sea Hexa
    return -1;
  }
    sscanf ( dataPtr, "%x", &c );       //toma los caracteres del string los pasa a hexadecimal y los guarda en la variable c haciendo la acumulación de los mismos
  return c;
}

int main(int argc, char const *argv[]) {
  char * dataPtr = "CAFE";

  printf("El valor decimal es:%d\n", HexatoDec(dataPtr));

    return 0;
}
