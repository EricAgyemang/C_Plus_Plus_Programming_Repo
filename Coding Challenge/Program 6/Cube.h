//We import the required libraries
#ifndef CUBE_H_
#define CUBE_H_
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;

//This is the shapes namespace
namespace shapes{

//This is the Cube class that extends Shape3D
class Cube:public Shape3D{

//The private attribute
private:
  double side;

//The public methods
public:
  Cube(double side);

  double surfaceArea();

  double volume();

  ~Cube();
};
}
#endif
