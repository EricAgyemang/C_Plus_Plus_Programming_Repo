//We import the required libraries
#include "header.h"
#include<stdlib.h>
#include<cstdlib>
#include<ctime>

//We define the Matrix construtor that generates random numbers between 1 and 10 4
//and assign them to the marix as elements
Matrix::Matrix(){
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      myArray[i][j]=rand()% 10+1;
    }
  }
}

//we define the toString method that will help us to print out the output
void Matrix::toString(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<myArray[i][j]<<" ";
    }
    cout<<endl;
  }
}

//This is the multiplication operator overloading defined here
Matrix Matrix::operator *(Matrix mat){
Matrix myMat;
int i,j,k,m;
  m=0;
  for(int i=0; i<3; i++){
    for(int j=0;j<3;j++){
      for(k=0;k<3;k++){
        m=m+myArray[i][k]*mat.myArray[k][j];
      }
      myMat.myArray[i][j]=m;
    }
  }
return myMat;
}

//This is the equal to operator being defined here
bool Matrix::operator==(Matrix mat){
  int flag = 1;
  for(int i=0; i<3; i++){
     for(int j=0; j<3;j++){
         if(myArray[i][j]!=mat.myArray[i][j]){
         flag = 0;
         break;
    }
  }
}
//We check the condition if the matrixs are equal
  if(flag==0){
    return false;
  }
  return true;


}
//We call the destructor here
Matrix::~Matrix(){

}
