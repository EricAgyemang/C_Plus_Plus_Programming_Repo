CC=g++
CFLAGS=-std=c++11
all:Bank.o main.o
	g++ -std=c++11 Bank.o main.o -o out
Bank.o:Bank.cpp
	$(CC) $(CFLAGS) -c Bank.cpp
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	    rm*.o out
