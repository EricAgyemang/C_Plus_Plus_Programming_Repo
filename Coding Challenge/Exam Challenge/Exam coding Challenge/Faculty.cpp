#include "Faculty.h"
#include "Worker.h"
#include<string>
using namespace std;
using namespace pattern;
using namespace worker;
Faculty::Faculty(){

}

void Faculty::Worker(){
  cout<<"my work is to teach and help students to reach their goals. Alse, I evaluate the student's project and assignments."<<endl;
  w.worker();
}

  void Facult::nextWorker(Worker worker){
      w = worker;

  }

Faculty::~Faculty(){

}
