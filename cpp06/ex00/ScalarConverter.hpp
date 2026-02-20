#ifndef SCALAR_H
#define SCALAR_H

#include <iomanip>
#include <iostream>

class	ScalarConverter
{
	public:

	ScalarConverter();
	virtual ~ScalarConverter();

	static void	convert(std::string literal);

};

#endif