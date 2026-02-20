/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:56:58 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/18 16:55:54 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[DEBUG]\nPlanilha aberta, aguardando dados do cliente." << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\nRelatório enviado por e-mail." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\nPrazo se aproximando e resposta ainda não recebida." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\nArquivo final foi apagado sem backup." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string allLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*actions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (allLevels[i] == level)
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << "Sem reclamações" << std::endl;
}
