OBJS=  main.o potencia.o fibonacci.o factorial.o primos.o menu.o

CFLAGS= -g -Wall

all: main

	@echo 'Se ha creado main para ejecutar anteponer "./"'
	@echo 'Si desea borrar los archivos generados, ingrese "make clean"'

main: $(OBJS)
		gcc -o main $(OBJS) -lm

main.o: main.c header.h

potencia.o: potencia.c header.h

fibonacci.o:	fibonacci.c header.h

factorial.o: factorial.c header.h

primos.o: primos.c header.h

menu.o: menu.c header.h

clean:
	rm -f main $(OBJS)

	@echo 'Se han borrado los archivos .o'
