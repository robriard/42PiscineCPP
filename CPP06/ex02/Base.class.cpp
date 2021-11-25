/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:35:09 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 10:54:15 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

Base::Base() {
    std::cout << "[Base] Default constructor called" << std::endl;
    return;
}

Base::Base(Base const & src) {
    std::cout << "[Base] Copy constructor called from " << &src << std::endl;
    return;
}

Base::~Base() {
    std::cout << "[Base] Destructor called" << std::endl;
    return;
}

Base &  Base::operator=(Base const & rhs) {
    std::cout << "[Base] Operator = called from " << &rhs << std::endl;
    return *this;
}