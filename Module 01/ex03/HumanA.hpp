/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:32:38 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/27 15:03:57 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private :
    std::string h_name;
    Weapon  &weapon_type;

    public :
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack();
    void    setWeapon(Weapon weapon);
};
