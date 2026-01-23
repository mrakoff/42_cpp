/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:38:29 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/23 13:06:43 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*		constructors			*/
ClapTrap::ClapTrap() : _name("Nemo"), _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
	std::cout << "\033[32mDefault constructor for ClapTrap called\033[0m" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\033[32mConstructor for ClapTrap called\033[0m" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "\033[32mCopy constructor for ClapTrap called\033[0m" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

/*	copy assignment operator	*/
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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
ClapTrap::~ClapTrap()
{
	std::cout << "\033[31mDestructor for ClapTrap called\033[0m" << std::endl;
}

/*		member functions			*/
void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already knocked out and can't attack!" << std::endl;
		return ;
	}
	if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name << " is exhausted!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _attackDamage << " point of damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already knocked out!" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if (_hitPoints > 0)
		std::cout << "ClapTrap " << _name << " has taken " << amount 
		<< " damage! Now there's only " << _hitPoints << "HP left" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has taken " << amount << " damage and has been knocked out!" << std::endl;
	}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already knocked out and can't heal!" << std::endl;
		return ;
	}
	if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name << " is exhausted!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " was healed for " << amount << "HP and now has "
		<< _hitPoints << "HP" << std::endl;
	_energyPoints--;
}
