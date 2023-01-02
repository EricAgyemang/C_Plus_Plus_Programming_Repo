/*
 * Destructor.cpp
 *
 *  Created on: Mar 13, 2016
 *      Author: rsaripa
 */

#include <iostream>
#include <string.h>
using namespace std;

class Student
{

private:
	int ulid;
	string firstName;
	string lastName;

public:
	Student(int id, string first, string last)
	{
		ulid = id;
		firstName = first;
		lastName = last;
	}
	/*
	 * Copy Constructor. Takes in a object of
	 * the same type. If you don't provide one,
	 * the compiler will provide a default
	 * copy constructor
	 */
	Student(Student &me)
	{
		ulid = me.ulid + 2;
		firstName = me.firstName;
		lastName = me.lastName + " ** Copy **";
	}

	string printName()
	{
		return firstName + " " + lastName;
	}

	/*
	* Destructor
	*/
	~Student()
	{
		cout << "The student object is destroyed" << endl;
	}
};

int main()
{

	Student s(1, "Rishi", "Saripalle");
	cout << s.printName() << endl;
	Student s2 = s;
	cout << s2.printName() << endl;
	/* Destructor is a method, but dont call it explictly (as shown)
	   When the object goes out of scope, Destructor is called
		 automatically
		 */
	//s.~Student();
}
