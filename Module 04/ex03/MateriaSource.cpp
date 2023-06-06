/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:53 by mal-guna          #+#    #+#             */
/*   Updated: 2023/06/06 17:08:48 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// ----------------------------- Constructors ------------------------------ //
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		learned[i] = NULL;

	std::cout << "MateriaSource Default Constructor Called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& c) 
{
	*this = c;
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4 ; i++)
	{
		if(learned[i])
			delete learned[i];
	}
	std::cout <<  "MateriaSource Destructor Called" << std::endl;
}
// ------------------------------- Operators ------------------------------- //

MateriaSource & MateriaSource::operator=(const MateriaSource& c)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (learned[i])
			delete learned[i];
		if (c.learned[i] == NULL)
			learned[i] = NULL;
		else
			learned[i] = c.learned[i]->clone();
	}
	std::cout << "MateriaSource Copy Assignment Operator Called" << std::endl;
	return (*this);
}

// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Methods ------------------------------- //
void MateriaSource::learnMateria(AMateria* toLearn)
{
	if (toLearn == NULL)
	{
		std::cout << "MateriaSource: Couldn't learn empty Materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (learned[i] == NULL)
		{
			learned[i] = toLearn;
			std::cout << "Learned " << toLearn->getType() << "at slot no " << i << std::endl;
			return ;
		}
	}
	std::cout << "Slots are FULL .." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learned[i] == NULL)
			continue ;
		if (learned[i]->getType() == type)
		{
			return (learned[i]->clone());
		}
	}
	std::cout << "Unknown type" << std::endl;
	return (NULL);
}