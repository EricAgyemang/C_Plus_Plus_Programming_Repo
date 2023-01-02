#ifndef WORKER_H_
#define WORKER_H_
#include<iostream>
#include<string>
using namespace std;

namespace pattern{

class Worker{
protected:
  worker w = null;
public:
  void virtual work()=0;
  void virtual nextWorker(worker w)=0;

  ~Worker();
};
}
#endif
