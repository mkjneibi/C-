/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:23:35 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 16:18:53 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
    std::string _type;

    public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    virtual void makeSound() const;
    std::string getType() const;
};

#endif