/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:08:21 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/05 16:05:36 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){}

Phonebook::~Phonebook(){}

void	Phonebook::welcome_msg() const
{
	std::cout << "🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊" << std::endl;
	std::cout << "Welcome to Your Awesome PhoneBook 📞" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------> USAGE <---------------" << std::endl;
	std::cout << "ADD : to save a new contact" << std::endl;
	std::cout << "SEARCH : to display a specific contactt" << std::endl;
	std::cout << "EXIT : quit phonebook" << std::endl;
	std::cout << std::endl;
}

void Phonebook::add_contact()
{
	static int i;
	static int index;

	index = i % 8;
	contacts[index].init_contact();
	contacts[index].contact_index(index);
	i = (i + 1) % 8;
}

int Phonebook::cont_input() const
{
	int input = -1;
	bool valid = false;
	while (!valid)
	{
		std::cout << "Please enter the contact index: ";
		std::cin >> input;
		if (std::cin.fail())
			exit(0);
		else if (input < 0 || input > 8)
			std::cout << "Invalid index; please re-enter." << std::endl;
		else
			valid = true;
	}
	return (input);
}

void Phonebook::search_contact() const
{
	int i = this->cont_input();
	this->contacts[i].printContactInfo(i, 1);
}

