OBJS=  maintpc05.o tpc05_04.o tpc5_soporte.o

CFLAGS= -g -Wall
 
all: TPC05
 
TPC05: $(OBJS)
		gcc -o TPC05 $(OBJS)

maintpc05.o: maintpc05.c tpc5_soporte.h

tpc05_04.o: tpc05_04.c tpc5_soporte.h

tpc5_soporte.o: tpc5_soporte.c tpc5_soporte.h


clean:
	rm -f TPC05 $(OBJS)
	@echo 'Se han borrado los objetos y ejecutables generados'
	
	
