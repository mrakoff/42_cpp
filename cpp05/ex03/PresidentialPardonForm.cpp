/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:33:43 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/18 19:51:39 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "default")
{
	std::cout << "\033[32mDefault constructor for PresidentialPardonForm called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "\033[32mConstructor for PresidentialPardonForm called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) 
	: AForm("PresidentialPardonForm", other.getGradeToSign(), other.getGradeToExec(), other.getTarget())
{
	std::cout << "\033[32mCopy constructor for PresidentialPardonForm called\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[31mDestructor for PresidentialPardonForm called\033[0m" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
