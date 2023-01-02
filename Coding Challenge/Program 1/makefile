CC=g++
CFLAGS=-std=c++11
all:implementation.o main.o
	g++ -std=c++11 implementation.o main.o -o out
implementation.o:implementation.cpp
	$(CC) $(CFLAGS) -c implementation.cpp
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm*.o out
