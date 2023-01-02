#ifndef PRESIDENT_H_
#define PRESIDENT_H_
#include<iostream>
#include<string>
using namespace std;
namespace pattern{
namespace worker{

class President:public Worker{
public:
  President();
  void Worker();
  void nextWorker(Worker worker);
};
}
}
#endif
