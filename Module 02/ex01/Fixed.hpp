/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:35:00 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/23 16:33:29 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
	private :
	int					number;
	int static const	f_bits = 8;

	public :
	Fixed();
	Fixed(const Fixed &copy);
	Fixed & operator = (const Fixed &copy);
	Fixed(float const value);
	Fixed(int const value);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &operator << (std::ostream &output, Fixed const &f);

#endif