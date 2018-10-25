all: gcc -c TPC06_01.o -o TPC06_01.o
	gcc TPC06_01.o -o TPC06_01


Servidor.o: TPC06_01.c
	gcc -c TPC06_01.c tpc_datain1.txt tpc_out.txt -o TPC06_01.o

clean:
	rm -f *.o
