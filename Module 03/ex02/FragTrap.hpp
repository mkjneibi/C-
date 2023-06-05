/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:13:47 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/05 16:47:42 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
    FragTrap();
    ~FragTrap();
    FragTrap(std::string n);
    FragTrap(const FragTrap &copy);
    FragTrap & operator = (const FragTrap &copy);
    void attack(const std::string &target);
    void highFivesGuys(void);
};

#endif