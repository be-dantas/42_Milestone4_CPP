/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:51:48 by beatriz           #+#    #+#             */
/*   Updated: 2026/04/02 16:26:03 by beatriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange() {
	createMapData(); }

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {
	*this = copy; }

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	if (this != &copy)
		this->_data = copy._data;
	return (*this);
}

/******************************************************************************/

void BitcoinExchange::createMapData()
{
	std::string line;
	std::ifstream file("data.csv");
	
	if (!file.is_open())
		throw std::runtime_error("Error open data.cvs");
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::size_t len;
		std::string dData;
		double dRate;
		
		len = line.find(',');
		if (len == std::string::npos) {
			std::cerr << "Warning: bad line in data.csv => " << line << std::endl;
			continue ; }

		dData = line.substr(0, len);
		dRate = std::atof((line.substr(len + 1)).c_str());

		_data[dData] = dRate;
	}
}

bool BitcoinExchange::validLine(const std::string& line, std::string& date, double& value) const
{
	std::size_t len = line.find(" | ");
	if (len == std::string::npos) {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false); }
	
	//validar date
	date = line.substr(0, len);
	
	if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false); }

	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (!std::isdigit(date[i])) {
			std::cout << "Error: bad input => " << line << std::endl;
			return (false); }
	}

	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	
	if (month < 1 || month > 12) {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);	}
		
	if (month == 2 && isLeap) {
		if (day > 29)
			return (false);	}
		
	int daysMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day < 1 || day > daysMonth[month - 1]) {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);	}
	
	//validar value
	char* end;
	value = std::strtod((line.substr(len + 3)).c_str(), &end);

	if (*end != '\0')  {
		std::cout << "Error: bad input => " << line << std::endl;
		return (false); }

	if (value < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return (false); }
		
	if (value > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return (false); }

	return (true);
}

void BitcoinExchange::processInput(const std::string& input) const
{
	std::string line;
	std::ifstream file(input.c_str());
	
	if (!file.is_open())
		throw std::runtime_error("Error open input.txt");

	std::getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("Error format input.txt");
	
	while (std::getline(file, line))
	{
		std::string date;
		double value;
		
		if (!validLine(line, date, value))
			continue ;
		
		try
		{
			double rate = getRate(date);
			std::cout << date << " => " << value << " = " << value * rate << std::endl;
		}
		catch (std::exception& e) {
    	std::cout << e.what() << std::endl; }
	}
}

double BitcoinExchange::getRate(const std::string& date) const
{
	std::map<std::string, double>::const_iterator it;
	
	it = _data.lower_bound(date);
	if (it != _data.end() && it->first == date)
		return (it->second);

	if (it == _data.end()) {
		--it;
		return (it->second); }

	if (it == _data.begin())
		throw std::runtime_error("Error: no earlier data available");

	--it;
	return (it->second);
}
