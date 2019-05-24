OBJS=  main.o valores_positivos.o es_triangulo.o es_rectangulo.o tipo_triangulo.o

CFLAGS= -g -lm -Wall

all: main

	@echo 'Se ha creado main para ejecutar anteponer "./"'

main: $(OBJS)
		gcc -o main $(OBJS)

main.o: main.c header.h

valores_positivos.o: valores_positivos.c header.h

es_triangulo.o:	es_triangulo.c header.h

es_rectangulo.o: es_rectangulo.c header.h

tipo_triangulo.o: tipo_triangulo.c header.h

clean:
	rm -f main $(OBJS)

	@echo 'Se han borrado los archivos .o'
