CC =gcc
SRC =src/main.c src/stud.c
OBJ =obj/main.o obj/stud.o
TARGET =bin/stud_app
$(TARGET):$(OBJ)
	$(CC) $^ -o $@
obj/%.o: src/%.c
	$(CC) -c $< -o $@
clean:
	rm -f obj/*.o bin/stud_app

