//This is the implementation file that implements the Bank.h file in the project
#include "Bank.h"

//This is a method of the simpleInterest methods that implements the simpleInterest method in the .h file
double Bank::simpleInterest(){
  return (deposit*interest*timeInYears)/100;
}

//This is the destructor to the Bank class
Bank::~Bank(){
}
