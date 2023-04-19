/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:34:52 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/23 16:33:39 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fixed-point number, meaning a number with a
//fixed number of decimal places.

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
    std::cout << "Copy Assignement Operator called" << std::endl;
    if (this != &copy)
    {
        this->number = copy.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->number;
}

void Fixed::setRawBits(int const raw)
{
    this->number = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = value << this->f_bits;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf(value * (1 << this->f_bits));
}

//This function converts a Fixed object to a floating-point number.
float Fixed::toFloat(void) const
{
    return ((double)this->number / (double)(1 << this->f_bits));
}

//converts a Fixed object to an integer
int Fixed::toInt(void) const
{
    return (this->number >> this->f_bits);
}

std::ostream &operator<<(std::ostream &output, Fixed const &f)
{
    output << f.toFloat();
    return (output);
}