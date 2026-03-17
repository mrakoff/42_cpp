#ifndef FORM_H
#define FORM_H

#include <iomanip>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	public:

	/*		constructors		*/
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(Form &other);

	/*		overload operators	*/
	/*	using delete since we have const name,
		which should not be ever changed after construction	*/
	Form &operator=(Form &other) = delete;

	/*		destructor			*/
	~Form();

	void				beSigned(Bureaucrat &B);
	const std::string	getName();
	bool				getIsSigned();
	int					getGradeToSign() const;
	int					getGradeToExec() const;

	/*		exceptions			*/
	class GradeTooHighException : public std::exception
	{
		const char* what() const noexcept override {
        	return "Form grade too high!";
    	}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const noexcept override {
       		return "Form grade too low!";
    	}
	};

	private:

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExec;
};

std::ostream &operator<<(std::ostream &os, Form &F);

#endif