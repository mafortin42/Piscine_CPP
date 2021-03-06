/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:38:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 10:58:15 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed(const int value);
		Fixed(const float value);
		Fixed&	operator=(const Fixed&);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
	private:
		int			value;
		static const int	bits = 8;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& value);
