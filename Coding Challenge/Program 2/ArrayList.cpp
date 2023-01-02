//Importing the necessary libraries
#include "ArrayList.h"
#include<iostream>
#include<string>
using namespace std;

//We define the ArrayList Constactor
ArrayList::ArrayList(){
  arraySize=1;
  occupiedSize=0;
  myArray = new int[arraySize];

  for(int i=0; i<arraySize; i++){
     myArray[i]=0;
    }
}

//The destractor is defined here
ArrayList::~ArrayList(){
  delete [] myArray;
}

//The push method is defined here
void ArrayList::push(int m) {
    if(occupiedSize>=arraySize){
    int newArraySize=arraySize*2;
    int *tempArray = new int[newArraySize];

    int i;
    for(i=0; i<arraySize; i++)
      tempArray[i]=myArray[i];

    arraySize = newArraySize;

   tempArray[i]=m;

   delete [] myArray;
   myArray=tempArray;
   occupiedSize++;

    }else{
        myArray[arraySize-1]=m;
    occupiedSize++;

  }
}

//The erase method is defined here
void ArrayList::erase(int m){
  int i;
  for(i=0;i<occupiedSize; i++){
    if(myArray[i]==m){
      break;
    }
  }

      for(int j=i;j<occupiedSize-1;j++){
          myArray[j]= myArray[j+1];
        }
          occupiedSize=occupiedSize-1;

      if((occupiedSize==(arraySize/2))&&(arraySize%2==0)){
        int *myNewArray = new int[arraySize/2];

        for(int i=0; i<occupiedSize;i++){
          myNewArray[i] = myArray[i];
        }
        arraySize=arraySize/2;

        delete [] myArray;
          myArray = myNewArray;
      }
      }

//The toString method is defined here
void ArrayList::toString(){
  cout<<"the elements of the Array list is: "<<endl;
  cout<<"[";
  for(int i=0; i<occupiedSize;i++){
    cout<<myArray[i]<<" ";
  }
  cout<<"]" <<endl;

}
