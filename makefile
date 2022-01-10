CC=gcc
CFLAGS= -Wall -g
all:graph
graph: main.o
	$(CC) $(CFLAGS) -o graph main.o
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
.PHONY: clean all
clean:
	rm -f *.o graph
