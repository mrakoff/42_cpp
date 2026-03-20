/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:36:58 by mel               #+#    #+#             */
/*   Updated: 2026/03/20 13:45:00 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Nemo"), _grade(42)
{
	std::cout << "\033[32mDefault constructor for Bureaucrat called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "\033[32mConstructor for Bureaucrat called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "\033[32mCopy constructor for Bureaucrat called\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[31mDestructor for Bureaucrat called\033[0m" << std::endl;
}

void	Bureaucrat::gradeUp()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::gradeDown()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &Bureaucrat)
{
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
	return (os);
}

void	Bureaucrat::signForm(AForm &F)
{
	F.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << "Bureaucrat " << getName() << ", grade " << getGrade() << ", executed " << form.getName() << std::endl;
}

std::string const	Bureaucrat::getName() const 	{		return(_name);		}
int					Bureaucrat::getGrade() const	{		return (_grade);	}
