/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:03:34 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/23 15:36:52 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*		constructors			*/
DiamondTrap::DiamondTrap()
{
	setName("Nemo");
	setAttackDamage(0);
	setEnergyPoints(0);
	setHitPoints(0);
	std::cout << "\033[32mA Default DiamondTrap has appeared! (Default constructor for DiamondTrap called)\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	setName(name);
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
	std::cout << "\033[32mAn untamed DiamondTrap has appeared! (Constructor for DiamondTrap called)\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "\033[32mCopy constructor for DiamondTrap called\033[0m" << std::endl;

	setName(other._name);
	setAttackDamage(other._attackDamage);
	setEnergyPoints(other._energyPoints);
	setHitPoints(other._hitPoints);
}

/*		destructor				*/
DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31mDestructor for DiamondTrap called\033[0m" << std::endl;
}

void	DiamondTrap::setName(std::string name)					{	_name = name;				}
void	DiamondTrap::setHitPoints(unsigned int amount)			{	_hitPoints = amount;		}
void	DiamondTrap::setEnergyPoints(unsigned int amount)		{	_energyPoints = amount;		}
void	DiamondTrap::setAttackDamage(unsigned int amount)		{	_attackDamage = amount;		}
