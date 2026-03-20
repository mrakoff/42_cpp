#ifndef PPF_H
#define PPF_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &other);
	~PresidentialPardonForm();
	PresidentialPardonForm&operator=(PresidentialPardonForm &other) = delete;

	void	execute(Bureaucrat const &executor) const;

};

#endif