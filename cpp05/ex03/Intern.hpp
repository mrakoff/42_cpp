#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:

	Intern();
	Intern(const Intern &other) = delete;
	Intern &operator=(Intern &other) = delete;
	~Intern();

	class FormNotFound : public std::exception
	{
		const char* what() const noexcept override {
        	return "Form not found.";
    	}
	};

	enum class formCode 
	{
		ShrubberyCreationForm,
		RobotomyRequestForm, 
		PresidentialPardonForm,
	};

	AForm	*makeForm(const std::string &name, const std::string &target);
};

#endif