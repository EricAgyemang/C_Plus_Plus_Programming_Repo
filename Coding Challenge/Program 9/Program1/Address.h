#pragma once

#include <string>
#include <iostream>

class Address
{
private:
	std::wstring streetName;
	int houseNo = 0;
	std::wstring aptNo;
	std::wstring city;
	std::wstring state;
	std::wstring country;

public:
	Address(const std::wstring &sn, int hn, const std::wstring &an, const std::wstring &ct, const std::wstring &st, const std::wstring &cou);
	virtual void display();
};
