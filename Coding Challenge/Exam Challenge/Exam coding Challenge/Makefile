CC=g++
CFLAGS=-std=c++11
all:Worker.o President.o Faculty.o Student.o main.o
	g++ -std=c++11 Worker.o President.o Faculty.o Student.o main.o -o out
ArrayList.o:President.cpp
	$(CC) $(CFLAGS) -c President.cpp
main.o:Faculty.cpp
	$(CC) $(CFLAGS) -c Faculty.cpp
Cube.o:Student.cpp
	$(CC) $(CFLAGS) -c Student.cpp
Cube.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp	
clean:
	rm*.o out
