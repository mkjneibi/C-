/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:55 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:15:01 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	public:

	// ----------------------------- Constructors ------------------------------ //
		MateriaSource();	// Default Constructor
		MateriaSource(const MateriaSource& c);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		~MateriaSource();	// Destructor

	// ------------------------------- Operators ------------------------------- //
		MateriaSource & operator=(const MateriaSource& a);
		// Copy Assignement Operator

	// --------------------------- Getters && Setters -------------------------- //
	// --------------------------------- Methods ------------------------------- //
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria *learned[4];

};

#endif