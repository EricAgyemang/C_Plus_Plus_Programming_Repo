#ifndef FLAG
#define FLAG 1
#endif

#ifndef _MULTIPLY_HEADER_
#define _MULTIPLY_HEADER_

#include <iostream>
using namespace std;

class MultiplyClass{

	private:
		int c;
		int d;
		
	public:
		MultiplyClass(int c,int d);
		int multiply();
};
#endif
