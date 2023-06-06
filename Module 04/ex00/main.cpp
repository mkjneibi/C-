/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:23:39 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 15:54:01 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << std::endl;

    std::cout << "Animal type: " << meta->getType() << std::endl;
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;
    std::cout << "WrongAnimal type: " << wrong->getType() << std::endl;
    std::cout << "WrongCat type: " << wrongcat->getType() << std::endl;
    std::cout << std::endl;

    i->makeSound();// cat
    j->makeSound();// dog
    meta->makeSound();// animal
    wrong->makeSound();// wrong animal
    wrongcat->makeSound();// wrong cat
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrong;
    delete wrongcat;
    return (0);
}