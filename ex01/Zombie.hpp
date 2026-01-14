#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie
{
	public:
		~Zombie();

		void		announce(void);
		void		setName(std::string n);
		std::string	getName();

	private:
		std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif