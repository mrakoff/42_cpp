/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 03:55:29 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/09 05:12:34 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string name)
{
	std::cout << name << " has been created" << std::endl;
};

// destructor
Zombie::~Zombie()
{
	std::cout << getName() << " was destroyed!" << std::endl;
};

void	Zombie::announce()
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName()
{
	return (_name);
}

void	Zombie::setName(std::string n)
{
	_name = n;
}
