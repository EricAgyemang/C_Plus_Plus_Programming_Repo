#pragma once

#include <string>
#include <iostream>

class Contact
{
private:
	std::wstring email;
	std::wstring cellPhone;
	std::wstring emergencyPhone;

public:
	Contact(const std::wstring &e, const std::wstring &cp, const std::wstring &ep);
	virtual void display();
};
