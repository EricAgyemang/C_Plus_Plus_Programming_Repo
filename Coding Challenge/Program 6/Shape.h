//Author:Eric Agyemang
//Course: IT 180

//This is the shape.h file
//We import the required libraries
#ifndef SHAPE3SHAPE3D_H_
#define SHAPE3SHAPE3D_H_
#include<iostream>
#include<string>
using namespace std;

//The shapes namespace is defined here
namespace shapes{

//This is the Shape3D class
class Shape3D{

//Public attribute and methods that are abstract methods
public:
  const double PI = 3.141;

  virtual double surfaceArea() = 0;
  virtual double volume() = 0;

//The destractor is declared
   ~Shape3D();
};
}
#endif
