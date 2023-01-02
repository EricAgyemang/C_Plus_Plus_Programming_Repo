/*
 *
 *  Created on: Feb 17, 2016
 *      Author: rsaripa
 */

#include <iostream>
using namespace std;
// Global variable of the file
int globalVar = 2;
const double PI = 3.1418;
// External variable
extern int globalVar_ex2;

void localVar(int y) {
	int x = 10
	cout<<"Local Variable in function:"<<x<<endl;
	cout<<"Accessing const in function"<<PI<<endl;
}

int main() {
	const double PI2 = 3.141;
	const double PI = 3.1418;
	int x = 4;
	int unInitiazliedVar;
	localVar(x);
	cout<<"Local Variable:"<<x<<endl;
	cout<<" PI Variable:"<<PI<<endl;
	cout<<"Local Uninitialized Variable:"<<unInitiazliedVar<<endl;
	cout<<"Global Variable:"<<globalVar<<endl;
	cout<<"Global External Variable in question:"<<globalVar_ex2<<endl;
	cout<<"Const Variable:"<<PI2<<endl;

	return 0;
}
