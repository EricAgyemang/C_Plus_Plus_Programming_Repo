CC=g++
CFLAGS=-std=c++11

all:Teacher.o main.o
	g++ -std=c++11 Teacher.o main.o -o out
Teacher.o:Teacher.cpp
	$(CC) $(CFLAGS) -c Teacher.cpp
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm *.o out
