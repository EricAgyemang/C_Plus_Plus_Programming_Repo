#include "Add.h"
#include "Multiply.h"
using namespace std;

AddClass::AddClass(int x, int y){
	a = x;
	b = y;
}

int AddClass::add(){
	MultiplyClass m(a,b);
	int temp = m.multiply();
	return (a+b)+temp;
}
