/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:58:01 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 17:09:14 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():count_ground(0), name("No Name")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 1000; i++)
		ground[i] = NULL;

	std::cout << "Character Default Constructor Called" << std::endl;

}

Character::Character(const Character& c) 
{
	*this = c;
	std::cout << "Character Copy Constructor Called" << std::endl;
}

Character::Character(std::string name):count_ground(0), name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 1000; i++)
		ground[i] = NULL;

	std::cout << "Character String Constructor Called" << std::endl;
	this->name = name;
}

// ------------------------------ Destructor ------------------------------- //
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	for (int i = 0; i < 1000; i++)
	{
		if (ground[i] != NULL)
			delete ground[i];
	}
	std::cout << "Character Destructor Called" << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Character & Character::operator=(const Character& c)
{
	name = c.getName();
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
		
		if (c.getInv(i) == NULL)
			inventory[i] = NULL;
		else
			inventory[i] = c.getInv(i)->clone();
		
	}
	for (int i = 0; i < 1000; i++)
	{
		if (ground[i] != NULL)
			delete ground[i];
		
		if (c.getGnd(i) == NULL)
			ground[i] = NULL;
		else
			ground[i] = c.getGnd(i)->clone();
		
	}
	std::cout << "Character Copy Assginment Operator Called" << std::endl;

	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string const & Character::getName() const
{
	return (name);
}

AMateria const	*Character::getInv(int idx) const
{
	if (idx >= 0 && idx < 4)
		return (inventory[idx]);
	return (NULL);
}
AMateria const	*Character::getGnd(int idx) const
{
	if (idx >= 0 && idx < 1000)
		return (ground[idx]);
	return (NULL);
}

// --------------------------------- Methods ------------------------------- //

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Error, Empty Materia" << std::endl;
		return ;
	}
	for(int i = 0; i < 4 ; i++)
	{
		if(!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory Full !" << std::endl;
	
}
void Character::unequip(int idx)
{
	if(idx >= 4 || idx < 0)
		std::cout << "Wrong Index" << std::endl;
	else if(count_ground >= 1000)
	{
		std::cout << "Ground is already full, Cant unequip .." << std::endl;
	}
	else if(!inventory[idx])
		std::cout << "Index " << idx << " Is empty.. " << std::endl;
	else
	{
		ground[count_ground] = inventory[idx];
		count_ground++;
		inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
		std::cout << "Wrong Index" << std::endl;
	else if (!inventory[idx])
		std::cout << "Index " << idx << " Is empty.. " << std::endl;
	else
	{
		inventory[idx]->use(target);
	}
}