/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:00:23 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/28 18:09:52 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
}

Harl::~Harl()
{
}


void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
        "I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
                "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for"
        "years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string c_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    pointer c_ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int x = 0;
    while (x <= 3)
    {
        if (c_levels[x] == level)
        {
            (this->*c_ptr[x])();
            break;
        }
        x++;
    }
}