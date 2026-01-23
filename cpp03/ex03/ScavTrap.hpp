#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	/*		constructor inheritance		*/
	using	ClapTrap::ClapTrap;

	public:
	/*			constructors			*/
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);

	/*			destructor				*/
	~ScavTrap();

	/*		member functions			*/
	void	setName(std::string name);
	void	setHitPoints(unsigned int amount);
	void	setEnergyPoints(unsigned int amount);
	void	setAttackDamage(unsigned int amount);

	void	attack(const std::string& target);
	void	guardGate();

};

#endif