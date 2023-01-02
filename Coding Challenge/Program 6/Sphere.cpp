//This is the shere.cpp classs
//We import the required libraries
#include "Shape.h"
#include "Sphere.h"
#include<string>
using namespace shapes;

//The sphere constructor is defined
Sphere::Sphere(double r){
  radius = r;
}

//The surface area method of the shere
double Sphere::surfaceArea(){
  return (4/3)*PI*radius*radius;
}

//The volume method of the sphere
double Sphere::volume(){
  return PI*radius*radius*radius;
}

//The default constructor is defined
Sphere::~Sphere(){

}
