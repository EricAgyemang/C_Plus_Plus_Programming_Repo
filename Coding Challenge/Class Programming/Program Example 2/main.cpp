#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"
#include<iostream>
using namespace std;

int main(){

  Triangle tri;
  Rectangle rect;

  tri.setValues(4,5);
  rect.setValues(4,5);

  cout<<"The area of the triangle is: "<<tri.area() <<'\n';
  cout<<"The area of the rectangle is: "<<rect.area()<<'\n';

  return 0;
}
