/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:15:59 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 13:18:21 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : _type("Animal"){
    std::cout << "[Animal] default constructor called" << std::endl;
    return;
}

Animal::Animal(std::string const & type) : _type(type){
    std::cout << "[Animal] Oevrload constructor called" << std::endl;
    return;
}

Animal::Animal(Animal const & src) {
    std::cout << "[Animal] copy constructor called" << std::endl;
    this->_type = src._type;
    return;
}

Animal::~Animal(void){
    std::cout << "[Animal] destructor called" << std::endl;
    return;
}

Animal&         Animal::operator=(Animal const & rhs) {
    std::cout << "[Animal] operator + called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

std::string     Animal::getType(void) const{
    return this->_type;
}

void            Animal::makeSound(void) const{
    std::cout << "..." << std::endl;
    return;
}
