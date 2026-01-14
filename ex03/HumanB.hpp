#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		void	attack();
		void	setName(std::string name);
		void	setWeapon(Weapon &weapon);

	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif