/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/05 16:22:15 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Jhon");
    ClapTrap b("Enemy");
    std::cout << std::endl;
    a.attack("Enemy");
    b.attack("Jhon");
    std::cout << std::endl;
    a.takeDamage(10);
    b.takeDamage(10);
    std::cout << std::endl;
    a.beRepaired(10);
    b.beRepaired(10);
    std::cout << std::endl;

    ScavTrap c("Alex");
    ScavTrap d("Enemy2");
    std::cout << std::endl;
    c.attack("Enemy2");
    d.attack("Alex");
    std::cout << std::endl;
    c.takeDamage(10);
    d.takeDamage(10);
    std::cout << std::endl;
    c.beRepaired(10);
    d.beRepaired(10);
    std::cout << std::endl;

    return (0);
}