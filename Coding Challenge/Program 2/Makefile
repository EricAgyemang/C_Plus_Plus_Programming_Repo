CC=g++
CFLAGS=-std=c++11
all:ArrayList.o main.o
	g++ -std=c++11 ArrayList.o main.o -o out
ArrayList.o:ArrayList.cpp
	$(CC) $(CFLAGS) -c ArrayList.cpp
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm*.o out
