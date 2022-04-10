
#pragma once

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& cpy);
		int	getRawBits() const;
		void	setRawBits( int const raw);
	private:
		int					value;
		static const int	bits = 8;
};