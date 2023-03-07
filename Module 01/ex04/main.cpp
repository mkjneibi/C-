/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:17:05 by mealjnei          #+#    #+#             */
/*   Updated: 2023/02/28 15:29:13 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Too few arguemnts" << std::endl;
        std::cout << "Usage : " << "<./program_name> " << "<filename> "
            << "<string 1> " << "<string 2>" << std::endl;
        return (EXIT_FAILURE);
    }
    // Open the input file
    std::ifstream input_file(av[1]);
    if (!input_file)
    {
        std::cout << "Error: Could not open input file " << av[1] << std::endl;
        return (EXIT_FAILURE);
    }
    // Open the output file
    std::string output_filename = std::string(av[1]) + ".replace";
    std::ofstream output_file(output_filename.c_str());
    if (!output_file)
    {
        std::cout << "Error: Could not open output file " << output_filename << std::endl;
        return (EXIT_FAILURE);
    }

    // Read the input file line by line and replace s1 with s2
    // s1 and s2 strings to be replaced
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line; // store each line of the input file as it is read

    // while loop will read the file using getline and stores it in line
    while (std::getline(input_file, line))
    {
        size_t pos = line.find(s1); //search for the old occurance of the old value in line
        //and stores it in pos

        //see if the old value is not found
        while (pos != std::string::npos)
        {
            line.replace(pos, s1.length(), s2); //replace the old value with the new value
            pos = line.find(s1, pos + s2.length());
        }
        output_file << line << std::endl; //write the update the file in line
    }
    // Close the input and output files
    input_file.close();
    output_file.close();
}