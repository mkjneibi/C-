/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:34:37 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 16:41:19 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_cbrain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_cbrain;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
        delete this->_cbrain;
        this->_cbrain = new Brain(*copy._cbrain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << " Meow" << std::endl;
}

std::string Cat::getType() const
{
    return (this->_type);
}

Brain* Cat::get_brain() const
{
	return (this->_cbrain);
}
