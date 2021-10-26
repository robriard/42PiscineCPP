/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:58:55 by robriard          #+#    #+#             */
/*   Updated: 2021/10/25 15:42:41 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce() const{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

Zombie::Zombie(std::string name) : _name(name){
    this->announce();
}

Zombie::~Zombie(void){
    std::cout << this->_name << " has been killed!" << std::endl;
}