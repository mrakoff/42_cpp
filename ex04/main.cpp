/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:31:06 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/15 11:49:24 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

/*
*	opens the file by creating a stream to it using fstream class
*	memory is automatically discarded after program finishes running
*	
*	creates a new file .replace
*	diff between fstream and ofstream/ifstream ??
*/
int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);

	std::string		filename = av[1];
	std::string		newFilename = filename + ".replace";
	std::string 	oldString = av[2];
	std::string		newString = av[3];
	std::string		line;

	std::fstream	filein(filename, std::ios::in);
	if (!filein.is_open())
	{
		std::cerr << "Error opening file!" << std::endl;
		return (1);
	}
	std::fstream	fileout(newFilename, std::ios::out);

	while (std::getline(filein, line))
	{
		std::size_t len = oldString.length();
		std::size_t newLen = newString.length();
		std::size_t index = 0;

		while ((index = line.find(oldString, index)) != std::string::npos)
		{
			line.insert(index + len, newString);
			line.erase(index, len);
			index += newLen;
		}
		fileout << line << std::endl;
	}

	if (filein.eof())
		std::cout << "File processed." << std::endl;

	filein.close();
	fileout.close();

	return (0);
}
