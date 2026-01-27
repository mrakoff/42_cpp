/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:54:09 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 02:54:05 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*		constructors			*/
ScavTrap::ScavTrap()
{
	setName("Nemo");
	setAttackDamage(0);
	setEnergyPoints(0);
	setHitPoints(0);
	std::cout << "\033[32mA Default ScavTrap has appeared! (Default constructor for ScavTrap called)\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setAttackDamage(20);
	setEnergyPoints(50);
	setHitPoints(100);
	std::cout << "\033[32mA wild ScavTrap has appeared! (Constructor for ScavTrap called)\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "\033[32mCopy constructor for ScavTrap called\033[0m" << std::endl;

	setName(other._name);
	setAttackDamage(other._attackDamage);
	setEnergyPoints(other._energyPoints);
	setHitPoints(other._hitPoints);
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
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
ScavTrap::~ScavTrap()
{
	std::cout << "\033[31mDestructor for ScavTrap called\033[0m" << std::endl;
}

/*		member functions			*/
void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints < 1)
	{
		std::cout << "ScavTrap " << _name << " is already knocked out and can't violently attack!" << std::endl;
		return ;
	}
	if (!_energyPoints)
	{
		std::cout << "ScavTrap " << _name << " is too tired to attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " violently attacks " << target 
		<< ", causing " << _attackDamage << " point of damage!" << std::endl;
	_energyPoints--;
}

void	ScavTrap::setName(std::string name)					{	_name = name;				}
void	ScavTrap::setHitPoints(unsigned int amount)			{	_hitPoints = amount;		}
void	ScavTrap::setEnergyPoints(unsigned int amount)		{	_energyPoints = amount;		}
void	ScavTrap::setAttackDamage(unsigned int amount)		{	_attackDamage = amount;		}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now watching the gate closely and guarding!" << std::endl;
}