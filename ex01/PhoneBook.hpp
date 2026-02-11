#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	private:
		Contact ctt[8];
		int count_list = 0;
		int old_contact = 0;
	public:
		PhoneBook();
		void inputAdd();
		void inputSearch();		
};

#endif