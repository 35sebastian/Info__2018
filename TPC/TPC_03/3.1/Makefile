OBJS=  TPC03main.o  TPC03_1.o

FLAGS= -g -Wall

all: TPC03

	@echo 'Se ha creado TPC03 para ejecutar anteponer "./"'
	
TPC03: $(OBJS)
		gcc -o TPC03 $(OBJS)

TPC03main.o: TPC03main.c cabeceras.h

TPC03_1.o: TPC03_1.c cabeceras.h

clean:
	rm -f $(OBJS) TPC03
	
	@echo 'Se han borrado los archivos .o'
	
