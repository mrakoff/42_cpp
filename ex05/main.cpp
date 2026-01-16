/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:54:08 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/16 14:31:53 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Wrong input. Nothing to complain about!" << std::endl;
		return (1);
	}

	std::string	level = av[1];
	if (level.compare("DEBUG") && level.compare("INFO") && level.compare("WARNING") && level.compare("ERROR"))
	{
		std::cerr << "Unknown level! Harl is happy!" << std::endl;
		return (1);
	}

	Harl	Harl;
	Harl.complain(level);
}