/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:24:40 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/05 16:00:40 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string cmd;
    Phonebook   book;

    book.welcome_msg();
    while (1)
    {
        std::cout << "What command you would like to use (ADD / SEARCH / EXIT)" << std::endl;
        std::cin >> cmd;
        if (std::cin.fail())
            return (1);
        if (cmd == "ADD")
            book.add_contact();
        else if (cmd == "SEARCH")
            book.search_contact();
        else if (cmd == "EXIT")
            std::exit(0);
    }
}