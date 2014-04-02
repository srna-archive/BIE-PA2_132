CC=g++-4.6.3
CFLAGS=-Wall -pedantic

all: complex.out

complex.out: main.o Complex.o
	$(CC) -o complex.out main.o Complex.o

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.cpp -o main.o

Complex.o: Complex.cpp
	$(CC) -c $(CFLAGS) Complex.cpp -o Complex.o

clean:
	rm -f *.o
	rm -f *.out

