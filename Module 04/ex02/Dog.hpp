/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:34:16 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 16:48:04 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    protected:
    Brain *_dbrain;

    public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    void makeSound() const;
    std::string getType() const;
    Brain *get_brain() const;
};

#endif