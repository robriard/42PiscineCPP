/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:07:25 by unknow            #+#    #+#             */
/*   Updated: 2021/11/18 11:15:15 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "ICharacter.class.hpp"

/* ************************************************************************** */
/*                          AMATERIA                                          */
/* ************************************************************************** */

AMateria::AMateria(){
    std::cout << "[AMateria] Default constructor called" << std::endl;
    return;
}

AMateria::AMateria(std::string const& type) : _type(type){
    std::cout << "[AMateria] Overload constructor called" << std::endl;
    return;
}

AMateria::AMateria(AMateria const & src) : _type(src._type){
    std::cout << "[AMateria] Copy constructor called" << std::endl;
    return;
}

AMateria::~AMateria(){
    std::cout << "[AMateria] Destructor called" << std::endl;
    return;
}

AMateria& AMateria::operator=(AMateria const & rhs){
    std::cout << "[AMateria] operator = called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

std::string const& AMateria::getType(void) const{
    return this->_type;
}

void                AMateria::use(ICharacter& target){
    std::cout << "AMateria: can't be used on " << target.getName() << std::endl;
}


/* ************************************************************************** */
/*                          ICE                                               */
/* ************************************************************************** */

Ice::Ice() : AMateria("ice"){
    std::cout << "[ICE] Default constructor called" << std::endl;
    return;
}

Ice::Ice(Ice const & src) : AMateria(src){
    std::cout << "[ICE] Copy constructor called" << std::endl;
    return;
}

Ice::~Ice(){
    std::cout << "[Ice] Destructor called" << std::endl;
}

Ice&    Ice::operator=(Ice const & rhs){
    std::cout << "[Ice] operator = called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

Ice*    Ice::clone(void) const{
    std::cout << "[ICE] Materia has been cloned" << std::endl;
    return new Ice();
}

void    Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}

/* ************************************************************************** */
/*                          CURE                                              */
/* ************************************************************************** */

Cure::Cure() : AMateria("cure"){
    std::cout << "[Cure] Default constructor called" << std::endl;
    return;
}

Cure::Cure(Cure const & src) : AMateria(src){
    std::cout << "[Cure] Copy constructor called" << std::endl;
    return;
}

Cure::~Cure(){
    std::cout << "[Cure] Destructor called" << std::endl;
}

Cure&    Cure::operator=(Cure const & rhs){
    std::cout << "[Cure] operator = called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

Cure*    Cure::clone(void) const{
    std::cout << "[CURE] Materia has been cloned" << std::endl;
    return new Cure();
}

void    Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    return;
}