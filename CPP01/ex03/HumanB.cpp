/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:23:07 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 15:18:21 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void                HumanB::attack(void){
    if (this->_Weapon)
        std::cout << this->_name << " attacks with his " << this->_Weapon->getType() << std::endl;
    else
        std::cout << this->_name << " attack with his fists" << std::endl;
}

void                HumanB::setWeapon(Weapon& weapon){
    if (this->_Weapon)
        std::cout << this->_name << " drop the " << this->_Weapon->getType() 
            << " and take " << weapon.getType() << std::endl;
    else
        std::cout << this->_name << " take " << weapon.getType() << std::endl;
    this->_Weapon = &weapon;
}

const std::string&  HumanB::getName(void) const{
    return this->_name;
}


HumanB::HumanB(std::string name) : _name(name), _Weapon(NULL) {
    std::cout << name << " is born" << std::endl;
}

HumanB::~HumanB(){
    std::cout << _name << " die" << std::endl;
}