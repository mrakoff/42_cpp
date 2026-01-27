#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H


#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	/*			constructors			*/
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);

	/*			destructor				*/
	~DiamondTrap();

	/*		member functions			*/
	void	setName(std::string name);
	void	setHitPoints(unsigned int amount);
	void	setEnergyPoints(unsigned int amount);
	void	setAttackDamage(unsigned int amount);

	std::string		getName();
	unsigned int	getHitPoints();
	unsigned int	getEnergyPoints();
	unsigned int	getAttackDamage();

	void	whoAmI();

	private:
	
	std::string		_name;
	// std::string		;
};

#endif