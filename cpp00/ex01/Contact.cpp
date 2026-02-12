/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:17:35 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/12 13:17:36 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static std::string formatColumn(std::string str)
{
	std::string temp;

	if (str.length() > 10)
		temp = str.substr(0, 9) + ".";
	else
		temp = str;
	return (temp);
}

void Contact::printContactList(int i)
{
	std::cout << std::right << std::setw(10) << i << "|";
	std::cout << std::right << std::setw(10) << formatColumn(f_name) << "|";
	std::cout << std::right << std::setw(10) << formatColumn(l_name) << "|";
	std::cout << std::right << std::setw(10) << formatColumn(n_name) << std::endl;
}

void Contact::printContact()
{
	std::cout << f_name << std::endl;
	std::cout << l_name << std::endl;
	std::cout << n_name << std::endl;
	std::cout << num << std::endl;
	std::cout << sct << std::endl;
}
