/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:33:44 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/17 16:45:52 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void lineReplace(std::string& line, std::string s1, std::string s2)
{
	size_t pos = 0;
	size_t lenS1 = s1.length();
	size_t lenS2 = s2.length();

	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, lenS1);
		line.insert(pos, s2);
		pos = pos + lenS2;
	}
}

int main(int argc, char **argv)
{
	std::string line;
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inFile;
	std::ofstream outFile;
	
	if (argc != 4 && (!fileName[0] || !s1[0] || !s2[0]))
	{
		std::cerr << "Valid input: ./replace <file> <s1> <s2>" << std::endl;
		return (1);
	}
	
	inFile.open(fileName.c_str());
	if (!inFile)
	{
		std::cerr << "Invalid file" << std::endl;
		return (1);
	}
	outFile.open((fileName + ".replace").c_str());
	if (!outFile)
	{
		std::cerr << "Error create .replace" << std::endl;
		return (1);
	}
	
	while (std::getline(inFile, line))
	{
		lineReplace(line, s1, s2);
		outFile << line << std::endl;
	}

	inFile.close();
	outFile.close();
	return (0);
}
