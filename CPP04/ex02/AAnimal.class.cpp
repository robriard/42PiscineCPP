/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:15:59 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 12:18:28 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal(void) : _type("AAnimal"){
    std::cout << "[AAnimal] default constructor called" << std::endl;
    return;
}

AAnimal::AAnimal(AAnimal const & src) {
    std::cout << "[AAnimal] copy constructor called" << std::endl;
    this->_type = src._type;
    return;
}

AAnimal::~AAnimal(void){
    std::cout << "[AAnimal] destructor called" << std::endl;
    return;
}

AAnimal&         AAnimal::operator=(AAnimal const & rhs) {
    std::cout << "[AAnimal] operator + called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

std::string     AAnimal::getType(void) const{
    return this->_type;
}
