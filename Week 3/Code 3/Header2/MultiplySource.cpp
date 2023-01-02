#include "Multiply.h"
#include "Subtract.h"

#ifndef FLAG
	#error FLAG is missing // This will stop the preprocessing phase
	#warning Flag is missing // This will ONLY warn and continue with preprocessing phase
#endif


MultiplyClass::MultiplyClass(int x, int y){
	c = x;
	d = y;
	
}

int MultiplyClass::multiply(){
	SubtractClass s(c,d);
	int temp = s.subtract();
	return (c*d)*temp;
}
