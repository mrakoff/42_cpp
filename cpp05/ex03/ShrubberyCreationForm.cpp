/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:57:37 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/18 16:42:26 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default")
{
	std::cout << "\033[32mDefault constructor for ShrubberyCreationForm called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "\033[32mConstructor for ShrubberyCreationForm called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) 
	: AForm("ShrubberyCreationForm", other.getGradeToSign(), other.getGradeToExec(), other.getTarget())
{
	std::cout << "\033[32mCopy constructor for ShrubberyCreationForm called\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[31mDestructor for ShrubberyCreationForm called\033[0m" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream os(getTarget() + "_shrubbery");
	
	os 
	<< "             .'.   " << std::endl
	<< "            / . \\ " << std::endl
	<< "           |  |. | ,-'-." << std::endl
	<< "      ,-'-.\\ \\|  /(  .  )" << std::endl
	<< "     /  .  \\  |, (  \\|   )" << std::endl
	<< "    |  .|/  |_|_(    |/   )" << std::endl
	<< "     \\._|,_/  |  '--.|..-'" << std::endl
	<< "  ______|_____|______|______ " << std::endl
	<< "------------------------------";
	
	os.close();
}
