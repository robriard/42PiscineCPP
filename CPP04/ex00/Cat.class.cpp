/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:15:59 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 10:39:16 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void){
    std::cout << "[Cat] default constructor called" << std::endl;
    this->_type = "Cat";
    return;
}

Cat::Cat(Cat const & src) {
    std::cout << "[Cat] copy constructor called" << std::endl;
    this->_type = src._type;
    return;
}

Cat::~Cat(void){
    std::cout << "[Cat] destructor called" << std::endl;
    return;
}

Cat&         Cat::operator=(Cat const & rhs) {
    std::cout << "[Cat] operator + called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

void            Cat::makeSound(void) const{
    std::cout << "Meow" << std::endl;
    return;
}
