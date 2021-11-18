/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:15:59 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 10:55:23 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : _brain(new Brain()){
    std::cout << "[Dog] default constructor called" << std::endl;
    this->_type = "Dog";
    return;
}

Dog::Dog(Dog const & src) {
    std::cout << "[Dog] copy constructor called" << std::endl;
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return;
}

Dog::~Dog(void){
    std::cout << "[Dog] destructor called" << std::endl;
    delete this->_brain;
    return;
}

Dog&         Dog::operator=(Dog const & rhs) {
    std::cout << "[Dog] operator + called" << std::endl;
    this->_type = rhs._type;
    this->_brain = new Brain(*rhs._brain);
    return *this;
}

void            Dog::makeSound(void) const{
    std::cout << "Wouaf" << std::endl;
    return;
}