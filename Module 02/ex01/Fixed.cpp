/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:34:52 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/06 22:07:23 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator << (const Fixed &copy)
{
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
}

void Fixed::setRawBits(int raw)
{
}

float Fixed::toFloat(void) const
{
    return 0.0f;
}

int Fixed::toInt(void) const
{
    return 0;
}
