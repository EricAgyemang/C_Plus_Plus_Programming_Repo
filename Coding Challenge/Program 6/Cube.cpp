//Importing the required libraries
#include "Cube.h"
#include "Shape.h"
#include<string>
using namespace shapes;

//The Cube constructor method is defined here
Cube::Cube(double side){
  this->side = side;
}

//The Surface area method is defined here
double Cube:: surfaceArea(){
  return 6*side*side;
}

//The volume method is defined here
double Cube::volume(){
  return side*side*side;
}

//The destractor method is defined here
Cube::~Cube(){

  }
