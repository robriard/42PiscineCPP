/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:27:29 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 10:46:48 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain(){
    std::cout << "[Brain] Default constructor called" << std::endl;
    std::string ideas[] = {"walk", "run", "eat", "drink", "sleep"};
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[i % 5];
    return;
}

Brain::Brain(Brain const & src){
    std::cout << "[Brain] Copy constructor called" << std::endl;
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
    return;
}

Brain::~Brain(){
    std::cout << "[Brain] Default desstructor called" << std::endl;
    delete[] this->_ideas;
}

Brain&          Brain::operator=(Brain const & rhs){
    std::cout << "[Brain] operator = called" << std::endl;
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *this;
}

std::string     *Brain::getIdeas(void) const{
    return this->_ideas;
}