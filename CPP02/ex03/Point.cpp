/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:21:45 by unknow            #+#    #+#             */
/*   Updated: 2021/11/04 21:45:28 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){
    return;
}

Point::Point(Point const& src) : _x(src.getX()), _y(src.getY()){
    return;
}
Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y){
    return;
}

Point::~Point(){
    return;
}

Point&   Point::operator=(Point const& rhs){
    this->_x = rhs.getX();
    this->_y = rhs.getY();
    return *this;
}

Fixed const&      Point::getX() const{
    return this->_x;
}

Fixed const&      Point::getY() const{
    return this->_y;
}