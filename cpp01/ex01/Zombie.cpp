/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:22:34 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/14 16:15:27 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* destructor */
Zombie::~Zombie()
{
	std::cout << _name <<  "\033[32m" << " was destroyed!" << "\033[0m" << std::endl;
};

void	Zombie::announce()
{
	std::cout << _name << ": " << "\033[31m" << "BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

std::string	Zombie::getName()
{
	return (_name);
}

void	Zombie::setName(std::string n)
{
	_name = n;
}
