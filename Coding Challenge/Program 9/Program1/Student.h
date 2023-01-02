#pragma once

#include "Address.h"
#include "Contact.h"
#include <string>
#include <vector>
#include <iostream>

class Student
{

private:
	std::wstring studentId;
public:
	std::wstring name;
private:
	Address *address;
	Contact *contact;

public:
	virtual ~Student()
	{
		delete address;
		delete contact;
	}

	Student(const std::wstring &id);
	virtual void addAddress(Address *a);
	virtual void addContact(Contact *c);
	virtual void display();

	static void main(std::vector<std::wstring> &args);

};
