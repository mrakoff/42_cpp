/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:24:35 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/18 19:51:09 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Empty"), _isSigned(false), _gradeToSign(42), _gradeToExec(42)
{
	std::cout << "\033[32mDefault constructor for AForm called\033[0m" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade, std::string target) 
	: _name(name), _target(target), _isSigned(false), _gradeToSign(signGrade), _gradeToExec(execGrade)
{
	std::cout << "\033[32mConstructor for AForm called\033[0m" << std::endl;
}

AForm::AForm(AForm &other) : _name(other._name), _isSigned(false), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
	std::cout << "\033[32mCopy constructor for AForm called\033[0m" << std::endl;
}

AForm::~AForm()
{
	std::cout << "\033[31mDestructor for AForm called\033[0m" << std::endl;
}

void	AForm::beSigned(Bureaucrat &B)
{
	if (B.getGrade() > _gradeToSign)
	{
		std::cout << B << " couldn't sign " << getName() << " form because required grade to sign is " << getGradeToSign() << std::endl;
		throw GradeTooLowException();
	}
	std::cout << B.getName() << " signed " << getName() << " form" << std::endl; 
	_isSigned = true;
}

std::ostream &operator<<(std::ostream &os, AForm &F)
{
	os << F.getName() << " form, grade to sign: " << F.getGradeToSign() 
		<< ", grade to execute: " << F.getGradeToExec() << ". Signatures encountered: " << F.getIsSigned() << std::endl;
	return (os);
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
	{
		throw FormNotSigned();
	}
	if (executor.getGrade() > _gradeToExec)
	{
		std::cout << executor.getName() << " grade " << executor.getGrade() << " couldn't execute " << getName() 
		<< " form because required grade to execute is " << getGradeToExec() << std::endl;
		throw GradeTooLowException();
	}
}

const std::string	AForm::getName() const				{	return (_name);			}
const std::string	AForm::getTarget() const			{	return (_target);		}
bool				AForm::getIsSigned() const			{	return (_isSigned);		}
int					AForm::getGradeToSign() const		{	return (_gradeToSign);	}
int					AForm::getGradeToExec() const		{	return (_gradeToExec);	}
