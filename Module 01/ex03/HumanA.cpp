/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:52:05 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/27 15:14:51 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : h_name(name), weapon_type(weapon)
{
    std::cout << "HumanA " << name << "has been created " << std::endl;
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->h_name << "has been destroyed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->h_name << "Attakcs with his " << this->weapon_type.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->weapon_type = weapon;
}