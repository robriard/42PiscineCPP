/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 05:05:41 by unknow            #+#    #+#             */
/*   Updated: 2021/11/18 07:00:08 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.class.hpp"

Character::Character() :_name("bob"){
	std::cout << "[CHARACTER] Default constructor called" << std::endl;
    this->_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
    return;
}

Character::Character(std::string name) :_name(name){
	std::cout << "[CHARACTER] Overload constructor called" << std::endl;
    this->_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
    return;
}

Character::Character(Character const & src) : _name(src._name){
    std::cout << "[CHARACTER] Copy constructor called" << std::endl;
	this->_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
    return;
}

Character::~Character() {
	std::cout << "[CHARACTER] Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	delete[] this->_materia;
    return;
}

Character&    Character::operator=(Character const & rhs){
    std::cout << "[Character] operator = called" << std::endl;
	this->_name = rhs._name;
    for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		this->_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* newMateria) {
	for (int i = 0; i < 4; i++) {
		if (newMateria && this->_materia[i] == NULL) {
			this->_materia[i] = newMateria;
			std::cout << this->_name
				<< " equip " << newMateria->getType()
				<< std::endl;
			return;
		}
	}
	std::cout << this->_name << " can't equip more matria" << std::endl;
    return;
}

void Character::unequip(int index) {
	if (this->_materia[index]) {
		std::cout << this->_name << " unequip "
			<< this->_materia[index]->getType() << std::endl;
		this->_materia[index] = NULL;
	} else
		std::cout << "This slot is empty" << std::endl;
    return;
}

void Character::use(int index, ICharacter& target)
{
	if (this->_materia[index])
		this->_materia[index]->use(target);
}
