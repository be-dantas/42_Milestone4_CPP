#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact ctt[8];
		int count_list;
		int old_contact;
	public:
		PhoneBook();
		void inputAdd();
		void inputSearch();
		void printList();
};

#endif