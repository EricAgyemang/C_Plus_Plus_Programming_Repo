#ifndef FACULTY_H_
#define FACULTY_H_
#include<iostream>
#include<string>
using namespace std;
namespace pattern{

namespace worker{

class Faculty:public Worker{
public:

  Faculty();

  void work();

  void nextWorker(Worker worker);

  ~Faculty();
};

}
}
#endif
