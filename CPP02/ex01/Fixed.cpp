/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:22:26 by unknow            #+#    #+#             */
/*   Updated: 2021/11/08 14:15:31 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const nb) {
    std::cout << "Int constructor called" << std::endl;
    this->_n = nb << this->_bits;
    return;
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_n = (int)(roundf(f * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed&   Fixed::operator=(Fixed const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return *this;
}


int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void    Fixed::setRawBits(int const raw){
    this->_n = raw;
    return;
}

float   Fixed::toFloat(void) const{
    return ((float)this->_n / (float)(1 << this->_bits));
}

int     Fixed::toInt(void) const{
    return this->_n >> this->_bits;    
}

std::ostream&   operator<<(std::ostream& os, Fixed const& instance){
    os << instance.toFloat();
    return os;
}
