/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:35:00 by mealjnei          #+#    #+#             */
/*   Updated: 2023/04/17 16:31:15 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private :
	int					number;
	static const int	f_bits = 8;

	public :
	Fixed();
	~Fixed();
	Fixed	&operator=(Fixed const &toCopy);
	Fixed(const Fixed &c);

	Fixed(int const value);
	Fixed(float const value);

	float toFloat(void) const;
	int toInt(void) const;

	int			getRawBits(void) const;
	void		setRawBits(int const raw);

	static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

	/* 6 comprisons [>, <, <=, >=, ==, !=] */
	bool    operator>(const Fixed &gre) const;
    bool    operator<(const Fixed &sma) const;
    bool    operator>=(const Fixed &gr_e) const;
    bool    operator<=(const Fixed &sm_e) const;
    bool    operator==(const Fixed &equ) const;
    bool    operator!=(const Fixed &no_e) const;

	/* 4 arthimatic [+, -, * /] */
	Fixed   operator+(const Fixed &plus) const;
    Fixed   operator-(const Fixed &mins) const;
    Fixed   operator*(const Fixed &multp) const;
    Fixed   operator/(const Fixed &divid) const;

	/* 4 increment and decrement [++x, x++, --x, x--] */
	Fixed	&operator++(void);
    Fixed   operator++(int);
    Fixed	&operator--(void);
    Fixed   operator--(int);
};

//to output a Fixed object to an output stream
std::ostream &operator << (std::ostream &output, Fixed const &f);

#endif