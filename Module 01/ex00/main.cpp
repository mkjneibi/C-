/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:08 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/12 23:27:18 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie *deadly = newZombie("Alhay"); //create new zombie
    deadly->announce(); // Call the announce() method on the Zombie instance
    randomChump("Omar"); //create new zombie and set annouce to it
    delete (deadly); // Delete the Zombie instance created using newZombie
}