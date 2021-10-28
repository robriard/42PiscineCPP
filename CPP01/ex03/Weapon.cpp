/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:40:30 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 14:49:39 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string   &Weapon::getType(void) const{
    return this->_type;
}

void                Weapon::setType(std::string type){
    this->_type = type;
    return ;
}

Weapon::Weapon(std::string type) : _type(type){
    std::cout << this->_type << " has been created!!" << std::endl;
}

Weapon::~Weapon(void) {
    std::cout << this->_type << " has been destroyed" << std::endl;
}