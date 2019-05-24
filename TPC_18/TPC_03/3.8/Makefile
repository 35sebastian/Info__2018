OBJS=  TPC03main.o  TPC03_8.o

FLAGS= -g -Wall

all: TPC03

	@echo 'Se ha creado TPC03 para ejecutar anteponer "./"'

TPC03: $(OBJS)
		gcc -o TPC03 $(OBJS)

TPC03main.o: TPC03main.c cabecera.h

TPC03_8.o: TPC03_8.c cabecera.h

clean:
	rm -f $(OBJS) TPC03

	@echo 'Se han borrado los archivos .o'
