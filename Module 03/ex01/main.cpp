/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/07 13:45:47 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("Alex");
    std::cout << std::endl;
    c.attack("Enemy2");
    c.takeDamage(20);
    c.beRepaired(50);
    c.guardGate();
    std::cout << std::endl;
    return (0);
}