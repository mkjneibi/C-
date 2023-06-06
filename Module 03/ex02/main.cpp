/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 13:07:02 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    FragTrap e("Sam");
    FragTrap f("Enemy3");
    std::cout << std::endl;
    e.attack("Enemy3");
    f.attack("Sam");
    std::cout << std::endl;
    e.takeDamage(10);
    f.takeDamage(10);
    std::cout << std::endl;
    e.beRepaired(10);
    f.beRepaired(10);
    std::cout << std::endl;
    return (0);
}