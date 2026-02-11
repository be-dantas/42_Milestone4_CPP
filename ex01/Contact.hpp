#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string num;
		std::string sct;
	public:
		void addContact(std::string first, 
						std::string last, 
						std::string nick, 
						std::string number, 
						std::string secret);
		void printContactList(int i);
		void printContact();
};

#endif