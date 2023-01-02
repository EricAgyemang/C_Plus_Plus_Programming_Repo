#include "Header.h"
using namespace myHeader;
HeaderExample::HeaderExample() {
	cout<<"Calling Header Example constructor"<<endl;
}

HeaderExample::~HeaderExample() {
	cout<<"Calling Header Example destructor"<<endl;
}

int HeaderExample::add(int x, int y){
	return x+y;
	/* add using bitOR*/
}
