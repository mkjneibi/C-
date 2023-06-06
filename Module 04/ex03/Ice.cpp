/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:00:33 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 17:01:16 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	type = "ice";
	std::cout  << "Ice Constructor Called" << std::endl;
}

Ice::Ice(const Ice& c):AMateria("ice")
{
	*this = c;
	std::cout  << "Ice Copy Constructor Called" << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Ice & Ice::operator=(const Ice& c)
{
	type = c.getType();
	std::cout  << "Ice Copy Assignment Operator Called" << std::endl;
	return *this;
}

Ice*	Ice::clone() const
{
	Ice *n = new Ice();
	return n;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}