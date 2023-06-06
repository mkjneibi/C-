/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:13:38 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 13:23:38 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->Name = "Default FragTrap";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->Name << " is created with "<< std::endl;
    std::cout << this->hit_points << " hit points"<< std::endl;
    std::cout << this->energy_points << " energy points"<< std::endl;
    std::cout << this->attack_damage << " attack damage"<< std::endl;
    std::cout << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destrucotr called" << std::endl;
}

FragTrap::FragTrap(std::string n)
{
    this->Name = n;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->Name << " is created with "<< std::endl;
    std::cout << this->hit_points << " hit points"<< std::endl;
    std::cout << this->energy_points << " energy points"<< std::endl;
    std::cout << this->attack_damage << " attack damage\n"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "Copy Constructor" << std::endl;
    *this = copy;
}

FragTrap & FragTrap::operator = (const FragTrap &copy)
{
    std::cout << "Copy Assignment Operator" << std::endl;
    if (this == &copy)
        return *this;
    Name = copy.Name;
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
    return(*this);
}

void FragTrap::attack(const std::string &target)
{
    if (this->hit_points > 0 && this->energy_points > 0)
    {
        std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " 
            << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
    {
        std::cout << "FragTrap " << this->Name << " has no energy points to attack" << std::endl;
    }
    std::cout << "FragTrap " << this->Name << " has " << this->energy_points << " energy points left " << std::endl;
    std::cout << "FragTrap " << this->Name << " has " << this->hit_points << " hit points left " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " gives high fives to all" << std::endl;
}
