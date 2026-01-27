#ifndef FRAGTRAP_H
#define FRAGTRAP_H


#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	using	ClapTrap::ClapTrap;

	public:
	/*			constructors			*/
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);

	/*			destructor				*/
	~FragTrap();
	
	/*		member functions			*/
	void	setName(std::string name);
	void	setHitPoints(unsigned int amount);
	void	setEnergyPoints(unsigned int amount);
	void	setAttackDamage(unsigned int amount);

	void	highFivesGuys(void);

};

#endif