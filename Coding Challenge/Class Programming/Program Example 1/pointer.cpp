#include<iostream>
using namespace std;

int main(){
//  int x = 100;
//  int *y = &x;
//  int **z =&y;
//  int ***k =&z;

  //int s = *y;
//  cout<<"The address of x is: "<<y<<endl;
//  cout<<"The value of that address is: "<<*y<<endl;

//  cout<<"The address of s is: "<<s<<endl;
  //cout<<"The value of that address is: "<<*z<<endl;

int array[5]={1,2,3,4,5};
int *ptr;
ptr = array;
cout<<*ptr<<endl;


  return 0;
}
