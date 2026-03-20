#ifndef AFORM_H
#define AFORM_H

#include <iomanip>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	public:

	/*		constructors		*/
	AForm();
	AForm(std::string name, int signGrade, int execGrade, std::string target);
	AForm(AForm &other);

	/*		overload operators	*/
	/*	using delete since we have const name,
		which should not be ever changed after construction	*/
	AForm &operator=(AForm &other) = delete;

	/*		destructor			*/
	~AForm();

	void				beSigned(Bureaucrat &B);
	const std::string	getName() const;
	const std::string	getTarget() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExec() const;


	virtual void		execute(Bureaucrat const &executor) const;

	/*		exceptions			*/
	class GradeTooHighException : public std::exception
	{
		const char* what() const noexcept override {
        	return "Grade to interact with the form is too high!";
    	}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const noexcept override {
       		return "Grade to interact with the form is too low!";
    	}
	};

	class FormNotSigned : public std::exception
	{
		const char* what() const noexcept override {
        	return "Form isn't signed! Sign before executing!";
    	}
	};

	private:

	const std::string	_name;
	const std::string	_target;

	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExec;

};

std::ostream &operator<<(std::ostream &os, AForm &F);

#endif