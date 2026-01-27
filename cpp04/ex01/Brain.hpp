#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	public:

	Brain();
	~Brain();
	void		setIdea(const std::string &idea);
	std::string	getIdea(unsigned int index);

	private:

	std::string 	_ideas[100];
	unsigned int	_i;
};

#endif