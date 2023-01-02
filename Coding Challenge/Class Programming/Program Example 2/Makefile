CC=g++
CFLAGS=-std=c++11
all:Polygon.o Rectangle.o Triangle.o main.o
	g++ -std=c++11 Polygon.o Rectangle.o Triangle.o main.o -o out
Polygon.o:Polygon.cpp
	$(CC) $(CFLAGS) -c Polygon.cpp
Rectangle.o:Rectangle.cpp
	$(CC) $(CFLAGS) -c Rectangle.cpp
Triangle.o:Triangle.cpp
	$(CC) $(CFLAGS) -c Triangle.cpp
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm*.o out
