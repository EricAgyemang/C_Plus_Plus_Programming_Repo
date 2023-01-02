CC=g++
CFLAGS=-std=c++11

all:Destructor.o 
	$(CC) $(CFLAGS) Destructor.o -o out
Destructor.o:Destructor.cpp
	$(CC) $(CFLAGS) -c Destructor.cpp
clean:
	rm *.o out
