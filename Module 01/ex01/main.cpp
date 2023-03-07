/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:30:40 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/26 12:47:10 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    size_t N = 5;
    size_t i = 0;
    Zombie *zombiz = zombieHorde(N, "zombi");

    while (i < N)
    {
        zombiz[i].announce();
        i++;
    }
    delete [] (zombiz);
}