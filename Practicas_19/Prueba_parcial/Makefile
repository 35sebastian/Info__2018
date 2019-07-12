OBJS=  main.o ValidPatente.o fill_mode.o Validate.o Es_LetraMayus.o Es_Num.o Mode_Single.o Mode_Continue.o LetterToNUm.o get_DV.o Print_DV.o messageError.o setString.o

CFLAGS= -g -Wall

all: main

	@echo 'Se ha creado main para ejecutar anteponer "./"'

main: $(OBJS)
		gcc -o main $(OBJS) -lm

main.o: main.c header.h

ValidPatente.o: ValidPatente.c header.h

fill_mode.o:	fill_mode.c header.h

Validate.o: Validate.c header.h

Es_LetraMayus.o: Es_LetraMayus.c header.h

Es_Num.o: Es_Num.c header.h

Mode_Single.o: Mode_Single.c header.h

Mode_Continue.o: Mode_Continue.c header.h

LetterToNUm.o: LetterToNUm.c header.h

get_DV.o: get_DV.c header.h

Print_DV.o: Print_DV.c header.h

messageError.o: messageError.c header.h

setString.o: setString.c header.h

clean:
	rm -f main $(OBJS)

	@echo 'Se han borrado los archivos .o'
