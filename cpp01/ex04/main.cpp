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

void lineReplace(std::string line, std::string s1, std::string s2)
{


}

int main(int argc, char **argv)
{
    std::string file;
    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream inFile;
    std::ifstream outFile;
    
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
    outFile.//...(fileName.c_str() + ".replace");
    if (!outFile)
    {
        std::cerr << "Error create .replace" << std::endl;
        return (1);
    }
    
    while (getline(fileName, file))
    {
        lineReplace(file, s1, s2);
        std::cout << line << std::endl;
    }

    //limpar strings?
    close(inFile);
    close(outFile);
    return (0);    
}