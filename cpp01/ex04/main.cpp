/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:33:44 by bedantas          #+#    #+#             */
/*   Updated: 2026/02/16 19:31:30 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string fileName;
    std::string s1;
    std::string s2;
    std::ifstream inFile;
    std::ifstream outFile;
    
    if (argc != 4 && (!argv[1][0] || !argv[2][0] || !argv[3][0]))
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
    
}