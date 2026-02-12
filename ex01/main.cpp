/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:17:42 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/12 13:17:43 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook pb;

	std::string line;
	std::cout << "Welcome to my Phonebook!\nEnter an option: ADD, SEARCH or EXIT" << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, line))
			break ;
		if (line == "ADD")
			pb.inputAdd();
		else if (line == "SEARCH")
			pb.inputSearch();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Enter an option: ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
