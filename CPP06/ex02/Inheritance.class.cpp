/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inheritance.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:42:14 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 10:55:33 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inheritance.class.hpp"

/* ************************************************************************** */
/*                          A                                                 */
/* ************************************************************************** */

A::A() : Base() {
    std::cout << "[A] Default constructor called" << std::endl;
    return;
}

A::A(A const & src) : Base() {
    std::cout << "[A] Copy constructor called from " << &src << std::endl;
    return;
}

A::~A() {
    std::cout << "[A] Destructor called" << std::endl;
    return;
}

A &  A::operator=(A const & rhs) {
    std::cout << "[A] Operator = called from " << &rhs << std::endl;
    return *this;
}



/* ************************************************************************** */
/*                          B                                                 */
/* ************************************************************************** */

B::B() : Base() {
    std::cout << "[B] Default constructor called" << std::endl;
    return;
}

B::B(B const & src) : Base() {
    std::cout << "[B] Copy constructor called from " << &src << std::endl;
    return;
}

B::~B() {
    std::cout << "[B] Destructor called" << std::endl;
    return;
}

B &  B::operator=(B const & rhs) {
    std::cout << "[B] Operator = called from " << &rhs << std::endl;
    return *this;
}



/* ************************************************************************** */
/*                          C                                                 */
/* ************************************************************************** */

C::C() : Base() {
    std::cout << "[C] Default constructor called" << std::endl;
    return;
}

C::C(C const & src) : Base() {
    std::cout << "[C] Copy constructor called form" << &src << std::endl;
    return;
}

C::~C() {
    std::cout << "[C] Destructor called" << std::endl;
    return;
}

C &  C::operator=(C const & rhs) {
    std::cout << "[C] Operator = called from " << &rhs << std::endl;
    return *this;
}