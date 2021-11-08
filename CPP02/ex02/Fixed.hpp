/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:53:40 by unknow            #+#    #+#             */
/*   Updated: 2021/11/08 14:17:59 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
public:
    Fixed();
    Fixed(int const nb);
    Fixed(float const nb);
    Fixed(Fixed const& src);
    ~Fixed();

    int         getRawBits(void) const;
    int         toInt(void) const;
    void        setRawBits(int const raw);
    float       toFloat(void) const;

    Fixed       operator+(Fixed const & rhs) const;
    Fixed       operator-(Fixed const & rhs) const;
    Fixed       operator*(Fixed const & rhs) const;
    Fixed       operator/(Fixed const & rhs) const;
    Fixed       operator++(int nb);
    Fixed       operator--(int nb);
    Fixed&      operator++();
    Fixed&      operator--();
    Fixed&      operator=(Fixed const & rhs);
    bool      operator<(Fixed const & rhs);
    bool      operator<=(Fixed const & rhs);
    bool      operator>(Fixed const & rhs);
    bool      operator>=(Fixed const & rhs);
    bool      operator==(Fixed const & rhs);
    bool      operator!=(Fixed const & rhs);

    static Fixed const&	min(Fixed const& lhs, Fixed const& rhs);
    static Fixed&		min(Fixed& lhs, Fixed& rhs);
    static Fixed const&	max(Fixed const& lhs, Fixed const& rhs);
    static Fixed&		max(Fixed& lhs, Fixed& rhs);

private:
    int         _n;
    static int const   _bits=8;
};

std::ostream&   operator<<(std::ostream& os, Fixed const& instance);

#endif