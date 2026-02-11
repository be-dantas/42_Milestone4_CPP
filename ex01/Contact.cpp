#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::addContact(std::string first, std::string last, std::string nick,
						std::string number, std::string secret)
{
	f_name = first;
	l_name = last;
	n_name = nick;
	num = number;
	sct = secret;
}

void Contact::printContactList(int i)
{
	std::cout << "         " << i << "|" << std::endl;

	if (f_name.length() > 10)
	{
		f_name.size[10];
	}
}