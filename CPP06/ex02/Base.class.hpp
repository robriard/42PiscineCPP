/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:31:25 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 11:02:20 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

# include <iostream>

class Base {
public:
    Base();
    virtual ~Base();

private:
    Base(Base const & src);
    Base& operator=(Base const &rhs);
};

#endif