target:add.o main.o
	gcc add.o main.o -o target
main.o:main.c add.h
	gcc -c main.c
add.o:add.c
	gcc -c add.c
clean:
	rm -f *.o target 
