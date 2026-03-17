#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
	public:

	/*		constructors		*/
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);

	/*		overload operators	*/
	/*	using delete since we have const name,
		which should not be ever changed after construction	*/
	Bureaucrat &operator=(Bureaucrat &other) = delete;
	
	/*		destructor			*/
	~Bureaucrat();
	
	/*		exceptions			*/
	class GradeTooHighException : public std::exception
	{
		const char* what() const noexcept override {
        	return "Grade too high!";
    	}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const noexcept override {
       		return "Grade too low!";
    	}
	};

	const std::string	getName();
	int					getGrade();

	void	gradeUp();
	void	gradeDown();

	void	signForm(Form &F);

	private:

	const std::string	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &Bureaucrat);

#endif