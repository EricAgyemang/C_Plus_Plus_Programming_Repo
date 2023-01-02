#include "Contact.h"

Contact::Contact(const std::wstring &e, const std::wstring &cp, const std::wstring &ep)
{
	email = e;
	cellPhone = cp;
	emergencyPhone = ep;
}

void Contact::display()
{
	std::wcout << L"Email: " << email << L", Cell Phone: " << cellPhone << L", and Emergency Phone: " << emergencyPhone << std::endl;
}
