#include "Student.h"

Student::Student(const std::wstring &id)
{
	studentId = id;
}

void Student::addAddress(Address *a)
{
	address = a;
}

void Student::addContact(Contact *c)
{
	contact = c;
}

void Student::display()
{
	std::wcout << name << L" - has student id: " << studentId << std::endl;
	address->display();
	contact->display();
}

void Student::main(std::vector<std::wstring> &args)
{
	Student *rishi = new Student(L"rsaripa");
	Address *address = new Address(L"Information Tech", 5150, L"", L"Normal", L"IL", L"USA");
	Contact *contact = new Contact(L"rishi.saripalle@ilstu.edu", L"309-909-09090", L"911");
	rishi->name = L"Rishi Saripalle";
	rishi->addAddress(address);
	rishi->addContact(contact);
	rishi->display();

//JAVA TO C++ CONVERTER TODO TASK: A 'delete contact' statement was not added since contact was passed to a method or constructor. Handle memory management manually.
//JAVA TO C++ CONVERTER TODO TASK: A 'delete address' statement was not added since address was passed to a method or constructor. Handle memory management manually.
	delete rishi;
}
