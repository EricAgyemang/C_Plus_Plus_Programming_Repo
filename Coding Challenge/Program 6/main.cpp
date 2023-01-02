//This is the main file
//We import the required libraries

#include<iostream>
#include<string>
#include "Shape.h"
#include "Cube.h"
#include "Cylinder.h"
#include "Sphere.h"
using namespace std;
using namespace shapes;

//The main method is defined
int main(){

//We declare a pointer
Shape3D *s;

//Initiallize the pointer to the cylinder object
s = new Cylinder(10.0, 112.23);
cout<<"Cylinder: "<<endl;
cout<<"surface Area: "<<s->surfaceArea()<<'\n';
cout<<"Volume: "<<s->volume()<<'\n';
delete s;
s = NULL;

//Initiallize the pointer to the Sphere object
s = new Sphere(22.123);
cout<<"Sphere: "<<endl;
cout<<"surface Area: "<<s->surfaceArea()<<'\n';
cout<<"Volume: "<<s->volume()<<'\n';
delete s;
s = NULL;

//We initialize the pointer to the cube object
s = new Cube(22.123);
cout<<"Cube: "<<endl;
cout<<"surface Area: "<<s->surfaceArea()<<'\n';
cout<<"Volume: "<<s->volume()<<'\n';
delete s;
s = NULL;
return 0;
}
