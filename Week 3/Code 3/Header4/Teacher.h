#ifndef TEACHER_H_
#define TEACHER_H_
#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
	string SSN = "007-007-00007";
public:
	string firstName;
	string lastName;
	string email;
	Teacher(string, string, string);
	void sendEmail();
};
#endif // TEACHHER_H_
