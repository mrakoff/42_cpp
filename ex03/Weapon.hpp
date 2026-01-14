#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string str);
		std::string const	&getType();
		void				setType(std::string str);

	private:
		std::string _type;
};

#endif