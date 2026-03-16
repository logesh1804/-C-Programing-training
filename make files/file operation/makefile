CC = gcc
CFLAGS = -Wall

all: file_app

file_app: main.o file_ops.o
	$(CC) $(CFLAGS) main.o file_ops.o -o file_app

main.o: main.c file_ops.h
	$(CC) $(CFLAGS) -c main.c

file_ops.o: file_ops.c file_ops.h
	$(CC) $(CFLAGS) -c file_ops.c

debug:
	$(CC) -g main.c file_ops.c -o file_app_debug

clean:
	rm -f *.o file_app file_app_debug
