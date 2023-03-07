/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:20:09 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/02 13:51:34 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private :
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	darksecert;
		std::string _input(std::string str) const;
		std::string get_len(std::string str) const;
		int cont_index;

	public :
		Contact();
		~Contact();

		void	first_name(std::string f_name);
		void	last_name(std::string l_name);
		void	get_nickname(std::string nickname);
		void	get_phone_num(std::string phone_num);
		void	get_darksecret(std::string darksecert);
		void	init_contact(void);
		void    contact_index(int i);
		void	printContactInfo(int index, bool fullDisplay) const;
};

#endif