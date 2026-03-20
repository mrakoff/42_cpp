/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 14:11:04 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/20 20:28:39 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\033[32mDefault constructor for Intern called\033[0m" << std::endl;
}

Intern::~Intern()
{
	std::cout << "\033[31mDestructor for Intern called\033[0m" << std::endl;
}

Intern::formCode findForm(const std::string &name)
{
	std::string	formName = name;
	int i = 0;

	while (std::isalpha(name[i]) || name[i] == ' ')
	{
		formName[i] = std::tolower(name[i]);
		i++;
	}

	if (formName == "shrubbery creation")	return Intern::formCode::ShrubberyCreationForm;
	if (formName == "presidential pardon")	return Intern::formCode::PresidentialPardonForm;
	if (formName == "robotomy request")		return Intern::formCode::RobotomyRequestForm;
	else
		throw Intern::FormNotFound();
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm *F = nullptr;
	std::string	formName;
	
	switch (findForm(name))
	{
		case formCode::ShrubberyCreationForm:
			F = new ShrubberyCreationForm(target);
			break;
		case formCode::RobotomyRequestForm:
			F = new RobotomyRequestForm(target);
			break;
		case formCode::PresidentialPardonForm:
			F = new PresidentialPardonForm(target);
			break;
	}
	std::cout << "Intern creates " << F->getName() << std::endl;
	return F;
}
