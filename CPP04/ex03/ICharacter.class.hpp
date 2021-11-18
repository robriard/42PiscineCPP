/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 04:51:04 by unknow            #+#    #+#             */
/*   Updated: 2021/11/18 05:33:26 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

# include <iostream>
#include "AMateria.class.hpp"

class ICharacter{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* newMateria) = 0;
        virtual void unequip(int index) = 0;
        virtual void use(int index, ICharacter& target) = 0;
};

class Character : public ICharacter{
public:
	Character(std::string name);
	Character(Character const & src);
	~Character();

	Character& operator=(Character const & rhs);

	std::string const & getName() const;
	void equip(AMateria* newMateria);
	void unequip(int index);
	void use(int index, ICharacter& target);

private:
	std::string _name;
	AMateria **_materia;
	Character();
};

#endif