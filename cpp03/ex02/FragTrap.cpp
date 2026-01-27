/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:31:15 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 01:34:54 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*		constructors			*/
FragTrap::FragTrap()
{
	setName("Nemo");
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
	std::cout << "\033[32mA Default FragTrap has appeared! (Default constructor for FragTrap called)\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	setName(name);
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
	std::cout << "\033[32mAn untamed FragTrap has appeared! (Constructor for FragTrap called)\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "\033[32mCopy constructor for FragTrap called\033[0m" << std::endl;

	setName(other._name);
	setAttackDamage(other._attackDamage);
	setEnergyPoints(other._energyPoints);
	setHitPoints(other._hitPoints);
}

/*		destructor				*/
FragTrap::~FragTrap()
{
	std::cout << "\033[31mDestructor for FragTrap called\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " politely requests a high five.." << std::endl;
	std::cout << std::endl << "(^-^)/" << "\\(^-^)" << std::endl << std::endl;
}

void	FragTrap::setName(std::string name)					{	_name = name;				}
void	FragTrap::setHitPoints(unsigned int amount)			{	_hitPoints = amount;		}
void	FragTrap::setEnergyPoints(unsigned int amount)		{	_energyPoints = amount;		}
void	FragTrap::setAttackDamage(unsigned int amount)		{	_attackDamage = amount;		}
