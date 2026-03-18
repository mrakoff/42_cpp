#ifndef SCF_H
#define SCF_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm&operator=(ShrubberyCreationForm &other) = delete;

	void	execute(Bureaucrat const &executor) const;

};

#endif