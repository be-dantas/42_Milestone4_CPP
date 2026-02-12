/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:17:50 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/12 17:07:07 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	count_list = 0;
	old_contact = 0;
}

static bool onlySpace(std::string s)
{
	if (s.empty())
		return (false);
	for (int i = 0; s[i]; i++)
		if (!std::isspace(s[i]))
			return (false);
	return (true);
}

static void readInputAdd(std::string message, std::string &val)
{
	std::cout << message;
	if (!std::getline(std::cin, val))
		std::exit(0);
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
	std::cout << "CONTACT ADDED" << std::endl;

	if (count_list < 8)
		count_list++;
	old_contact++;
}

void PhoneBook::printList()
{
	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "first name" << "|";
	std::cout << std::right << std::setw(10) << "last name" << "|";
	std::cout << std::right << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < count_list; i++)
		ctt[i].printContactList(i + 1);
}

void PhoneBook::inputSearch()
{
	std::string line;

	if (count_list > 0)
	{
		printList();
		while (line.empty() || onlySpace(line))
		{
			std::cout << "Contact index: ";
			if (!std::getline(std::cin, line))
				std::exit(0);
			if (line.empty() || onlySpace(line))
				std::cout << "Fill in again" << std::endl;
			else if (line.length() == 1 && std::isdigit(line[0]))
			{
				int i = line[0] - '0';
				if (i >= 1 && i <= count_list)
					ctt[i - 1].printContact();
				else
				{
					std::cout << "Valids digits from 1 to " << count_list << std::endl;
					line.clear();
				}
			}
			else
			{
				std::cout << "Valids digits from 1 to " << count_list << std::endl;
				line.clear();
			}
		}
	}
	else
		std::cout << "No contacts in the list" << std::endl;
}
