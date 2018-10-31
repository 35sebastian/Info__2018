OBJS=  mainTPC02.o TPC02_1a.o TPC02_1b.o TPC02_2.o TPC02_3a.o TPC02_3b.o TPC02_3c.o	TPC02_4a.o TPC02_4b.o TPC02_4c.o TPC02_5.o

CFLAGS= -g -Wall

all: TPC02

TPC02: $(OBJS)
		gcc -o TPC02 $(OBJS)

mainTPC02.o: mainTPC02.c TPC02.h

TPC02_1a.o: TPC02_1a.c TPC02.h

TPC02_1b.o: TPC02_1b.c TPC02.h

TPC02_2.o: TPC02_2.c TPC02.h

TPC02_3a.o: TPC02_3a.c TPC02.h

TPC02_3b.o: TPC02_3b.c TPC02.h

TPC02_3c.o: TPC02_3c.c TPC02.h

TPC02_4a.o: TPC02_4a.c TPC02.h

TPC02_4b.o: TPC02_4b.c TPC02.h

TPC02_4c.o: TPC02_4c.c TPC02.h

TPC02_5.o: TPC02_5.c TPC02.h

clean:
	rm -f TPC02 $(OBJS)
	@echo 'Se han borrado los objetos y ejecutables generados'
