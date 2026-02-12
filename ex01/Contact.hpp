/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:17:39 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/12 13:17:40 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>

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