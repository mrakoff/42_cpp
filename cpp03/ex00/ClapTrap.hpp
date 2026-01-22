#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
	/*		constructors			*/
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);

	/*	copy assignment operator	*/
	ClapTrap &operator=(const ClapTrap &other);
	
	/*		destructor				*/
	~ClapTrap();

	/*		member functions			*/
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	private:
		std::string	_name;
		int			_hitPoints = 10;
		int			_energyPoints = 10;
		int			_attackDamage = 0;

};

#endif