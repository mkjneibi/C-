/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:43 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/05 16:46:33 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
    protected:
    std::string Name;
    int hit_points;
    int energy_points;
    int attack_damage;

    public :
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string n);
    ClapTrap(const ClapTrap &copy);
    ClapTrap & operator = (const ClapTrap &copy);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif