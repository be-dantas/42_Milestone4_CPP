#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	count_list = 0;
	old_contact = 0;
}

bool onlySpace(std::string s)
{
	if (s.empty())
		return (false);
	for (int i = 0; s[i]; i++)
		if (!std::isspace(s[i]))
			return (false);
	return (true);
}

void readInputAdd(std::string message, std::string &val)
{
	std::cout << message;
	if (!std::getline(std::cin, val))
		//deve sair do programa
	if (val.empty() || onlySpace(val))
		std::cout << "Fill in again" << std::endl;
}

void PhoneBook::inputAdd()
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	number;
	std::string	secret;
	
	if (old_contact == 8)
		old_contact = 0;

	while (first.empty() || onlySpace(first))
		readInputAdd("First name: ", first);
	while (last.empty() || onlySpace(last))
		readInputAdd("Last name: ", last);
	while (nick.empty() || onlySpace(nick))
		readInputAdd("Nickname: ", nick);
	while (number.empty() || onlySpace(number))
		readInputAdd("Phone number: ", number);
	while (secret.empty() || onlySpace(secret))
		readInputAdd("Darkest secret: ", secret);

	ctt[old_contact].addContact(first, last, nick, number, secret);

	if (count_list < 8)
		count_list++;
	old_contact++;
}

void PhoneBook::inputSearch()
{
	std::string line;

	if (count_list > 0)
	{
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		for (int i = 1; i <= count_list; i++)
			printContactList(i);

		while (line.empty() || onlySpace(line))
		{
			std::cout << "Contact index: ";
			if (!std::getline(std::cin, line))
				//deve sair do programa
			if (line.empty() || onlySpace(line))
				std::cout << "Fill in again" << std::endl;
			else
			{
				if (std.len(line) > 1 || (line < '1' || line > '8'))
				{
					std::cout << "Valid from 1 to 8" << std::endl;
					//limpa line
				}
				else
					//pb.ctt[line].print_contact();
			}
		}
	}
	else
		std::cout << "No contacts in the list" << std::endl;
}
