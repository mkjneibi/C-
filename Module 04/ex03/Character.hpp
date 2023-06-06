/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:32 by mal-guna          #+#    #+#             */
/*   Updated: 2023/06/06 16:59:13 by mealjnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

		Character();
		Character(std::string name);
		Character(const Character& c);

		~Character();

		Character & operator=(const Character& a);

		std::string const & getName() const;
		AMateria const		*getInv(int idx) const;
		AMateria const		*getGnd(int idx) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		AMateria *inventory[4];
		AMateria *ground[1000];
		int count_ground;
		std::string name;

};

#endif