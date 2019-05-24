ejecutables= daytime daytimed 
CC=gcc
CFLAGS=-g -c -Wall
LDFLAGS=-g -Wall
COBJS=daytime-client-tcp.o
SOBJS=daytime-server-tcp.o
SSOURCES=$(SOBJS:.o=.c)
CSOURCES=$(COBJS:.o=.c)
HEADERS=*.h

all: $(ejecutables)

daytime: $(COBJS)
	$(CC) $(LDFLAGS)  $(COBJS) -o daytime
%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

daytimed: $(SOBJS)
	$(CC) $(LDFLAGS)  $(SOBJS) -o daytimed
%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@	
	
clean:
	rm -f ./*.o
	rm -f $(ejecutables)

new: clean ejecutables


 
