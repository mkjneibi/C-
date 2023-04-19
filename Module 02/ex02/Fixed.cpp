/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:34:52 by mealjnei          #+#    #+#             */
/*   Updated: 2023/04/17 16:38:04 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &toCopy)
{
    if (this != &toCopy)
        this->number = toCopy.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &c)
{
	*this = c;
}

// Fixed::Fixed(int const value)
// {
//     this->number = value * (1 << this->f_bits);
// }
Fixed::Fixed(const int c)
{
	this->number = c << this->f_bits;
}

Fixed::Fixed(const float f_v)
{
	this->number = std::roundf(f_v * (1 << this->f_bits));
}


//Set and Get used to get and set the raw value of the fixed point number

int Fixed::getRawBits(void) const
{
	return this->number;
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->number / (1 << this->f_bits);
}

int Fixed::toInt(void) const
{
	return (this->number >> this->f_bits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &output, Fixed const &f)
{
    output << f.toFloat();
	return (output);
}

/* -------------------- 6 comprisons -------------------- */
/* ----- to compare two Fixed objects ----- */

bool Fixed::operator>(const Fixed &gre) const
{
    if (this->number > gre.number)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &sma) const
{
    if (this->number < sma.number)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &gr_e) const
{
    if (this->number >= gr_e.number)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &sm_e) const
{
    if (this->number <= sm_e.number)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &equ) const
{
    if (this->number == equ.number)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &no_e) const
{
    if (this->number != no_e.number)
        return true;
    return false;
}

/* -------------------- 4 arthimatic -------------------- */
/* ---- perform arithmetic operations on two Fixed objects ---- */

Fixed Fixed::operator+(const Fixed &plus) const
{
    return this->toFloat() + plus.toFloat();
}

Fixed Fixed::operator-(const Fixed &mins) const
{
    return this->toFloat() - mins.toFloat();
}

Fixed Fixed::operator*(const Fixed &multp) const
{
    return this->toFloat() * multp.toFloat();
}

Fixed Fixed::operator/(const Fixed &divid) const
{
    return this->toFloat() / divid.toFloat();
}

/* -------------------- 4 increment and decrement -------------------- */

//operator is applied to the object before the value is used.
Fixed &Fixed::operator++(void)
{
    this->number++;
	return(*this);
}

//operator is applied after the value is used
Fixed Fixed::operator++(int)
{
    Fixed f(*this);
    this->number++;
    return f;
}

//operator is applied to the object before the value is used.
Fixed &Fixed::operator--(void)
{
    this->number--;
	return(*this);
}

//operator is applied after the value is used
Fixed Fixed::operator--(int)
{
    Fixed f(*this);
    this->number--;
    return f;
}
