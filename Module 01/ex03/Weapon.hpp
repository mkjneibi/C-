/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:32:50 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/27 15:10:44 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>


class Weapon
{
    private :
    std::string type;

    public :
    Weapon(std::string w_type);
    ~Weapon();
    std::string getType() const;
    void    setType(std::string type);
};

#endif