/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:10 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/26 12:09:05 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private :
    std::string  name;

    public :
    Zombie();
    ~Zombie();
    void    add_name(std::string z_name);
    void    announce();
};

Zombie  *zombieHorde(int N, std::string z_name);

#endif
