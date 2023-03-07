/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:20:11 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/05 16:10:06 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string Contact::_input(std::string str) const
{
    std::string input = "";
    while (true)
    {
        std::cout << str << std::flush;
        if (std::getline(std::cin, input) && !input.empty())
            break;
        else if (std::cin.fail())
			exit(0);
        std::cin.clear();
        std::cout << "Invalid input; please try again." << std::endl;
    }
    return (input);
}

void Contact::init_contact(void)
{
    std::cin.ignore();
    this->f_name = this->_input("First name: ");
    this->l_name = this->_input("Last name: ");
    this->nickname = this->_input("Nickname: ");
    this->phone_num = this->_input("Phone number: ");
    this->darksecert = this->_input("Darkest secret: ");
    std::cout << std::endl;
}

std::string Contact::get_len(std::string str) const
{
    return (str.length() > 10) ? str.substr(0, 9) + "." : str;
}

void    Contact::contact_index(int x)
{
    this->cont_index = x;
}

void Contact::printContactInfo(int index, bool fullDisplay) const
{
    if (this->f_name.empty() || this->l_name.empty() || this->nickname.empty())
        return;
    std::cout << "----------------------------------" << std::endl;
    std::cout << " || " << index;
    std::cout << " || " << this->get_len(this->f_name);
    std::cout << " || " << this->get_len(this->l_name);
    std::cout << " || " << this->get_len(this->nickname) << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    if (fullDisplay)
    {
        std::cout << std::endl;
        std::cout << "You are looking for CONTACT number 📱📞 : " << cont_index << std::endl;
        std::cout << "First Name:\t" << this->f_name << std::endl;
        std::cout << "Last Name:\t" << this->l_name << std::endl;
        std::cout << "Nickname:\t" << this->nickname << std::endl;
        std::cout << "Phone number:\t" << this->phone_num << std::endl;
        std::cout << "Dark Secert:\t" << this->darksecert << std::endl;
        std::cout << std::endl;
    }
}
