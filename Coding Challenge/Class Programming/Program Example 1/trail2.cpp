#include<iostream>
using namespace std;

int main(){
int x = 10;
int *y =&x;

int **z=&y;
int***w=&z;

int array[5] = {1,2,3,4,5};
int *ptr;
ptr=array;
cout<<"The address of x which is value of y is:" <<y<<endl;
//cout<<"Dereferencing the pointer value of y is "<<*y<<endl;

cout<<"The value of z is "<<z<<endl;
//cout<<"Dereferencing z is "<<*z<<endl;
//cout<<"Dereferencing z twice is "<<**z<<endl;

cout<<"The value of w is "<<w<<endl;
//cout<<"The Dereferencing w is "<<*w<<endl;
//cout<<"The Dereferencing w twice is "<<**w<<endl;
//cout<<"The Dereferencing w thrice is "<<***w<<endl;
//cout<<"Value that address is: "<<*y<<endl;

  return 0;
}
