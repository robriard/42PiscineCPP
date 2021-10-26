/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:58:55 by robriard          #+#    #+#             */
/*   Updated: 2021/10/26 12:52:30 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce() const{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void    Zombie::setName(std::string name) {
    this->_name = name;
    return ;
}

Zombie::Zombie() {
    return ;
}

Zombie::Zombie(std::string name) : _name(name){
    this->announce();
    return ;
}

Zombie::~Zombie(void){
    std::cout << this->_name << " has been killed!" << std::endl;
    return ;
}