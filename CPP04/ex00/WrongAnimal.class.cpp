/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:29:41 by unknow            #+#    #+#             */
/*   Updated: 2021/11/16 15:30:45 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal"){
    std::cout << "[WrongAnimal] default constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
    std::cout << "[WrongAnimal] copy constructor called" << std::endl;
    this->_type = src._type;
    return;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "[WrongAnimal] destructor called" << std::endl;
    return;
}

WrongAnimal&         WrongAnimal::operator=(WrongAnimal const & rhs) {
    std::cout << "[WrongAnimal] operator + called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

std::string     WrongAnimal::getType(void) const{
    return this->_type;
}

void            WrongAnimal::makeSound(void) const{
    std::cout << "Wrong Animal don't make sound" << std::endl;
    return;
}