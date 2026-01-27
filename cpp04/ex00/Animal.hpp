#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

class	Animal
{
	public:

	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);

	~Animal();

	std::string	getType();
	void		makeSound();

	protected:

	std::string	_type;

};

#endif