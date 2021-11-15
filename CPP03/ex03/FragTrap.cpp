/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:24 by unknow            #+#    #+#             */
/*   Updated: 2021/11/11 04:46:18 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Déjà Comment tu as réussi à utiliser ce constructeur ?"){
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "Default FragTrap Constructor called" << std::endl;
    return;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "[FragTrap] " << this->_name
        << " has been created" << std::endl;
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
    std::cout << "[FragTrap] " << this->_name
        << " has been created by copy" << std::endl;
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    return;
}

FragTrap::~FragTrap(){
    std::cout << "[FragTrap] " << this->_name
        << " has been destroyed" << std::endl;
    return;
}

FragTrap&   FragTrap::operator=(FragTrap const& rhs){
    this->_name = rhs._name;
    this->_hit = rhs._hit;
    this->_energy = rhs._energy;
    this->_attack = rhs._attack;
    return *this;
}

void FragTrap::highFivesGuys(){
    std::cout << "YEAH!!! Give an highFives to your best friend... ME, "
        << this->_name << "!!!" << std::endl;
}

void        FragTrap::attack(std::string const & target){
    std::cout << "[FragTrap] " << this->_name 
        << " attack " << target
        << ", causing " << this->_attack
        << " points of damage!" << std::endl;
}