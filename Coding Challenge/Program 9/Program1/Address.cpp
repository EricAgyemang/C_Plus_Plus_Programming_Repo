#include "Address.h"

Address::Address(const std::wstring &sn, int hn, const std::wstring &an, const std::wstring &ct, const std::wstring &st, const std::wstring &cou)
{
	streetName = sn;
	houseNo = hn;
	aptNo = an;
	city = ct;
	state = st;
	country = cou;
}

void Address::display()
{
	std::wcout << houseNo << L" " << streetName << std::endl;
	if (!aptNo.isEmpty())
	{
		std::wcout << L"Apt #: " << aptNo << std::endl;
	}
	std::wcout << city << L", " << state << std::endl;
	std::wcout << country << std::endl;
}
