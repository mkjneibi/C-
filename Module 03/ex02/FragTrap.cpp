/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:13:38 by mealjnei          #+#    #+#             */
/*   Updated: 2023/04/19 08:18:35 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->Name = "FragTrap";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->Name << " is created" << std::endl;
}

FragTrap::~FragTrap()
{
}

FragTrap::FragTrap(std::string n)
{
    this->Name = n;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->Name << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

FragTrap & FragTrap::operator = (const FragTrap &copy)
{
    if (this != &copy)
        *this = copy;
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
        std::cout << "FragTrap " << this->Name << " has no energy points to attack" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        std::cout << "FragTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
        this->hit_points -= amount;
        if (this->hit_points < 0)
            this->hit_points = 0;
    }
    else
        std::cout << "FragTrap " << this->Name << " has no hit points to take damage" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        std::cout << "FragTrap " << this->Name << " is repaired by " << amount << " points!" << std::endl;
        this->hit_points += amount;
        if (this->hit_points > 100)
            this->hit_points = 100;
    }
    else
        std::cout << "FragTrap " << this->Name << " has no hit points to be repaired" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " gives high fives to all" << std::endl;
}
