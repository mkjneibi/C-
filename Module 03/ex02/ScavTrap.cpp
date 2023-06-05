/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:25:47 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/04 15:28:23 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->Name = "ScavTrap";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << this->Name << " is created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n)
{
    this->Name = n;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << this->Name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return(*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->hit_points > 0 && this->energy_points > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ScavTrap " << this->Name << " has no energy points to attack" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        std::cout << "ScavTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
        this->hit_points -= amount;
        if (this->hit_points < 0)
            this->hit_points = 0;
    }
    else
        std::cout << "ScavTrap " << this->Name << " has no hit points to take damage" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        std::cout << "ScavTrap " << this->Name << " is repaired by " << amount << " points!" << std::endl;
        this->hit_points += amount;
        if (this->hit_points > 100)
            this->hit_points = 100;
    }
    else
        std::cout << "ScavTrap " << this->Name << " has no hit points to be repaired" << std::endl;
}
