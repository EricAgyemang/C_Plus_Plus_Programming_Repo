#include "overload.h"
#include<iostream>
using namespace std;

int main(){
  Money me(5000, 4000);
  Money them(3000, 8000);

  Money total = me+them;

  cout<<"The total is "<<total<<endl;
  return 0;
}
