#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	public:

	Brain();
	~Brain();
	void				setIdea(const std::string &idea);
	std::string			getIdea(unsigned int index);
	void				changeIdea(unsigned int index, std::string idea);

	int					getI();
	void				setI(int i);


	private:

	std::string 	_ideas[100];
	unsigned int	_i;
};

#endif