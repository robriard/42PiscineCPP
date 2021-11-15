/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:25:21 by unknow            #+#    #+#             */
/*   Updated: 2021/11/11 04:37:38 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "A new ClapTrap has been created" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0){
    std::cout << "A new ClapTrap has been created, and his name is "
        << this->_name << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _name(src._name), _hit(src._hit), _energy(src._energy), _attack(src._attack){
    std::cout << "A new ClapTrap has been created by copy of "
        << this->_name << std::endl;
    return;
}

ClapTrap::~ClapTrap(){
    std::cout << this->_name << " has been destroyed" << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const& rhs){
    this->_name = rhs._name;
    this->_hit = rhs._hit;
    this->_energy = rhs._energy;
    this->_attack = rhs._attack;
    return *this;
}

std::string const   ClapTrap::getName(void) const {
    return this->_name;
}

unsigned int        ClapTrap::getEnergy(void) const{
    return this->_energy;
}

void        ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << this->_name 
        << " attack " << target
        << ", causing " << this->_attack
        << " points of damage!" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount){
    if (amount >= this->_energy) {
        std::cout << this->_name
            << " take " << this->_energy
            << " damage" << std::endl;
        this->_energy = 0;
    }
    else
    {
        std::cout << this->_name
            << " take " << amount << " damage" << std::endl;
        this->_energy-=amount;
    }
}

void        ClapTrap::beRepaired(unsigned int amount){
    std::cout << this->_name << " receive "
        << amount << " Energy Points" << std::endl;
    this->_energy+=amount;
}