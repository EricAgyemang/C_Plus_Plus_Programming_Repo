/*
Author: Eric Agyemang
Course: IT180
        Assignment 1
*/
//Importing the reqired libraries
#include<iostream>
using namespace std;

#ifndef HEADER_H_
#define HEADER_H_

//This is a the class of Matrix and it's attribute
class Matrix{
private:
  int myArray[3][3];
//The public methods are declared here
public:
  //We declare the default constructoe
  Matrix();

//This is the to string method that helps to print the output when called.
  void toString();
//Wedeclare the multiplication overloading
  Matrix operator*(Matrix mat);
//We declare the equal overloading
  bool operator==(Matrix mat);

  //We declare the destructor
  ~Matrix();
};
#endif
