/*
Author: Eric Agyemang
Course: IT 180
        Short Assignment 3
*/

//Importing necessary libraries
#include<iostream>
using namespace std;

//Defining the conditions for the header file
#ifndef BANK_H_
#define BANK_H_

//This is the class of Bank that has the attribute of the bank
class Bank{
//We declare the public attribute
public:
  double deposit;
  double interest;
  double timeInYears;
  Bank(){
  }
//We declare the simpleInterest method here
  double simpleInterest();

//This is a declaration of the destructor
~Bank();
};
#endif
