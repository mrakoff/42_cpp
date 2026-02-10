#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	public:

	Brain();
	Brain(const Brain& other);
	~Brain();

	void				setIdea(const std::string &idea);
	std::string			getIdea(unsigned int index) const;
	void				changeIdea(unsigned int index, std::string idea);

	private:

	std::string		_ideas[100];
	unsigned int	_i;
};

#endif