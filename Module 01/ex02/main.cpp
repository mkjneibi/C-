/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:14:10 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/26 14:30:26 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String address : " << &str << std::endl;
    std::cout << "Memory address ptr : " << stringPTR << std::endl;
    std::cout << "Refrence of str : " << &stringREF << std::endl;

    std::cout << "Value of str : " << str << std::endl;
    std::cout << "Value of ptr : " << *stringPTR << std::endl;
    std::cout << "Value of ref : " << stringREF << std::endl;
}