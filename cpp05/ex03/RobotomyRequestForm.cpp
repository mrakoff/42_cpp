/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:18:13 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/20 14:05:56 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <experimental/random>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "default")
{
	std::cout << "\033[32mDefault constructor for RobotomyRequestForm called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "\033[32mConstructor for RobotomyRequestForm called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) 
	: AForm("RobotomyRequestForm", other.getGradeToSign(), other.getGradeToExec(), other.getTarget())
{
	std::cout << "\033[32mCopy constructor for RobotomyRequestForm called\033[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[31mDestructor for RobotomyRequestForm called\033[0m" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "*SOME DRILLING NOISES*" << std::endl;
	if (std::experimental::randint(0, 42) % 2)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy for " << getTarget() << " has failed..." << std::endl;
}
