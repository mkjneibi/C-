/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:25:47 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 13:20:56 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->Name = "Default ScavTrap";
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

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &copy)
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

void ScavTrap::attack(const std::string &target)
{
    if (this->hit_points > 0 && this->energy_points > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ScavTrap " << this->Name << " has no energy points to attack" << std::endl;
    std::cout << "ScavTrap " << this->Name << " has " << this->energy_points << " energy points left " << std::endl;
    std::cout << "ScavTrap " << this->Name << " has " << this->hit_points << " hit points left " << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->Name << " is now in Gatekeeper mode" << std::endl;
}
