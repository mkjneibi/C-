/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:35:00 by mealjnei          #+#    #+#             */
/*   Updated: 2023/03/06 22:04:11 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private :
	int					number;
	static const int	f_bits = 8;

	public :
	Fixed();
	Fixed(const Fixed &copy);
	Fixed & operator = (const Fixed &copy);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif