/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:22:26 by unknow            #+#    #+#             */
/*   Updated: 2021/11/08 14:17:24 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*       BTP                                                                  */
/* ************************************************************************** */

Fixed::Fixed() : _n(0) {
    return;
}

Fixed::Fixed(int const nb) {
    this->_n = nb << this->_bits;
    return;
}

Fixed::Fixed(float const f) {
    this->_n = (int)(roundf(f * (1 << this->_bits)));
    return;
}

Fixed::Fixed(Fixed const& src) {
    this->setRawBits(src.getRawBits());
    return;
}

Fixed::~Fixed(){
    return;
}





/* ************************************************************************** */
/*       Operateurs Membres                                                   */
/* ************************************************************************** */

    /* ===== arithmétiques ===== */

Fixed&   Fixed::operator=(Fixed const & rhs){
    this->_n = rhs.getRawBits();
    return *this;
}

Fixed   Fixed::operator+(Fixed const & rhs) const{
    Fixed   ret(this->getRawBits() + rhs.getRawBits());
    return ret;
}

Fixed   Fixed::operator-(Fixed const & rhs) const{
    Fixed   ret(this->getRawBits() - rhs.getRawBits());
    return ret;
}

Fixed   Fixed::operator*(Fixed const & rhs) const{
    Fixed   ret(this->toFloat() * rhs.toFloat());
    return ret;
}

Fixed   Fixed::operator/(Fixed const & rhs) const{
    Fixed   ret(this->toFloat() / rhs.toFloat());
    return ret;
}

Fixed&  Fixed::operator++(){
    ++this->_n;
    return *this;
}

Fixed   Fixed::operator++(int){
    Fixed tmp(*this);
    this->operator++();
    return tmp;
}

Fixed&  Fixed::operator--(){
    --this->_n;
    return *this;
}

Fixed   Fixed::operator--(int){
    Fixed tmp(*this);
    this->operator--();
    return tmp;
}

    /* ===== comparatifs ===== */

bool    Fixed::operator==(Fixed const & rhs){
    if (this->getRawBits() == rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const & rhs){
    if (this->getRawBits() != rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const & rhs){
    if (this->getRawBits() >= rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const & rhs){
    if (this->getRawBits() <= rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<(Fixed const & rhs){
    if (this->getRawBits() < rhs.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>(Fixed const & rhs){
    if (this->getRawBits() > rhs.getRawBits())
        return true;
    return false;
}





/* ************************************************************************** */
/*       Functions                                                            */
/* ************************************************************************** */

int     Fixed::getRawBits(void) const{
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

Fixed const&	Fixed::min(Fixed const& lhs, Fixed const& rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed&		Fixed::min(Fixed& lhs, Fixed& rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed const&	Fixed::max(Fixed const& lhs, Fixed const& rhs){
	if (lhs.getRawBits() < rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed&		Fixed::max(Fixed& lhs, Fixed& rhs){
	if (lhs.getRawBits() < rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}





/* ************************************************************************** */
/*       Operateurs                                                           */
/* ************************************************************************** */

std::ostream&   operator<<(std::ostream& os, Fixed const& instance){
    os << instance.toFloat();
    return os;
}