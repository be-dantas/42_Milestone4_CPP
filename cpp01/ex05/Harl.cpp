/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:56:58 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/17 18:13:51 by bedantas         ###   ########.fr       */
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
	
}
