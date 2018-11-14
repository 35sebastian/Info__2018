OBJS=  main.o counter.o imprime.o

FLAGS= -g -Wall

all: main

	@echo 'Se ha creado main para ejecutar anteponer "./"'

main: $(OBJS)
		gcc -o main $(OBJS)

main.o: main.c header.h

counter.o: counter.c header.h

imprime.o: imprime.c header.h

clean:
	rm -f $(OBJS) main

	@echo 'Se han borrado los archivos .o'
