/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:36:58 by mel               #+#    #+#             */
/*   Updated: 2026/02/17 18:54:58 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "\033[32mDefault constructor for Bureaucrat called\033[0m" << std::endl;
	_name = "Nemo";
	
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "\033[32mConstructor for Bureaucrat called\033[0m" << std::endl;

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[31mDestructor for Bureaucrat called\033[0m" << std::endl;
}

void	Bureaucrat::gradeUp()
{
	_grade--;
}

void	Bureaucrat::gradeDown()
{
	_grade++;
}

std::string const	Bureaucrat::getName() 		{		return(_name);		}
unsigned int		Bureaucrat::getGrade()		{		return (_grade);	}
