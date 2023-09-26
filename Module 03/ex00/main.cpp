/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:29 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/07 15:13:35 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    std::cout << std::endl;
    a.attack("Enemy");
    a.takeDamage(10);
    a.beRepaired(10);
    std::cout << std::endl;
    return (0);
}