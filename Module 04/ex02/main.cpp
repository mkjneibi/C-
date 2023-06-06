/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:23:39 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 16:53:02 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    /*
		in the event that we uncomment the following code below it should
		display some error messages during compilation since we are trying to
		instantiate an object from a class with a pure virtual function, also
		known as an abstract class
	*/
    // const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
	std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;
	i->makeSound();// cat
    j->makeSound();// dog
    delete j;
    delete i;
    return (0);
}
