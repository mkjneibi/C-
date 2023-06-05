/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/04 15:35:05 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("ScavTrap1");
    ScavTrap b("ScavTrap2");
    ScavTrap c("ScavTrap3");

    std::cout << std::endl;

    a.attack("ScavTrap2");
    b.attack("ScavTrap3");
    c.attack("ScavTrap1");

    std::cout << std::endl;

    a.takeDamage(10);
    b.takeDamage(10);
    c.takeDamage(10);

    std::cout << std::endl;

    a.beRepaired(10);
    b.beRepaired(10);
    c.beRepaired(10);

    std::cout << std::endl;

    return (0);
}