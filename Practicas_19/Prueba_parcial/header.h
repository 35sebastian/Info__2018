#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char ValidPatente(char *);
char fill_mode(int);
char Validate(char **, int);
char Es_LetraMayus(char);
char Es_Num(char);
void Mode_Single(char **);
void Mode_Continue(char **);
void LetterToNUm(char *, char *);
void get_DV(char *, char *, char *, int *, int *);
void Print_DV(int *, int*);
void messageError(void);
unsigned char setString(char *, unsigned int);
