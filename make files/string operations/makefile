CC = gcc
CFLAGS = -Wall

all: app

app: main.o string_utils.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c string_utils.h
	$(CC) $(CFLAGS) -c $< -o $@

string_utils.o: string_utils.c string_utils.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o app

.PHONY: clean all
