/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:08:18 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/02 14:00:52 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>

class   Phonebook
{
	public :
	Phonebook();
    ~Phonebook();

	void	welcome_msg() const;
	void	add_contact();
	void	search_contact() const;

	private :
	Contact		contacts[8];
	int         cont_input() const;
};

#endif