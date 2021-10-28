/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:10:05 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 15:08:04 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void                HumanA::attack(void){
    std::cout << this->_name << " attacks with his " << this->_Weapon.getType() << std::endl;
}

void                HumanA::takeWeapon(Weapon& weapon){
    std::cout << this->_name << " drop the " << this->_Weapon.getType() 
        << " and take " << weapon.getType() << std::endl;
    this->_Weapon = weapon;
}

const std::string&  HumanA::getName(void) const{
    return this->_name;
}


HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _Weapon(weapon) {
    std::cout << name << " is born and take " << this->_Weapon.getType() << std::endl;    
}

HumanA::~HumanA(){
    std::cout << _name << " die" << std::endl;
}