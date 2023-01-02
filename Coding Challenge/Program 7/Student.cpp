#include "Student.h"
#include "Worker.h"
#include<string>
using namespace pattern;
using namespace worker;

Student::Student(){

}

void Stuent::Worker(){
  cout<<"my work is to get project and assignment done on time"<<endl;
  w.worker();
}

  void Student::nextWorker(Worker worker){
      w = worker;

  }

Student::~Student(){

}
