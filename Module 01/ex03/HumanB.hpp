/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:32:42 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/27 15:04:30 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private :
    std::string h_name;
    Weapon  &weapon_type;

    public :
    HumanB(std::string name, Weapon &weapon);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon weapon);
};
