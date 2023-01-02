//Author: Eric Agyemang
//Course:IT 180

//Importing the necessary libraries
#include<iostream>
using namespace std;
#include<string>
#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

//This is the ArrayList class that has the atticute to hold array of integers
class ArrayList{

//Private attribute
private:
  int *myArray;

//Public attribute and method declaration
public:
  int arraySize;
  int occupiedSize;

//Constactor declaration
  ArrayList();
//The push method
  void push(int m);
//The erase method declaration
  void erase(int m);
//The toString method to help display the output
  void toString();

//The destractor
  ~ArrayList();

};
#endif
