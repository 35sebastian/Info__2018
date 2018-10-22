OBJS=  mainTPC02.o TPC02_1a.o TPC02_1b.o TPC02_2.o TPC02_3a.o

CFLAGS= -g -Wall

all: TPC02

TPC02: $(OBJS)
		gcc -o TPC02 $(OBJS)

mainTPC02.o: mainTPC02.c TPC02.h

TPC02_1a.o: TPC02_1a.c TPC02.h

TPC02_1b.o: TPC02_1b.c TPC02.h

TPC02_2.o: TPC02_2.c TPC02.h

TPC02_3a.o: TPC02_3a.c TPC02.h
#este es un comentario
clean:
	rm -f TPC02 $(OBJS)
	@echo 'Se han borrado los objetos y ejecutables generados'
