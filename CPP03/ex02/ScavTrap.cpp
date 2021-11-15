/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:24 by unknow            #+#    #+#             */
/*   Updated: 2021/11/15 11:51:55 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
    std::cout << "[ScavTrap] Default constructor called" << std::endl;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    return;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "[ScavTrap] Overload constructor called" << std::endl;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    std::cout << "[ScavTrap] Copy constructor called" << std::endl;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    return;
}

ScavTrap::~ScavTrap(void){
    std::cout << "[ScavTrap] " << this->_name
        << " has been destroyed" << std::endl;
    return;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const& rhs){
    std::cout << "[ScavTrap] operator = called" << std::endl;
    this->_name = rhs._name;
    this->_hit = rhs._hit;
    this->_energy = rhs._energy;
    this->_attack = rhs._attack;
    return *this;
}

void ScavTrap::guardGate(void){
    std::cout << "I'm "
        << this->_name << " and I enter in Gate Keeper mode" << std::endl;
}

void        ScavTrap::attack(std::string const & target){
    std::cout << "[ScavTrap] " << this->_name 
        << " attack " << target
        << ", causing " << this->_attack
        << " points of damage!" << std::endl;
}