/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 06:04:53 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 16:12:56 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.class.hpp"

MateriaSource::MateriaSource() {
	std::cout << "[MateriaSource] Default constructor called" << std::endl;
	this->_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
    return;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	std::cout << "[MateriaSource] Copy constructor called" << std::endl;
	this->_materia = src._materia;
    return;
}

MateriaSource::~MateriaSource() {
	std::cout << "[MateriaSource]  Desstructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	delete[] this->_materia;
    return;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) {
	std::cout << "[MateriaSource] operator = called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		this->_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] && !this->_materia[i]->getType().compare(type)) {
			std::cout << "A new " << this->_materia[i]->getType()
				<< " has been created" << std::endl;
			return (this->_materia[i]->clone());
		}
	}
	std::cout << type << " can't be created" << std::endl;
	return NULL;
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL) {
			std::cout << materia->getType()
				<< " has been learned" << std::endl;
			this->_materia[i] = materia;
			return;
		}
	}
	std::cout << materia->getType()
		<< " don't be learned" << std::endl;
	return;
}