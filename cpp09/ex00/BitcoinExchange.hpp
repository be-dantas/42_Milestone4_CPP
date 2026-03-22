/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:50:30 by beatriz           #+#    #+#             */
/*   Updated: 2026/03/22 19:24:28 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>
#include <cctype>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _data;

	public:
		~BitcoinExchange();
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);
		
		void createMapData();
		void processInput(const std::string& input) const;
		bool validLine(const std::string& line, std::string& date, double& value) const;
		double getRate(const std::string& date) const;
};

#endif
