#include<iostream>
using namespace std;
void swapValue(int a, int b);

int main(){
int val1=10;
int val2=20;
  swapValue(val1, val2);

}

void swapValue(int a, int b){
  int temp = a;
  a = b;
  b=temp;

  cout<<"Inside the swapping function, a:"<<a<<", b: "<<b<<endl;
  return;
}
