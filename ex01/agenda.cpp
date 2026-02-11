#include "Classes.hpp"

void	input_add()
{
	if (old_contact == 8)
		old_contact = 0;


	while (!f_name)
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, f_name))
			//deve sair do programa
		if (!f_name) //e se for só espaços?
			std::cout << "Fill in again" << std::endl;
	}



	std::cout << "First name: ";
	if (!std::getline(std::cin, f_name))
		//deve sair do programa

	std::cout << "Last name: ";
	if (!std::getline(std::cin, l_name))
		//deve sair do programa

	std::cout << "Nickname: ";
	if (!std::getline(std::cin, n_name))
		//deve sair do programa

	std::cout << "Phone number: ";
	if (!std::getline(std::cin, num))
		//deve sair do programa

	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, secret))
		//deve sair do programa

	//count_list++;
	old_contact++;
}

void	input_search()
{
	std::string line;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	//func printar lista
	std::cout << "Contact index: ";
	if (!std::getline(std::cin, line))
		//deve sair do programa
	else
		//validar numero em line
		//pb.ctt[line].print_contact();
}

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
			pb.ctt[count_list].input_add();
		else if (line == "SEARCH")
			input_search();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Enter an option: ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
