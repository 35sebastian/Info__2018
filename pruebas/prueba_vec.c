#include <stdio.h> 
#include <string.h> 
#include <math.h> 


int main (int argc, char *argv[]) { 

int n1=0, n2=0, size, i, temporal=0; 

if (argc < 3) printf ("No hay suficientes datos"); 

else { 
size = strlen (argv[1]); 										/* calculamos la longitud de la cadena introducida como parametro 1 (el primer numero)*/ 
for (i=0; i<size; i++) { 
temporal = ((int)(argv[1][i] - 48) * (pow(10, (size-i-1)))); 	/*vamos transformando cada caracter de la cadena a número*/ 
																/* restamos 48 por ser el valor ascii de 0; los números están almacenados en codigo ascii*/ 
																/* los multiplicamos por 10 elevado a la correspondiente potencia segun su orden: unidades, decenas, centenas, etc)*/ 
n1 = n1+temporal; 
} 
size = strlen (argv[2]); 
for (i=0; i<size; i++) { 
temporal = ((int)(argv[2][i] - 48) * (pow(10, (size-i-1)))); 
n2 = n2+temporal; 
} 
printf("La suma es %d\n", n1+n2); 
} 
return 0; 
} 

