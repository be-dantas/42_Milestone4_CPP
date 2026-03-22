/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:51:53 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/22 19:53:19 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2 || std::string(argv[1]) != "input.txt")
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    try
    {
        BitcoinExchange btc;
        btc.processInput(argv[1]);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
		return (1);
    }
    
    return (0);
}
