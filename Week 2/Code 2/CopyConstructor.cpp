/*
 *   Created on: Mar 13, 2016
 *      Author: rsaripa
 */

#include <iostream>
#include <string.h>
using namespace std;

struct Course
{
	string name;
	int code;
};

class Student
{

private:
	int ulid;
	string firstName;
	string lastName;

public:
	Course courses[2];
	Student(int id, string first, string last);
	/*
	 * Copy Constructor. Takes in a object of
	 * the same type. If you don't provide one,
	 * the compiler will provide a default
	 * copy constructor
	 */
	Student(const Student &me);
	string printName();
};
Student::Student(int id, string first, string last)
{
	ulid = id;
	firstName = first;
	lastName = last;
	courses[0].name = "C++";
	courses[0].code = 226;
	courses[1].name = "Software";
	courses[1].code = 326;
}

Student::Student(const Student &me)
{
	ulid = me.ulid + 2;
	firstName = me.firstName + "- Copy";
	lastName = me.lastName + "- Copy";
	courses[0].name = me.courses[0].name;
	courses[0].code = me.courses[0].code;
	courses[1].name = me.courses[1].name;
	courses[1].code = me.courses[1].code;
}

string Student::printName()
{
	this->firstName = "Rishi";
	return firstName + " " + lastName;
}

int main()
{

	Student s(1, "Rishi", "Saripalle");
	cout << s.printName() << endl;
	Student s2 = s;
	//s.courses[0].name="C++ & Android";
	cout << s.courses[0].name << endl;
	cout << s2.courses[0].name << endl;
	s.courses[0].name = "C++ & Android";
	cout << s.courses[0].name << endl;
	cout << s2.courses[0].name << endl;
	cout << s2.printName() << endl;
}
