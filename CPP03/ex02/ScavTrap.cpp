/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:24 by unknow            #+#    #+#             */
/*   Updated: 2021/11/11 04:42:35 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Déjà Comment tu as réussi à utiliser ce constructeur ?"){
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "Default ScavTrap Constructor called" << std::endl;
    return;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "[ScavTrap] " << this->_name
        << " has been created" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "[ScavTrap] " << this->_name
        << " has been created by copy" << std::endl;
    return;
}

ScavTrap::~ScavTrap(void){
    std::cout << "[ScavTrap] " << this->_name
        << " has been destroyed" << std::endl;
    return;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const& rhs){
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