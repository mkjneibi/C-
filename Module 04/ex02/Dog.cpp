/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:34:08 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 16:48:30 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    this->_dbrain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_dbrain;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
        delete this->_dbrain;
        this->_dbrain = new Brain(*copy._dbrain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << " Woof Woof" << std::endl;
}

std::string Dog::getType() const
{
    return (this->_type);
}

Brain* Dog::get_brain() const
{
	return this->_dbrain;
}