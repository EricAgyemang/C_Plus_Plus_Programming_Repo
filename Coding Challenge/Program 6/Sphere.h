//We import the required libraries
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;
#ifndef SPHERE_H_
#define SPHERE_H_

//the shapes namespace
namespace shapes{

//this is a class of Sphere that extends shape3D
class Sphere:public Shape3D{

//The private attribute declared
private:
  double radius;

//The public methods are declared here
public:

  //This is the constractor to the Shere class
  Sphere(double r);

//This is the surfaceArea method declared
  double surfaceArea();

//This is the volume method declared
  double volume();
//The destractor method is declared
  ~Sphere();

};
}
#endif
