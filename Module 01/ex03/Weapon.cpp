/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:32:48 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/27 15:06:47 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type) : type(w_type)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}