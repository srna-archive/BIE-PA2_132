CC=g++-4.6.3
CFLAGS=-Wall -pedantic

all: bag.out

bag.out: main.o Bag.o
	$(CC) -o bag.out main.o Bag.o

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.cpp -o main.o

Bag.o: Bag.cpp
	$(CC) -c $(CFLAGS) Bag.cpp -o Bag.o

clean:
	rm -f *.o
	rm -f *.out

