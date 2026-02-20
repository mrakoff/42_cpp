#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iomanip>
#include <iostream>

class Bureaucrat
{
	public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	std::string const	getName();
	unsigned int		getGrade();

	void	gradeUp();
	void	gradeDown();

	// overload operators
	// Bureaucrat &operator<<();

	private:

	std::string const	_name;
	unsigned int		_grade;
};

#endif