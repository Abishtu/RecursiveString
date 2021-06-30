CC = gcc
CFLAGS = -Wall -pedantic -g

stringMap: stringF.c
	$(CC) $(CFLAGS) -c -o stringF stringF.c

main: stringF.o main.c
	$(CC) $(CFLAGS) -o main main.c stringF.o