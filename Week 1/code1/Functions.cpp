#include <iostream>
#include <cmath>
using namespace std;

// Forward declaration of the function.
// This tells the compiler that a function named simpleInterest is defined later in the file.
// Definition = return_type functionName(parameters); "NO" {}
double simpleInterest(double principle, double rate, double time);
// or you also say this. Only the function parameter types
//double simpleInterest(double , double , double );
// Declaring and defining the function before use.
double compoundInterest(double principle, double rate, double time){
	//pow is a function in cmath library
	return (principle*pow(1+(rate/100),time) - principle);
}

int main(){
	double principle = 20000;
	double rate = 8;
	double time = 5;

	cout<<"Compound Interest earned: "<<compoundInterest(principle,rate,time)<<endl;
	cout<<"Simple Interest earned: "<<simpleInterest(principle,rate,time)<<endl;

	return 0;
}

double simpleInterest(double principle, double rate, double time){

	return (principle*(1+(rate/100)*time)-principle);
}
