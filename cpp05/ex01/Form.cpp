/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:24:35 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/13 19:09:02 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Empty"), _isSigned(false), _gradeToSign(42), _gradeToExec(42)
{
	std::cout << "\033[32mDefault constructor for Form called\033[0m" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _gradeToSign(signGrade), _gradeToExec(execGrade)
{
	std::cout << "\033[32mConstructor for Form called\033[0m" << std::endl;
}

Form::Form(Form &other) : _name(other._name), _isSigned(false), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
	std::cout << "\033[32mCopy constructor for Form called\033[0m" << std::endl;
}

Form::~Form()
{
	std::cout << "\033[31mDestructor for Form called\033[0m" << std::endl;
}

void	Form::beSigned(Bureaucrat &B)
{
	if (B.getGrade() > _gradeToSign)
	{
		std::cout << B << " couldn't sign " << this->getName() << " form because required grade to sign is " << this->getGradeToSign() << std::endl;
		throw GradeTooLowException();
	}
	std::cout << B.getName() << " signed " << this->getName() << " form" << std::endl; 
	_isSigned = true;
}

std::ostream &operator<<(std::ostream &os, Form &F)
{
	os << F.getName() << " form, grade to sign: " << F.getGradeToSign() 
		<< ", grade to execute: " << F.getGradeToExec() << ". Signatures encountered: " << F.getIsSigned() << std::endl;
	return (os);
}

const std::string	Form::getName()					{	return (_name);			}
bool				Form::getIsSigned()				{	return (_isSigned);		}
int					Form::getGradeToSign() const	{	return (_gradeToSign);	}	
int					Form::getGradeToExec() const	{	return (_gradeToExec);	}
