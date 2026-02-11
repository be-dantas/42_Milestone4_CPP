#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string num;
		std::string secret;
	public:
		void input_add();
		void print_contact();
}

class PhoneBook
{
	private:
		Contact ctt[8];
		int count_list = 0;
		int old_contact = 0;
	public:
		
}

#endif