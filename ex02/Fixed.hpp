#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <string>

class	Fixed
{
	public:
		/*		constructors			*/
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &other);
		
		/*		destructor				*/
		~Fixed();

		/*		overload operators 		*/
		Fixed& 	operator=(const Fixed &other);
		Fixed&	operator>(const Fixed &other);
		Fixed&	operator<(const Fixed &other);
		Fixed&	operator>=(const Fixed &other);
		Fixed&	operator<=(const Fixed &other);
		Fixed&	operator==(const Fixed &other);
		Fixed&	operator!=(const Fixed &other);

		Fixed&	operator+(const Fixed &other);
		Fixed&	operator-(const Fixed &other);
		Fixed&	operator*(const Fixed &other);
		Fixed&	operator/(const Fixed &other);

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		/*	overloaded member functions		*/
		static Fixed&	min(Fixed &obj1, Fixed &obj2);
		static Fixed&	min(const Fixed &obj1, const Fixed &obj2);
		static Fixed&	max(Fixed &obj1, Fixed &obj2);
		static Fixed&	max(const Fixed &obj1, const Fixed &obj2);

		/*		member functions			*/
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_value;			/* not a "real" value. a scaled value! that represents a value passed */ 
		static const int	_bits = 8;	 	/* bits can also be interpreted as a scale */
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif
