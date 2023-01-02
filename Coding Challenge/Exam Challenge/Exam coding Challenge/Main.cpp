#include "Worker.h"
#include "President.h"
#include "Faculty.h"
#include "Student.h"
#include<iostream>
#include<string>
using namespace std;
using namespace pattern;
using namespace worker;

//The main method is defined
int main(){

  Worker* wr;

  wr = new Stuent();
  wr->nextWorker(rishi);
  delete wr;
  wr = NULL;

  wr = new Faculty();
  wr->nextWorker(president);
  delete wr;
  wr = NULL;

  wr = new President();
  delete wr;
  wr = NULL;
  
  s->work();
  return 0;
}
