
CC=gcc
CFLAGS=-c -Wall

all: rd wt

rd: test01_rd.o 
	$(CC) test01_rd.o -o rd.out

test01_rd.o: test01_rd.c
	$(CC) $(CFLAGS) test01_rd.c
	
	
	
wt: test01_wt.o 
	$(CC) test01_wt.o -o wt.out

test01_wt.o: test01_wt.c
	$(CC) $(CFLAGS) test01_wt.c
	
clean:
	rm *.o *.out
clean_o:
	rm *.o