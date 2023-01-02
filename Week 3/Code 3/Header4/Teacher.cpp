#include "Teacher.h"
#include "Teacher.h"
Teacher::Teacher(string fn, string ln, string e) {
	firstName = fn;
	lastName = ln;
	email = e;
}

void Teacher::sendEmail(){
	cout<<"Sending email to Prof. "<<lastName<<" @ "<<email<<endl;
}
