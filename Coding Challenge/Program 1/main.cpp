//We import the necessary libraries
#include<iostream>
#include"header.h"
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;

//This is the main method
int main(){

//We generate random numbers for the matrixs
  srand(time(0));

  //We display the output of the first matrix
  Matrix mat1;
  cout<<"The Matrix  mat1 is :\n";
  mat1.toString();

  //We display the output of the second matrix
  Matrix mat2;
  cout<<"The Matrix mat2 is: \n";
  mat2.toString();

  //We display the output of the product of the two matrixs
  Matrix mat3 = mat1*mat2;
  cout<<"The matrix mat3 which is the matrix multiplication is: \n";
  mat3.toString();

//We display the output  of the checked condition if the matrixs are the same
  cout<<"Checking for the equality of the matrix: \n";
  if(mat1==mat2){
    cout<<"The two matrix objects are the same"<<endl;
  }else{
    cout<<"The two matrix objects are not the same"<<endl;
  }

  return 0;
}
