
CC=gcc
CFLAGS=-c -Wall

all: a1 a2 a3

#-------------------------------------------------------- a1
a1: main_ord_1.o arr_aux.o ordenar.o
	$(CC) main_ord_1.o arr_aux.o ordenar.o -o $@.out

main_ord_1.o: main_ord_1.c
	$(CC) $(CFLAGS) main_ord_1.c
	
#-------------------------------------------------------- a2
a2: main_ord_2.o arr_aux.o ordenar.o
	$(CC) main_ord_2.o arr_aux.o ordenar.o -o $@.out

main_ord_2.o: main_ord_2.c
	$(CC) $(CFLAGS) main_ord_2.c
	
	
#-------------------------------------------------------- a3
a3: main_ord_3.o arr_aux.o ordenar.o
	$(CC) main_ord_3.o arr_aux.o ordenar.o -o $@.out

main_ord_3.o: main_ord_3.c
	$(CC) $(CFLAGS) main_ord_3.c

	
arr_aux.o: arr_aux.c
	$(CC) $(CFLAGS) arr_aux.c

ordenar.o: ordenar.c
	$(CC) $(CFLAGS) ordenar.c
	
	
clean:
	rm *.o *.out
clean_o:
	rm *.o
