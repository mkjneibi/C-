/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:12:49 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/05 15:30:09 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private :
	int					number;
	static const int	f_bits = 8;

	public :
	Fixed(); //default constructor
	Fixed(const Fixed &copy); //copy default constructors
	Fixed & operator = (const Fixed &copy); //assignemt operator
	// '&'operator -> "address-of" operator returns a pointer to the memory location of an object.
	~Fixed(); //destructor

	int		getRawBits(void) const; //return the raw value of the fixed-point value
	void	setRawBits(int const raw); //sets the raw value of the fixed-point number.
};

#endif