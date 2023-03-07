/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:25:40 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/26 12:04:59 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie  *zombieHorde(int N, std::string z_name)
{
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; ++i)
        zombie[i].add_name(z_name);
    return (zombie);
}