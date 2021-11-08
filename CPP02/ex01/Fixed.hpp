/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:53:40 by unknow            #+#    #+#             */
/*   Updated: 2021/11/08 14:15:07 by unknow           ###   ########.fr       */
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

    int     getRawBits(void) const;
    int     toInt(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;

    Fixed&   operator=(Fixed const & rhs);
    
private:
    int         _n;
    static int const   _bits=8;
};

std::ostream&   operator<<(std::ostream& os, Fixed const& instance);

#endif