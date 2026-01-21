#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <string>

class	Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);

		~Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);

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
