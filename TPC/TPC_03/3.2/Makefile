OBJS=  TPC03main.o  TPC03_2.o

FLAGS= -g -Wall

all: TPC03

	@echo 'Se ha creado TPC03 para ejecutar anteponer "./"'

TPC03: $(OBJS)
		gcc -o TPC03 $(OBJS)

<<<<<<< HEAD
TPC03main.o: TPC03main.c cabeceras.h

TPC03_2.o: TPC03_2.c cabeceras.h
=======
TPC03main.o: TPC03main.c cabecera.h

TPC03_2.o: TPC03_2.c cabecera.h
>>>>>>> 432052cbc4c9e54dc6a0df477d428fdd4a3b8b7f

clean:
	rm -f $(OBJS) TPC03

	@echo 'Se han borrado los archivos .o'
