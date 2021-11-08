/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:58:19 by unknow            #+#    #+#             */
/*   Updated: 2021/11/04 12:53:15 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   test_half_plan(Point const p1, Point const p2, Point const p3) {
    return (p1.getX().getRawBits() - p3.getX().getRawBits()) * (p2.getY().getRawBits() - p3.getY().getRawBits())
            - (p2.getX().getRawBits() - p3.getX().getRawBits()) * (p1.getY().getRawBits() - p3.getY().getRawBits());
}

bool    bsp(Point const a, Point const b, Point const c, Point const point){
    bool b1, b2, b3;

    b1 = test_half_plan(a, b, point) < 0.0f;
    b2 = test_half_plan(b, c, point) < 0.0f;
    b3 = test_half_plan(c, a, point) < 0.0f;
    return ((b1 == b2) && (b2 == b3));
}
