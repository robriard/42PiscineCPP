/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:07:08 by unknow            #+#    #+#             */
/*   Updated: 2021/11/04 12:52:50 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
public:
    Point();
    Point(Fixed const x, Fixed const y);
    Point(Point const& src);
    ~Point();


    Point&      operator=(Point const& rhs);

    Fixed const&      getX() const;
    Fixed const&      getY() const;
private:
    Fixed _x;
    Fixed _y;
};

#endif