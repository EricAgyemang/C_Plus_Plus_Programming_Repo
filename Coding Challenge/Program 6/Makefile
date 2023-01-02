CC=g++
CFLAGS=-std=c++11
all:Shape.o Cube.o Cylinder.o Sphere.o main.o
	g++ -std=c++11 Shape.o Cube.o Cylinder.o Sphere.o main.o -o out
Shape3D.o:Shape3D.cpp
	$(CC) $(CFLAGS) -c Shape.cpp
Cube.o:Cube.cpp
		$(CC) $(CFLAGS) -c Cube.cpp
Cylinder.o:Cylinder.cpp
		$(CC) $(CFLAGS) -c Cylinder.cpp
Sphere.o:Sphere.cpp
	$(CC) $(CFLAGS) -c Sphere.cpp
main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm*.o out
