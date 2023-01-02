#include<iostream>
using namespace std;

#ifndef OVERLOAD_H_
#define OVERLOAD_H_

class Money{
  double savings;
  double checking;

public:
  Money(){
    savings=checking=1000;
  }

  Money operator + (const Money& a) const;
  Money operator - (const Money& a) const;
  bool operator == (const Money& a) const;

  void operator++();// Prefix
  void operator++(int); // postfix

};
#endif
