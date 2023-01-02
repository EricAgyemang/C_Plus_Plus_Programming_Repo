#include<iostream>
#include<cmath>
using namespace std;

class FedBank{
public:
  double compoundInterest(double principle, double rate, double rate, double time){

    return (principle*pow(1+rate/100),time)-principle);
  }

};

class ISUBank{
public:
public:
  double compoundInterest(double principle, double rate, double rate, double time){
     rate=rate+.25;
     return (principle*pow(1+rate/100),time)-principle);
}
};
class Student:public FedBank, public ISUBank{

};
int main(){

  return 0;
}
