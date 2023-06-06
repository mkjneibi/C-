/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:00:26 by mealjnei          #+#    #+#             */
/*   Updated: 2023/06/06 17:00:30 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{

	public:
		Cure();
		Cure(const Cure& c);

		~Cure();

		Cure & operator=(const Cure& a);


		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
