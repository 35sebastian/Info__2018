OBJS=  main.o my_getopt.o usage.o print_serie.o my_fflush.o menu.o

CFLAGS= -g -Wall

all: main

	@echo 'Se ha creado main para ejecutar anteponer "./"'
	@echo 'Si desea borrar los archivos generados, ingrese "make clean"'

main: $(OBJS)
		gcc -o main $(OBJS) -lm

main.o: main.c header.h

my_getopt.o: my_getopt.c header.h

usage.o:	usage.c header.h

print_serie.o: print_serie.c header.h

menu.o: menu.c header.h

my_fflush.o: my_fflush.c header.h

clean:
	rm -f main $(OBJS)

	@echo 'Se han borrado los archivos .o'
