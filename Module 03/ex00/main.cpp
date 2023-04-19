/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/04/19 08:06:36 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("ClapTrap");
    ClapTrap b("ClapTrap");
    ClapTrap c("ClapTrap");

    a.attack("ClapTrap");
    b.attack("ClapTrap");
    c.attack("ClapTrap");

    a.takeDamage(10);
    b.takeDamage(10);
    c.takeDamage(10);

    a.beRepaired(10);
    b.beRepaired(10);
    c.beRepaired(10);
    return (0);
}