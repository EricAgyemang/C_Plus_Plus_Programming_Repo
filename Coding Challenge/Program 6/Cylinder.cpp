//We import the required libraries
#include "Cylinder.h"
#include "Shape.h"
#include<string>
using namespace shapes;

//The cylinder constractor method is defined here
Cylinder::Cylinder(double r, double h){
  radius = r;
  height = h;
}

//The surface area of the cylinder method is defined here
double Cylinder::surfaceArea(){
  return 2*radius*(radius+height);
}

//The Volume of the cylinder is defined here
double Cylinder::volume(){
  return PI*radius*radius*height;
}

//This is the destractor for the cylinder class
Cylinder::~Cylinder(){

}
