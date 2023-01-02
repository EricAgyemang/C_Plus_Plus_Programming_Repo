#include "Subtract.h"
using namespace std;

SubtractClass::SubtractClass(int x, int y){
	e = x;
	f = y;
}

int SubtractClass::subtract(){
	return e-f;
}
