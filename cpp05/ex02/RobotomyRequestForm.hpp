#ifndef RRF_H
#define RRF_H


#include <iomanip>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &other);
	~RobotomyRequestForm();
	RobotomyRequestForm&operator=(RobotomyRequestForm &other) = delete;

	void	execute(Bureaucrat const &executor) const;

};

#endif