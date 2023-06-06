/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:59:22 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 17:09:01 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
Cure::Cure():AMateria("cure")
{
	std::cout << "Cure Constructor Called" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& c):AMateria("cure")
{
	*this = c;
	std::cout << "Cure Copy Constructor Called" << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Cure::~Cure()
{
	std::cout << "Cure Destrcutor Called" << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Cure & Cure::operator=(const Cure& c)
{
	type = c.getType();
	std::cout << "Cure Copy Assginemnt Operator Called" << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

Cure*	Cure::clone() const
{
	Cure *n = new Cure();
	return n;
}
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}