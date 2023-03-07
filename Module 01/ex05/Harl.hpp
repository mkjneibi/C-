/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:00:27 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/28 17:57:14 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private :
    void debug();
    void info();
    void warning();
    void error();

    public :
    Harl();
    ~Harl();
    void complain(std::string level);
    typedef void (Harl::*pointer)(void);
    //type "pointer" is a pointer to a member function of a class named
    //"Harl" that takes no arguments and returns void.
    //"(Harl::*)" is the syntax used to indicate that this is a
    //pointer to a member function of the class "Harl".
};

#endif