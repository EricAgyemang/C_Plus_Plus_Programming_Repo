//We import the necessary libraries
#include<iostream>
#include"ArrayList.h"
#include<string>
using namespace std;

//The main method is defined here
int main(){

  //We declare an ArrayList object arrayObj
  ArrayList arrayObj;

  // We add elements to the array
  arrayObj.push(11);
  arrayObj.push(12);
  arrayObj.push(13);
  arrayObj.push(14);
  arrayObj.push(15);
  arrayObj.toString();

//We erase some elements and display the remaining elements in the array
  arrayObj.erase(13);
  cout<<"After erasing 13"<<endl;
  arrayObj.toString();
  arrayObj.erase(11);
  cout<<"After erasing 11"<<endl;
  arrayObj.toString();
  arrayObj.erase(15);
  cout<<"After erasing 15"<<endl;
  arrayObj.toString();

  return 0;
}
