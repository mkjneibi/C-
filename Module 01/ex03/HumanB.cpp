/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:32:40 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/27 15:14:38 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) : h_name(name), weapon_type(weapon)
{
    std::cout << "HumanB " << name << "has been created " << std::endl;
    std::cout << weapon.getType() << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->h_name << "has been destroyed" << std::endl;
}

void    HumanB::attack()
{
    std::cout << this->h_name << "Attakcs with his " << this->weapon_type.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon_type = weapon;
}
