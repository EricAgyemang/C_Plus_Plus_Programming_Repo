//We import the required libraries
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;
#ifndef CYLINDER_H_
#define CYLINDER_H_

//The shapes namespace is defined
namespace shapes{

//The cylinder class extends the Shape3D classs
class Cylinder:public Shape3D{

//The private attribute
private:
  double radius;
  double height;

//The public methods
public:
  Cylinder(double r, double h);

  double surfaceArea();

  double volume();

  ~Cylinder();
};
}
#endif
