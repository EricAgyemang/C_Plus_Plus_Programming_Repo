/*
* Name:IT 180 Program 3
* Author: Eric Agyemang
* Description C++ Programming
*/

//We import the necessary libraries here
#include<iostream>
using namespace std;

//The foward declaration of the functions are presented here
double findAverage(int arrNum[], const int size);
int minValueFunct(int arrNum[], const int size);
int maxValueFunct(int arrNum[], const int size);


//b. Write a function that allows user to enter values into the declared array (Step a)
void myFunction(int arrNum[], const int size){
  //We allow user to enter the values of the myArray by using a for loop
  for(int i= 0; i<size; i++){
    cout<<"Please enter value for myArray[" <<i+1<< "]: ";
    cin>>arrNum[i];
    cout<<endl;
  }
}


//The main function is declare here with integer as the return type

int main(){

  int size = 15;
  //a. In the main, declare and array of size 15 of type "integer"
  int myArray[15];

myFunction(myArray, size);

//c. We call the getAverage function to display the mean on the console
cout << "The mean of the array is: " <<findAverage(myArray, size)<<endl;

//d. We call the minValueFunct function to get the minimum value of the declared array's elements
cout<<"The lowest value of the array is: "<<minValueFunct(myArray, size)<<endl;

//e. We call the maxValueFunct function to get the maximum value of the declared array's elements
cout << "The highest value of the array is: " <<maxValueFunct(myArray, size)<<endl;

return 0;
}

/*c. Write a function to that calculates the mean (the average) of the declared array (Step a)
and returns the mean to the main to be displayed on the console. (20 points)
i. Use forward declaration for this function. (5 points)
*/
double findAverage(int arrNum[], const int size){
  int sum = 0;
  for(int i=0; i<size; i++){
    sum+=arrNum[i];
  }
  return sum/size;
}

/*
d. Write a function that finds the lowest value of the declared array (Step a) and returns
the lowest value found to main to be displayed on the console
i. Use forward declaration for this function.
*/
int minValueFunct(int arrNum[], const int size){
  int lowerValue = arrNum[0];
  for(int i=0; i<size; i++){
    if(arrNum[i]<lowerValue){
      lowerValue = arrNum[i];
    }
  }
  return lowerValue;
}

/*
e. Write a function that finds the highest value of the declared array (Step a) and returns
the highest value found to main to be displayed on the console (20 points)
i. Use forward declaration for this function. (5 points)
*/
int maxValueFunct(int arrNum[], const int size){
  int highestValue = arrNum[0];
  for(int i=0; i<size; i++){
    if(arrNum[i]>highestValue){
      highestValue = arrNum[i];
    }
  }
  return highestValue;
}
