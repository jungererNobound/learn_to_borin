
CFLAGS = -std=c99 -Wall

all :
	gcc $(CFLAGS) -c src/*.c 
	mv *.o bin/
	gcc $(CFLAGS) bin/*.o -o learn

clean :
	rm bin/*.o
	rm learn
