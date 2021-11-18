/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:15:59 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 10:40:27 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat(void){
    std::cout << "[WrongCat] default constructor called" << std::endl;
    this->_type = "WrongCat";
    return;
}

WrongCat::WrongCat(WrongCat const & src) {
    std::cout << "[WrongCat] copy constructor called" << std::endl;
    this->_type = src._type;
    return;
}

WrongCat::~WrongCat(void){
    std::cout << "[WrongCat] destructor called" << std::endl;
    return;
}

WrongCat&         WrongCat::operator=(WrongCat const & rhs) {
    std::cout << "[WrongCat] operator + called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

void            WrongCat::makeSound(void) const{
    WrongAnimal::makeSound();
    return;
}
