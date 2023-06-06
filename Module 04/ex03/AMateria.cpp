/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:56:28 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 16:56:50 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "Materia type: " << type << " constructed" << std::endl;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destrcutor Called" << std::endl;
	return ;
}

std::string const	&AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "*Default use " << " on " << target.getName() << " *" << std::endl;
}