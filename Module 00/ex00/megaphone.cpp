/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:36:31 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/25 13:03:05 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (i = 1; av[i]; i++)
    {
        for (j = 0; av[i][j]; j++)
            av[i][j] = (char)toupper(av[i][j]);
        std::cout << av[i];
    }
    std::cout << std::endl;
}