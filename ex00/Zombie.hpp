#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void		announce(void);
		void		setName(std::string n);
		std::string	getName();

	private:
		std::string _name;

};

void 	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
