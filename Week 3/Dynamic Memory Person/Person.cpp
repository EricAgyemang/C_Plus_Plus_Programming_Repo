#include <iostream>
using namespace std;

class Person
{
private:
	string SSN;

protected:
	string taxID;
	string getTaxID()
	{
		return taxID;
	}

public:
	string firstName;
	string lastName;
	string email;
	void setSSN(string s)
	{
		SSN = s;
	}
	void setTaxID(string id)
	{
		taxID = id;
	}
	void toString()
	{
		cout << firstName << "  " << lastName << " email is " << email << endl;
	}
};
int main()
{
	/*
	 * calls the default no-argument constructor provided
	 */
	Person *p = new Person[2];
	for (int i = 0; i < 2; i++)
	{
		p[i].firstName = "Rishi";
		p[i].lastName = "Kanth";
		p[i].email = "rishi.saripalle@ilstu.edu";
	}
	for (int i = 0; i < 2; i++)
	{
		p[i].toString();
	}
	
	delete[] p;
	p = nullptr;
	return 0;
}
