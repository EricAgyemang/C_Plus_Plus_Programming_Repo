#include "President.h"
#include "Worker.h"
#include<string>
using namespace std;
using namespace pattern;
using namespace worker;

President::President(){

}
void President::Worker(){
  cout<<"I am proud of my students and university. I am happy to bestow them their degrees and wish them luck."<<endl;
}
void President::nextWorker(Worker worker){
   w = worker;
}

President::~President(){
  
}
