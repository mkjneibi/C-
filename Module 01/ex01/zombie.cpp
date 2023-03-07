/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zompie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:24:50 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/26 12:09:28 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie()
{
    std::string z_name;
    this->name = z_name;
	std::cout << "Zombie object " << this->name << " is created" << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << "Zombie object " << this->name << " is destroyed." << std::endl;
}

void    Zombie::add_name(std::string z_name)
{
    this->name = z_name;
}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}