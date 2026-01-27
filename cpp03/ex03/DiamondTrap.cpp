/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:03:34 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 02:57:42 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*		constructors			*/
DiamondTrap::DiamondTrap() 
{
	setName("Nemo");
	setAttackDamage(FragTrap::_attackDamage);
	setEnergyPoints(ScavTrap::_energyPoints);
	setHitPoints(FragTrap::_hitPoints);
	std::cout << "\033[32mA Default DiamondTrap has appeared! (Default constructor for DiamondTrap called)\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	setName(name);
	setAttackDamage(FragTrap::_attackDamage);
	setEnergyPoints(ScavTrap::_energyPoints);
	setHitPoints(FragTrap::_hitPoints);
	std::cout << "\033[32mA furious DiamondTrap has appeared! (Constructor for DiamondTrap called)\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ScavTrap(), FragTrap()
{
	std::cout << "\033[32mCopy constructor for DiamondTrap called\033[0m" << std::endl;

	setName(other._name);
	setAttackDamage(other._attackDamage);
	setEnergyPoints(other._energyPoints);
	setHitPoints(other._hitPoints);
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

/*		destructor				*/
DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31mDestructor for DiamondTrap called\033[0m" << std::endl;
}

/*		member functions			*/
void	DiamondTrap::whoAmI() 
{
	std::cout << "DiamondTrap says: my name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

std::string		DiamondTrap::getName()							{	return (_name);				}
unsigned int	DiamondTrap::getHitPoints()						{	return (_hitPoints);		}
unsigned int	DiamondTrap::getEnergyPoints()					{	return (_energyPoints);		}
unsigned int	DiamondTrap::getAttackDamage()					{	return (_attackDamage);		}

void	DiamondTrap::setName(std::string name)					{	_name = name;				}
void	DiamondTrap::setHitPoints(unsigned int amount)			{	_hitPoints = amount;		}
void	DiamondTrap::setEnergyPoints(unsigned int amount)		{	_energyPoints = amount;		}
void	DiamondTrap::setAttackDamage(unsigned int amount)		{	_attackDamage = amount;		}
