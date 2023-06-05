/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:25:39 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/05 16:47:50 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string n);
    ScavTrap(const ScavTrap &copy);
    ScavTrap & operator = (const ScavTrap &copy);
    void attack(const std::string &target);
    void guardGate();
};
#endif