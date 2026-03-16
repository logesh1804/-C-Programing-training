target: main.o mathprog.o
	gcc $^ -lm -o $@

main.o:main.c
	gcc -c $< -o $@
mathprog.o:mathprog.c
	gcc -c $<  -o $@

clean: 
	rm -f *.o target
