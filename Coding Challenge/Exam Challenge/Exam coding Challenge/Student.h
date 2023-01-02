#ifndef STUDENT_H_
#define STUDENT_H_
#include<iostream>
#include<string>
using namespace std;

namespace pattern{
namespace worker{

class Student:public Worker{
public:
  Student();
  void Worker();
  void nextWorker(Worker worker);

  ~Student();
};
}
}
#endif
