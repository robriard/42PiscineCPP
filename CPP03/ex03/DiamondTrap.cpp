/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:22:33 by unknow            #+#    #+#             */
/*   Updated: 2021/11/15 13:13:34 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
    this->_name = ClapTrap::_name;
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attack = FragTrap::_attack;
    std::cout << "[DiamondTrap] Default constructor called" << std::endl;
    return;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name){
    std::cout << "[DiamondTrap] Overload constructor called" << std::endl;
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attack = FragTrap::_attack;
    return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src){
    std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
    ClapTrap::_name = src._name + "_clap_name";
    this->_name = src._name;
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attack = FragTrap::_attack;
    return;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "[DiamondTrap] " << this->_name
        << " has been destroyed" << std::endl;
    return;
}

DiamondTrap&   DiamondTrap::operator=(DiamondTrap const& rhs){
    std::cout << "[DiamondTrap] Operator = called" << std::endl;
    ClapTrap::_name = rhs._name + "_clap_name";
    this->_name = rhs._name;
    this->_hit = rhs._hit;
    this->_energy = rhs._energy;
    this->_attack = rhs._attack;
    return *this;
}

void DiamondTrap::whoAmI(void) const{
    std::cout << "HEY!! I'm "
        << this->_name << ", and my ClapTrap name is "
        << ClapTrap::_name << std::endl;
}

void        DiamondTrap::attack(std::string const & target) const{
    ScavTrap::attack(target);
}

std::string&    DiamondTrap::getName(void){
    return this->_name;
}
