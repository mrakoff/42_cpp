/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:36:58 by mel               #+#    #+#             */
/*   Updated: 2026/03/13 19:08:27 by msalangi         ###   ########.fr       */
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

void	Bureaucrat::signForm(Form &F)
{
	F.beSigned(*this);
}


std::string const	Bureaucrat::getName() 		{		return(_name);		}
int					Bureaucrat::getGrade()		{		return (_grade);	}
