/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:35 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 13:21:52 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout <<"ClapTrap default constructor called" << std::endl;
    this->Name = "default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
    std::cout << n << " ClapTrap constructor called" << std::endl;
    this->Name = n;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &copy)
{
    std::cout << "Copy Assignement Operator" << std::endl;
    if (this == &copy)
        return *this;
    Name = copy.Name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
    return(*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hit_points > 0 && this->energy_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target <<
            ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " has no energy points to attack" << std::endl;
    std::cout << "ClapTrap " << this->Name << " has " << this->energy_points << " energy points left " << std::endl;
    std::cout << "ClapTrap " << this->Name << " has " << this->hit_points << " hit points left " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        this->hit_points -= amount;
        std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
        if (this->hit_points)
            std::cout << "ClapTrap " << this->Name << " has " << this->hit_points << " hit points left!" << std::endl;
        else
            std::cout << "ClapTrap " << this->Name << " has no hit points left!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " has no hit points to take damage" << std::endl;
    if (this->hit_points < 0)
        this->hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points > 0)
    {
        this->hit_points += amount;
        this->energy_points--;
        std::cout << "ClapTrap " << this->Name << " is repaired by " << amount << " points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->Name << " has no energy points to be repaired" << std::endl;
    std::cout << "ClapTrap " << this->Name << " has " << this->energy_points << " energy points left " << std::endl;
    std::cout << "ClapTrap " << this->Name << " has " << this->hit_points << " hit points left " << std::endl;
}