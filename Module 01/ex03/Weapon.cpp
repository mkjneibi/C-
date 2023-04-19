/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:32:48 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/13 00:17:01 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type) : type(w_type)
{
}

Weapon::~Weapon()
{
}

//return the value of the private member variable type of the Weapon
std::string Weapon::getType() const
{
    return (this->type);
}

//sets the value of the private member variable type of the Weapon object
void    Weapon::setType(std::string type)
{
    this->type = type;
}