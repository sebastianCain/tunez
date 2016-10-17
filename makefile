all: linkedlist.o playlist.o main.o
	gcc linkedlist.o playlist.o main.o -o tuneztest

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c;

playlist.o: playlist.c playlist.h
	gcc -c playlist.c

main.o: main.c linkedlist.h playlist.h
	gcc -c main.c

clean:
	rm *.o
	rm *~;

run: all
	./tuneztest
