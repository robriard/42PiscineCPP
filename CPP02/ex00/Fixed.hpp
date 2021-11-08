/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:53:40 by unknow            #+#    #+#             */
/*   Updated: 2021/11/08 14:12:48 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
public:
    Fixed();
    Fixed(Fixed const& src);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    Fixed&   operator=(Fixed const & rhs);
    
private:
    int                 _n;
    static int const    _bits=8;
};

#endif